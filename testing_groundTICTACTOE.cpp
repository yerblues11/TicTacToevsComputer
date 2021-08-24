#include <iostream>
#include <windows.h>

    using namespace std;

    int main(){

        int x, y, cx, cy, plays, hx, hy, coor;
        char t[3][3];
        bool empate=false;

        do{
            plays=1;

            for(x=0;x<3;x++){
                for(y=0;y<3;y++){
                    t[x][y]=' ';
                }
            }

            do{
                system("cls");
                cout<<"Computer"<<endl;

                ///INICIO
                if(plays==1){

                    hx=0, hy=0;
                }
                else if(plays>=2){

                    ///ENTRADA
                    if( t[0][2]=='X' && t[0][0]=='O' && t[0][1]==' ' && t[1][0]==' ' && t[1][1]==' ' && t[1][2]==' ' && t[2][0]==' ' && t[2][1]==' ' && t[2][2]==' ' ||
                        t[2][0]=='X' && t[0][0]=='O' && t[1][0]==' ' && t[0][1]==' ' && t[1][1]==' ' && t[2][1]==' ' && t[0][2]==' ' && t[1][2]==' ' && t[2][2]==' ' ||
                        t[1][1]=='X' && t[0][0]=='O' && t[0][1]==' ' && t[0][2]==' ' && t[1][2]==' ' && t[2][2]==' ' && t[2][1]==' ' && t[2][0]==' ' && t[1][0]==' ' ){
                        hx=2,hy=2;
                    }else if(t[2][2]=='X' && t[0][0]=='O' && t[0][1]==' ' && t[0][2]==' ' && t[1][2]==' ' && t[1][1]==' ' && t[2][1]==' ' && t[2][0]==' ' && t[1][0]==' '){
                        hx=0,hy=2;
                    }else if(t[2][1]=='X' && t[0][0]=='O' && t[0][1]==' ' && t[0][2]==' ' && t[1][2]==' ' && t[1][1]==' ' && t[2][2]==' ' && t[2][0]==' ' && t[1][0]==' ' ||
                             t[1][2]=='X' && t[0][0]=='O' && t[0][1]==' ' && t[0][2]==' ' && t[2][2]==' ' && t[1][1]==' ' && t[2][1]==' ' && t[2][0]==' ' && t[1][0]==' '){
                        hx=2,hy=0;
                    }else if(t[0][1]=='X' && t[0][0]=='O' && t[0][2]==' ' && t[1][0]==' ' && t[1][1]==' ' && t[1][2]==' ' && t[2][0]==' ' && t[2][1]==' ' && t[2][2]==' '){
                        hx=2,hy=0;
                    }else if(t[1][0]=='X' && t[0][0]=='O' && t[2][0]==' ' && t[0][1]==' ' && t[1][1]==' ' && t[2][1]==' ' && t[0][2]==' ' && t[1][2]==' ' && t[2][2]==' '){
                        hx=0,hy=2;
                    }
                    if(t[0][0]=='O' && t[0][1]=='X' && t[0][2]=='O' && t[2][2]==' '){
                        hx=2,hy=2;
                    }



                    ///TERCERA VUELTA
                    if(t[1][1]=='X' && t[0][0]=='O' && t[2][2]=='O' && t[2][0]=='X' && t[0][1]==' ' && t[0][2]==' ' && t[1][2]==' ' && t[1][0]==' ' && t[2][1]==' '){
                        hx=0,hy=2;
                    }else if(t[1][1]=='X' && t[0][0]=='O' && t[2][2]=='O' && t[0][2]=='X' && t[0][1]==' ' && t[2][0]==' ' && t[1][2]==' ' && t[1][0]==' ' && t[2][1]==' '){
                        hx=2,hy=0;
                    }

                    if(t[0][0]=='O' && t[2][0]=='O' && t[0][2]==' '){
                        hx=0,hy=2;
                    }else if(t[0][0]=='O' && t[2][2]=='O' && t[0][2]==' '){
                        hx=0,hy=2;
                    }
                    if(t[0][0]=='O' && t[0][2]=='O' && t[2][2]=='X'){
                        hx=2,hy=0;
                    }

                    ///BLOQUEO

                    ///EQUIS CENTRAL

                    ///UP-DOWN
                    if(t[1][1]=='X' && t[0][1]=='X' && t[2][1]==' '){
                        hx=2,hy=1;
                    }else if(t[1][1]=='X' && t[2][1]=='X' && t[0][1]==' '){
                        hx=0,hy=1;
                    }else if(t[1][1]==' ' && t[0][1]=='X' && t[2][1]=='X'){
                        hx=1,hy=1;
                    }
                    ///LEFT-RIGHT
                    if(t[1][1]=='X' && t[1][0]=='X' && t[1][2]==' '){
                        hx=1,hy=2;
                    }else if(t[1][1]=='X' && t[1][0]==' ' && t[1][2]=='X'){
                        hx=1,hy=0;
                    }else if(t[1][0]=='X' && t[1][1]==' ' && t[1][2]=='X'){
                        hx=1,hy=1;
                    }
                    ///DIAGONAL /
                    if(t[1][1]=='X' && t[0][2]=='X' && t[2][0]==' '){
                        hx=2,hy=0;
                    }else if(t[1][1]=='X' && t[0][2]==' ' && t[2][0]=='X'){
                        hx=0,hy=2;
                    }else if(t[1][1]==' ' && t[0][2]=='X' && t[2][0]=='X'){
                        hx=1,hy=1;
                    }

                    ///FIN BLOQUEO

                    if(t[0][0]=='O'){
                        if(t[1][0]=='O' && t[2][0]==' '){
                            hx=2, hy=0;
                        }else if(t[1][1]=='O' && t[2][2]==' '){
                            hx=2, hy=2;
                        }else if(t[0][1]=='O' && t[0][2]==' '){
                            hx=0, hy=2;
                        }
                        if(t[1][0]==' ' && t[2][0]=='O'){
                            hx=1, hy=0;
                        }else if(t[1][1]==' ' && t[2][2]=='O'){
                            hx=1, hy=1;
                        }else if(t[0][1]==' ' && t[0][2]=='O'){
                            hx=0, hy=1;
                        }
                    }
                    if(t[2][2]=='O'){
                        if(t[2][1]=='O' && t[2][0]==' '){
                            hx=2, hy=0;
                        }else if(t[1][2]=='O' && t[0][2]==' '){
                            hx=0, hy=2;
                        }else if(t[1][1]=='O' && t[0][0]==' '){
                            hx=0, hy=0;
                        }
                        if(t[2][1]==' ' && t[2][0]=='O'){
                            hx=2, hy=1;
                        }else if(t[1][1]==' ' && t[0][0]=='O'){
                            hx=1, hy=1;
                        }else if(t[1][2]==' ' && t[0][2]=='O'){
                            hx=1, hy=2;
                        }
                    }
                    if(t[1][1]=='O'){
                        if(t[0][2]=='O' && t[2][0]==' '){
                            hx=2, hy=0;
                        }else if(t[2][0]=='O' && t[0][2]==' '){
                            hx=0, hy=2;
                        }
                    }
                    if(t[0][2]=='O' && t[1][1]==' ' && t[2][0]=='O'){
                            hx=1, hy=1;
                        }


                }

                t[hx][hy]='O';

                for(x=0;x<3;x++){
                    for(y=0;y<3;y++){
                        printf("[%c]", t[x][y]);
                    }
                    printf("\n");
                }

                cout<<endl;
                cout<<"Tu:"<<endl;
                cout<<"Coord: ";
                cin>>coor;

                switch(coor){
                    case 0: coor=0; break;
                    case 1: cx=2; cy=0; break;
                    case 2: cx=2; cy=1; break;
                    case 3: cx=2; cy=2; break;
                    case 4: cx=1; cy=0; break;
                    case 5: cx=1; cy=1; break;
                    case 6: cx=1; cy=2; break;
                    case 7: cx=0; cy=0; break;
                    case 8: cx=0; cy=1; break;
                    case 9: cx=0; cy=2; break;
                }

                t[cx][cy]='X';

                for(x=0;x<3;x++){
                    for(y=0;y<3;y++){
                        printf("[%c]", t[x][y]);
                        plays++;
                    }
                    printf("\n");
                }
                if(coor==0){
                    plays=0;
                }

                cout<<endl;

            }while(plays>=1);

        }while(coor==0);
/**
        do{
            plays=1;

            for(x=0;x<3;x++){
                for(y=0;y<3;y++){
                    t[x][y]=' ';
                }
            }

            do{
                system("cls");
                for(x=0;x<3;x++){
                    for(y=0;y<3;y++){
                        printf("[%c]", t[x][y]);
                    }
                    printf("\n");
                }

                cout<<"Tu:"<<endl;
                cout<<"Coord: ";
                cin>>coor;

                switch(coor){
                    case 0: coor=0; break;
                    case 1: cx=2; cy=0; break;
                    case 2: cx=2; cy=1; break;
                    case 3: cx=2; cy=2; break;
                    case 4: cx=1; cy=0; break;
                    case 5: cx=1; cy=1; break;
                    case 6: cx=1; cy=2; break;
                    case 7: cx=0; cy=0; break;
                    case 8: cx=0; cy=1; break;
                    case 9: cx=0; cy=2; break;
                }

                t[cx][cy]='X';

                for(x=0;x<3;x++){
                    for(y=0;y<3;y++){
                        printf("[%c]", t[x][y]);
                    }
                    printf("\n");
                }
                ///VERIFICACION DE CASILLAS LLENAS / EMPATE
                if(t[0][0]!=' ' && t[0][1]!=' ' && t[0][2]!=' ' &&
                   t[1][0]!=' ' && t[1][1]!=' ' && t[1][2]!=' ' &&
                   t[2][0]!=' ' && t[2][1]!=' ' && t[2][2]!=' '){
                    cout<<endl<<"Empate!"<<endl;
                    empate=true;
                    return 0;
                }
                if(empate==false){
                    cout<<endl;
                    cout<<"Computer"<<endl;

                    if(plays==1){
                        if(t[0][0]=='X' || t[0][2]=='X' || t[2][0]=='X' || t[2][2]=='X'){
                            hx=1,hy=1;
                        }else if(t[0][1]=='X'){
                            hx=2,hy=2;
                        }else if(t[1][2]=='X'){
                            hx=2,hy=0;
                        }else if(t[2][1]=='X'){
                            hx=0,hy=0;
                        }else if(t[1][0]=='X'){
                            hx=0,hy=2;
                        }else if(t[1][1]=='X'){
                            hx=0,hy=0;
                        }

                    }
                    else if(plays>=2){
                        ///RANDOM
                        do{ //MODO EASY >NO CAMBIAR<
                            hx=rand()%3;
                            hy=rand()%3;
                        }while(t[hx][hy]=='X' || t[hx][hy]=='O');

                        ///ENTRADA
                        if(t[0][0]=='X' && t[1][1]=='O' && t[2][2]=='X' && t[0][1]==' '){
                            hx=0,hy=1;
                        }else if(t[0][2]=='X' && t[1][1]=='O' && t[2][0]=='X' && t[2][1]==' '){
                            hx=2,hy=1;
                        }

                        ///COMPLETAR

                        ///HORIZONTAL
                        if(t[0][0]=='O' && t[0][1]==' ' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[0][0]==' ' && t[0][1]=='O' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[0][0]==' ' && t[0][1]==' ' && t[0][2]=='O'){
                            hx=0,hy=0;
                        }
                        if(t[1][0]=='O' && t[1][1]==' ' && t[1][2]==' '){
                            hx=1,hy=2;
                        }else if(t[1][0]==' ' && t[1][1]=='O' && t[1][2]==' '){
                            hx=1,hy=2;
                        }else if(t[1][0]==' ' && t[1][1]==' ' && t[1][2]=='O'){
                            hx=1,hy=0;
                        }
                        if(t[2][0]=='O' && t[2][1]==' ' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[2][0]==' ' && t[2][1]=='O' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[2][0]==' ' && t[2][1]==' ' && t[2][2]=='O'){
                            hx=2,hy=0;
                        }

                        ///VERTICAL
                        if(t[0][0]=='O' && t[1][0]==' ' && t[2][0]==' '){
                            hx=2,hy=0;
                        }else if(t[0][0]==' ' && t[1][0]=='O' && t[2][0]==' '){
                            hx=0,hy=0;
                        }else if(t[0][0]==' ' && t[1][0]==' ' && t[2][0]=='O'){
                            hx=0,hy=0;
                        }
                        if(t[0][1]=='O' && t[1][1]==' ' && t[2][1]==' '){
                            hx=2,hy=1;
                        }else if(t[0][1]==' ' && t[1][1]=='O' && t[2][1]==' '){
                            hx=0,hy=1;
                        }else if(t[0][1]==' ' && t[1][1]==' ' && t[2][1]=='O'){
                            hx=0,hy=1;
                        }
                        if(t[0][2]=='O' && t[1][2]==' ' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[0][2]==' ' && t[1][2]=='O' && t[2][2]==' '){
                            hx=0,hy=2;
                        }else if(t[0][2]==' ' && t[1][2]==' ' && t[2][2]=='O'){
                            hx=0,hy=2;
                        }

                        ///DIAGONAL -> \ <-
                        if(t[0][0]=='O' && t[1][1]==' ' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[0][0]==' ' && t[1][1]=='O' && t[2][2]==' '){
                            hx=0,hy=0;
                        }else if(t[0][0]==' ' && t[1][1]==' ' && t[2][2]=='O'){
                            hx=0,hy=0;
                        }

                        ///DIAGONAL -> / <-
                        if(t[2][0]=='O' && t[1][1]==' ' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[2][0]==' ' && t[1][1]=='O' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[2][0]==' ' && t[1][1]==' ' && t[0][2]=='O'){
                            hx=2,hy=0;
                        }

                        ///FIN COMPLETAR

                        ///BLOQUEO

                        ///HORIZ. FILA 1 / TODO
                        if(t[0][0]=='X' && t[0][1]=='X' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[0][0]=='X' && t[0][1]==' ' && t[0][2]=='X'){
                            hx=0,hy=1;
                        }else if(t[0][0]==' ' && t[0][1]=='X' && t[0][2]=='X'){
                            hx=0,hy=0;
                        }
                        ///HORIZ. FILA 2 / TODO
                        if(t[1][0]=='X' && t[1][1]=='X' && t[1][2]==' '){
                            hx=1,hy=2;
                        }else if(t[1][0]=='X' && t[1][1]==' ' && t[1][2]=='X'){
                            hx=1,hy=1;
                        }else if(t[1][0]==' ' && t[1][1]=='X' && t[1][2]=='X'){
                            hx=1,hy=0;
                        }
                        ///HORIZ. FILA 3 / TODO
                        if(t[2][0]=='X' && t[2][1]=='X' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[2][0]=='X' && t[2][1]==' ' && t[2][2]=='X'){
                            hx=2,hy=1;
                        }else if(t[2][0]==' ' && t[2][1]=='X' && t[2][2]=='X'){
                            hx=2,hy=0;
                        }

                        ///VERT. COLUMA 1 / TODO
                        if(t[0][0]=='X' && t[1][0]=='X' && t[2][0]==' '){
                            hx=2,hy=0;
                        }else if(t[0][0]=='X' && t[1][0]==' ' && t[2][0]=='X'){
                            hx=1,hy=0;
                        }else if(t[0][0]==' ' && t[1][0]=='X' && t[2][0]=='X'){
                            hx=0,hy=0;
                        }
                        ///VERT. COLUMA 2 / TODO
                        if(t[0][1]=='X' && t[1][1]=='X' && t[2][1]==' '){
                            hx=2,hy=1;
                        }else if(t[0][1]=='X' && t[1][1]==' ' && t[2][1]=='X'){
                            hx=1,hy=1;
                        }else if(t[0][1]==' ' && t[1][1]=='X' && t[2][1]=='X'){
                            hx=0,hy=1;
                        }
                        ///VERT. COLUMA 3 / TODO
                        if(t[0][2]=='X' && t[1][2]=='X' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[0][2]=='X' && t[1][2]==' ' && t[2][2]=='X'){
                            hx=1,hy=2;
                        }else if(t[0][2]==' ' && t[1][2]=='X' && t[2][2]=='X'){
                            hx=0,hy=2;
                        }

                        ///DIAGONAL/  | TODO
                        if(t[0][2]=='X' && t[1][1]=='X' && t[2][0]==' '){
                            hx=2,hy=0;
                        }else if(t[0][2]=='X' && t[1][1]==' ' && t[2][0]=='X'){
                            hx=1,hy=1;
                        }else if(t[0][2]==' ' && t[1][1]=='X' && t[2][0]=='X'){
                            hx=0,hy=2;
                        }
                        ///DIAGONAL\  | TODO
                        if(t[0][0]=='X' && t[1][1]=='X' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[0][0]=='X' && t[1][1]==' ' && t[2][2]=='X'){
                            hx=1,hy=1;
                        }else if(t[0][0]==' ' && t[1][1]=='X' && t[2][2]=='X'){
                            hx=0,hy=0;
                        }

                        ///FIN BLOQUEO

                        ///TRIPLE
                        if(t[0][0]=='O' && t[0][1]=='X' && t[0][2]=='O' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[0][0]=='O' && t[0][1]=='X' && t[0][2]=='O' && t[2][0]==' '){
                            hx=2,hy=0;
                        }else if(t[0][2]=='O' && t[1][2]=='X' && t[2][2]=='O' && t[0][0]==' '){
                            hx=0,hy=0;
                        }else if(t[0][2]=='O' && t[1][2]=='X' && t[2][2]=='O' && t[2][0]==' '){
                            hx=2,hy=0;
                        }else if(t[2][0]=='O' && t[2][1]=='X' && t[2][2]=='O' && t[0][0]==' '){
                            hx=0,hy=0;
                        }else if(t[2][0]=='O' && t[2][1]=='X' && t[2][2]=='O' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[0][0]=='O' && t[1][0]=='X' && t[2][0]=='O' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[0][0]=='O' && t[1][0]=='X' && t[2][0]=='O' && t[2][2]==' '){
                            hx=2,hy=2;
                        }

                        ///FOR THE WIN

                        ///HORIZ. FILA 1 / TODO
                        if(t[0][0]=='O' && t[0][1]=='O' && t[0][2]==' '){
                            hx=0,hy=2;
                        }else if(t[0][0]=='O' && t[0][1]==' ' && t[0][2]=='O'){
                            hx=0,hy=1;
                        }else if(t[0][0]==' ' && t[0][1]=='O' && t[0][2]=='O'){
                            hx=0,hy=0;
                        }
                        ///HORIZ. FILA 2 / TODO
                        if(t[1][0]=='O' && t[1][1]=='O' && t[1][2]==' '){
                            hx=1,hy=2;
                        }else if(t[1][0]=='O' && t[1][1]==' ' && t[1][2]=='O'){
                            hx=1,hy=1;
                        }else if(t[1][0]==' ' && t[1][1]=='O' && t[1][2]=='O'){
                            hx=1,hy=0;
                        }
                        ///HORIZ. FILA 3 / TODO
                        if(t[2][0]=='O' && t[2][1]=='O' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[2][0]=='O' && t[2][1]==' ' && t[2][2]=='O'){
                            hx=2,hy=1;
                        }else if(t[2][0]==' ' && t[2][1]=='O' && t[2][2]=='O'){
                            hx=2,hy=0;
                        }

                        ///VERT. COLUMA 1 / TODO
                        if(t[0][0]=='O' && t[1][0]=='O' && t[2][0]==' '){
                            hx=2,hy=0;
                        }else if(t[0][0]=='O' && t[1][0]==' ' && t[2][0]=='O'){
                            hx=1,hy=0;
                        }else if(t[0][0]==' ' && t[1][0]=='O' && t[2][0]=='O'){
                            hx=0,hy=0;
                        }
                        ///VERT. COLUMA 2 / TODO
                        if(t[0][1]=='O' && t[1][1]=='O' && t[2][1]==' '){
                            hx=2,hy=1;
                        }else if(t[0][1]=='O' && t[1][1]==' ' && t[2][1]=='O'){
                            hx=1,hy=1;
                        }else if(t[0][1]==' ' && t[1][1]=='O' && t[2][1]=='O'){
                            hx=0,hy=1;
                        }
                        ///VERT. COLUMA 3 / TODO
                        if(t[0][2]=='O' && t[1][2]=='O' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[0][2]=='O' && t[1][2]==' ' && t[2][2]=='O'){
                            hx=1,hy=2;
                        }else if(t[0][2]==' ' && t[1][2]=='O' && t[2][2]=='O'){
                            hx=0,hy=2;
                        }

                        ///DIAGONAL/  | TODO
                        if(t[0][2]=='O' && t[1][1]=='O' && t[2][0]==' '){
                            hx=2,hy=0;
                        }else if(t[0][2]=='O' && t[1][1]==' ' && t[2][0]=='O'){
                            hx=1,hy=1;
                        }else if(t[0][2]==' ' && t[1][1]=='O' && t[2][0]=='O'){
                            hx=0,hy=2;
                        }
                        ///DIAGONAL\  | TODO
                        if(t[0][0]=='O' && t[1][1]=='O' && t[2][2]==' '){
                            hx=2,hy=2;
                        }else if(t[0][0]=='O' && t[1][1]==' ' && t[2][2]=='O'){
                            hx=1,hy=1;
                        }else if(t[0][0]==' ' && t[1][1]=='O' && t[2][2]=='O'){
                            hx=0,hy=0;
                        }

                        ///END FOR THE WIN
                    }

                    t[hx][hy]='O';

                    for(x=0;x<3;x++){
                        for(y=0;y<3;y++){
                            printf("[%c]", t[x][y]);
                            plays++;
                        }
                        printf("\n");
                    }
                }

                if(coor==0){
                    plays=0;
                }

            }while(plays>=1);

        }while(coor==0);
**/
    return 0;
    }
