//
// Created by Nick Fan on 26/08/2022.
//

#ifndef CP5609_LAB2_MONSTER_H
#define CP5609_LAB2_MONSTER_H


#include "BoardObjectH.h"

class Monster : public BoardObject{
private:
    ObjectColours ObjectColours;

public:
    Monster (int start_x, int start_y):BoardObject(start_x,start_y)
    {
        ObjectColours = BLUE;
        myClass = A_Monster;

    };

    void touch ();

};


#endif //CP5609_LAB2_MONSTER_H
