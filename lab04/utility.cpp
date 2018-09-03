// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

#include <stdlib.h>

bool isOdd(int x) {
    int i=1;
    x = abs(x);
    while (i<x) {
        if ((2*i+1)==x){
            return true;
            break;
        }
        i++;
    }
  return false;  // REPLACE THIS STUB WITH REAL CODE
}


bool isEven(int x) {
    int i=1;
    x = abs(x);
    while (i<x) {
        if ((2*i)==x){
            return true;
            break;
        }
        i++;
    }
  return false;  // REPLACE THIS STUB WITH REAL CODE
}

bool isPrime(int x) {
    int i;
    
    if (x<=1)
        return false;

    if(x==2)
        return true;
    
    for(i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    
    return true; // REPLACE THIS STUB WITH REAL CODE
}
