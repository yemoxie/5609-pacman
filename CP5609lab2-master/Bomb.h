//
// Created by Nick Fan on 26/08/2022.
//

#ifndef CP5609_LAB2_BOMB_H
#define CP5609_LAB2_BOMB_H
#include "BoardObjectH.h"

class Bomb : public BoardObject{
private:
    ObjectColours ObjectColours;

public:
    Bomb (int start_x, int start_y):BoardObject(start_x,start_y)
    {
        ObjectColours = BLUE;
        myClass = A_Bomb;

    };

    void touch ();

};


#endif //CP5609_LAB2_BOMB_H
