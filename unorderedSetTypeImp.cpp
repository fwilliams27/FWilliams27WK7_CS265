#include "unorderedSetType.h"
#include <iostream>

unorderedSetType::unorderedSetType(int size) : unorderedArrayListType(size) {}

void unorderedSetType::insertAt(int location, const int& insertItem) {
    if (seqSearch(insertItem) != -1) {
        std::cout << insertItem << " is already in the set." << std::endl;
    } else {
        unorderedArrayListType::insertAt(location, insertItem);
    }
}

void unorderedSetType::insertEnd(const int& insertItem) {
    if (seqSearch(insertItem) != -1) {
        std::cout << insertItem << " is already in the set." << std::endl;
    } else {
        unorderedArrayListType::insertEnd(insertItem);
    }
}

void unorderedSetType::replaceAt(int location, const int& repItem) {
    if (seqSearch(repItem) != -1) {
        std::cout << repItem << " is already in the set." << std::endl;
    } else {
        unorderedArrayListType::replaceAt(location, repItem);
    }
}
