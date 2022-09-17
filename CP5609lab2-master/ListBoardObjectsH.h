//
// Created by Nick Fan on 26/08/2022.
//

#ifndef CP5609_LAB2_LISTBOARDOBJECTSH_H
#define CP5609_LAB2_LISTBOARDOBJECTSH_H
#include <vector>
#include  "BoardObjectH.h"
#include  "PlayerH.h"
#include  "CookieH.h"

typedef BoardObject* p_BoardObject;


class  ListBoardObjects
{
    std::vector <p_BoardObject> list;
    std::vector < p_BoardObject>::iterator internalIterator;
public:
    ListBoardObjects(p_BoardObject theFirst);

    p_BoardObject theFirst();
    p_BoardObject theNext();
    void addOne(p_BoardObject newOne);
    void removeOnePlayer();
    bool isThereAWall();
    int isCookieValue();
};
#endif

