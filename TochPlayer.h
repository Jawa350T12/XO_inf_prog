//
// Created by vlver on 18.12.2022.
//

#ifndef UNTITLED2_TOCHPLAYER_H
#define UNTITLED2_TOCHPLAYER_H

#include "string"

using namespace std;

class TochPlayer {

public:
    string namePlayer;
    char xoName;

    TochPlayer(string namePl,char xo){
        namePlayer = namePl;
        xoName = xo;
    }

};


#endif //UNTITLED2_TOCHPLAYER_H

/*
 * switch (key) {
            case '1': pole[4][0]=igrokII.xoName; break;
            case '2': pole[4][2]=igrokII.xoName; break;
            case '3': pole[4][4]=igrokII.xoName; break;
            case '4': pole[2][0]=igrokII.xoName; break;
            case '5': pole[2][2]=igrokII.xoName; break;
            case '6': pole[2][4]=igrokII.xoName; break;
            case '7': pole[0][0]=igrokII.xoName; break;
            case '8': pole[0][2]=igrokII.xoName; break;
            case '9': pole[0][4]=igrokII.xoName; break;
        }
 * */