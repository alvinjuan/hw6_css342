//
//  search.h
//  hw6
//
//  Created by Alvin J on 2/11/21.
//

#ifndef search_h
#define search_h
#include <iostream>
#include "objects.h"
using namespace std;

template <class T>
class arr{
    T * array;
    int size;
    T data;
public:
    arr(int size){
        this->size = size;
        array = new T [size];
    }
//    bool searchItem(T array){
//        for (int i = 0; i < sizeof(array); i++){
//            if (array[i] == data){
//                cout << data << endl;
//                return true;
//            }
//            else {
//                cout << "empty list" << endl;
//                return false;
//            }
//        }
//    }
    void remove(){
        
    }
    bool searchTop3(){
        
    }
    bool search(){
        
    }
    
};


#endif /* search_h */


// insert must result in sorted array
/*
 
 inserting and sorting based on price of keyboard
 
 if (price on left is less than "price" and price on righ is greater than "price")
 then put it in the middle of the two nums
 
 else if (price on left is not greater than "price" and price on right is greater than "price")
 then place the number
 
 binary search algorithm???
 
 
 */
