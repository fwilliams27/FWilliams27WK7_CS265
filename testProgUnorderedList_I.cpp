#include "unorderedSetType.h"
#include <iostream>

int main() {
    unorderedSetType set(10);

    set.insertEnd(5);
    set.insertEnd(10);
    set.insertEnd(5);  // Should output that 5 is already in the set

    set.insertAt(1, 15);
    set.insertAt(2, 10);  // Should output that 10 is already in the set

    set.replaceAt(1, 20);
    set.replaceAt(2, 15);  // Should output that 15 is already in the set

    set.print();  // Should print the elements in the set

    return 0;
}
