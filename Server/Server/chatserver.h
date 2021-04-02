// sercli.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include<winsock.h>
#include<Windows.h>
#include<stdio.h>
#pragma comment(lib, "ws2_32.lib")

SOCKET ser_sock, cli_sock[10];
int count = 0;
SOCKADDR_IN addr = { 0 };
SOCKADDR_IN cliaddr = { 0 };
char buff[1024];

//1_请求版本协议
DWORD StartSock() {
    WSADATA WSAData;
    if (WSAStartup(MAKEWORD(2, 2), &WSAData) != 0) {
        std::cout << "请求失败\n";
        return -1;
    }
    std::cout << "请求成功\n";
    //3_创建ip，port
    addr.sin_family = AF_INET;
    addr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(12000);
    return 1;
}
//2_create socket
DWORD CreateSocket() {
    ser_sock = socket(AF_INET, SOCK_STREAM, 0);//0即TCP
    if (ser_sock == SOCKET_ERROR) {
        printf("创建socket失败");
        WSACleanup();
        return -2;
    }
    printf("创建socket成功\n");
    return true;
}
//bind
DWORD bind_ipsocket() {
    if (bind(ser_sock, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR) {//绑定套接字
        printf("bind is the erorr\n");
        closesocket(ser_sock);
        WSACleanup();
        return -1;
    }
    printf("Successful socket binding.\n");
    return 1;
}

void communicate(int idx) {//tongxin
    char buff[1024];
    int r;
    //printf("idx：%d\n",idx);
    //while (true)
    //{
        r = recv(cli_sock[idx], buff, 1023, NULL);
        if (r > 0) {
            buff[r] = 0;
            printf("%d:%s\n", idx,buff);
            //广播数据
            for (int i = 0;i < count;i++) {
                send(cli_sock[i], buff, strlen(buff),0);
            }
        }
        //count++;
    //}
}


