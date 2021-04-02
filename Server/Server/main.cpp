#include "server.h"
#include "chatserver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Server w;
    w.show();
    w.showMessage("star \n");
    StartSock();
    CreateSocket();
    bind_ipsocket();
    //printf("listening...\n");
    w.showMessage("listening...\n");
    if (listen(ser_sock, 5) < 0) {
        //printf("监听失败\n");
        w.showMessage("fali\n");
        return(-1);
    }
    w.showMessage("saada\n");
    //printf("监听成功\n");
    w.showMessage("ok \n");
    int len = sizeof(sockaddr_in);
    cli_sock[count] = accept(ser_sock, (struct sockaddr FAR *)&addr, &len);//error
    if (cli_sock[count] == SOCKET_ERROR) {
                //printf("服务器挂了\n");//update 在线状态->1
                w.showMessage("服务器挂了\n");
                closesocket(ser_sock);
                WSACleanup();
                return -2;
      }
    count++;
     //printf("%d个客户端连接到服务器\n", count);
     w.showMessage("1 client connected\n");
     communicate(0);






//    while (true)
//    {
//        cli_sock[count] = accept(ser_sock, (struct sockaddr FAR *)&addr, &len);//error
//        if (cli_sock[count] == SOCKET_ERROR) {
//            //printf("服务器挂了\n");//update 在线状态->1
//            w.showMessage("服务器挂了\n");
//            closesocket(ser_sock);
//            WSACleanup();
//            return -2;
//        }
//        HANDLE hThread1 = CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)communicate, (char*)count, NULL, NULL);
//        CloseHandle(hThread1);
//        count++;
//        //printf("%d个客户端连接到服务器\n", count);
//         w.showMessage("%d个客户端连接到服务器\n");
//    }
    return a.exec();
}
