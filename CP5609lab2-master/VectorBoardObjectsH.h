//
// Created by Nick Fan on 26/08/2022.
//

#ifndef CP5609_LAB2_VECTORBOARDOBJECTSH_H
#define CP5609_LAB2_VECTORBOARDOBJECTSH_H

#include <Vector>
#include "BoardObjectH.h"


using namespace std;

typedef BoardObject *b_BoardObject;

class VectorBoardObjects {
    vector<b_BoardObject> alist;
    vector<b_BoardObject>::iterator internalIterator;

public:
    VectorBoardObjects(b_BoardObject theFirst);


    b_BoardObject theFirst();
    b_BoardObject theNext();
    void addOneObject(b_BoardObject newOne);
    void removeOneObject();
};


#endif //CP5609_LAB2_VECTORBOARDOBJECTSH_H
