#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>


int countEvens(int a[], int size) {
    int count=0;
    for (int x=0;x<size;x++){
        if ( (a[x] % 2) == 0)
            count++;
    }
  return count; // STUB!  Replace with correct code.
}
