#include<iostream>

using namespace std;

template <class X> void shuffle(X** myArray, int myArraySize){
    // TODO: Implement here the shuffle algorithm
    int i, j;
    for(i = myArraySize-1; i > 1 ; i--){
        j = (rand() % i) + 1;
        swap(myArray[i], myArray[j]);
    }
}
