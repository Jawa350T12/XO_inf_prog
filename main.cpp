#include <iostream>
#include <random>
#include <ctime>
#include <conio.h>
#include "TochPlayer.h"

using namespace std;

string pole[5][5];

int randXo(){
    srand(time(0));
    return rand()%2;
}

TochPlayer newPlayerII(int randomXo){
    if(randomXo==0){
        TochPlayer player={"Player1",'X'};
        return player;
    }else{
        TochPlayer player={"Player1",'O'};
        return player;
    }
}

void pustopole(){
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            if(j==1 || j==3){
                pole[i][j]='|';
            }else if(i==1 || i==3) {
                pole[i][j] = '-';
            }else {
                pole[i][j] = ".";
            }
        }
    }
}

void printPole(){
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            cout << pole[i][j];
        }
        cout << endl;
    }
}

bool checkPole(TochPlayer player){

    for(int i=0;i<5;++i){
        for(int j =0;j<5;++j){
            if((pole[i][j]=="O" && pole[i][j+2]=="O" && pole[i][j+4]=="O")||
            (pole[i+2][j]=="O" && pole[i+2][j+2]=="O" && pole[i+2][j+4]=="O")||
            (pole[i+4][j]=="O" && pole[i+4][j+2]=="O" && pole[i+4][j+4]=="O")||
            (pole[i][j]=="O" && pole[i+2][j+2]=="O" && pole[i+4][j+4]=="O")||
            (pole[i][j+4]=="O" && pole[i+2][j+2]=="O" && pole[i+4][j]=="O")){
                return false;
            }
            if((pole[i][j]=="X" && pole[i][j+2]=="X" && pole[i][j+4]=="X")||
               (pole[i+2][j]=="X" && pole[i+2][j+2]=="X" && pole[i+2][j+4]=="X")||
               (pole[i+4][j]=="X" && pole[i+4][j+2]=="X" && pole[i+4][j+4]=="X")||
               (pole[i][j]=="X" && pole[i+2][j+2]=="X" && pole[i+4][j+4]=="X")||
               (pole[i][j+4]=="X" && pole[i+2][j+2]=="X" && pole[i+4][j]=="X")){
                return false;
            }
        }
    }

    return true;
}

string playerXode(TochPlayer igrokII,char key){
    if(key=='1' && pole[4][0] == "."){pole[4][0]=igrokII.xoName;}
    if(key=='2' && pole[4][2] == "."){pole[4][2]=igrokII.xoName;}
    if(key=='3' && pole[4][4] == "."){pole[4][4]=igrokII.xoName;}
    if(key=='4' && pole[2][0] == "."){pole[2][0]=igrokII.xoName;}
    if(key=='5' && pole[2][2] == "."){pole[2][2]=igrokII.xoName;}
    if(key=='6' && pole[2][4] == "."){pole[2][4]=igrokII.xoName;}
    if(key=='7' && pole[0][0] == "."){pole[0][0]=igrokII.xoName;}
    if(key=='8' && pole[0][2] == "."){pole[0][2]=igrokII.xoName;}
    if(key=='9' && pole[0][4] == "."){pole[0][4]=igrokII.xoName;}

    return "NEXT_PLAYER";
}

int main() {
    char key='\\';
    pustopole();
    TochPlayer player = newPlayerII(randXo());
    while(key!='q') {
        cin >> key;
        string s = playerXode(player, key);
        printPole();
        checkPole(player);
    }
    return 0;
}
