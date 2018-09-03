#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
    int count=0;
    for (int x=0;x<size;x++){
        
        if (a[x]<=1){
            count += 0;
            continue;
        }
        
        else if (a[x]==2){
            count ++;
            continue;
        }
        
        bool isPrime = true;
        
        for(int i=2;i*i<=a[x];i++){
            if(a[x]%i==0){
                isPrime= false;
                break;
            }
        }
        if (isPrime)
            count++;
    }
    return count;
}
