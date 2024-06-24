#ifndef H_unorderedSetType
#define H_unorderedSetType

#include "unorderedArrayListType.h"

class unorderedSetType : public unorderedArrayListType {
public:
    unorderedSetType(int size = 100);
    void insertAt(int location, const int& insertItem);
    void insertEnd(const int& insertItem);
    void replaceAt(int location, const int& repItem);
};

#endif
