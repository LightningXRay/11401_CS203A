/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp
    - 2025/11/18: add namespace delete hint
    - 2025/11/19: add hash function and include
    - 2025/11/20: add error handling for int and string
   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */
#include <iostream>
#include <string>
#include <math.h>
#include "hash_fn.hpp"
using namespace std;
int myHashInt(int key, int m) {
    int k;//temp
    k=key*m;//first change
    k+=key;//second change
    k-=pow(m,2);//final change
    if(k<0){
        k*=-1;//if k negative change k to postive
    }
    return k;
}

int myHashString(const string& str, int m) {
    unsigned long hash = 0;
    int s;//temp
    s=str.size();//first change
    s*=s-m;//second change
    s-=str.size();//final change
    if(s<0){
        s*=-1;//if s negative change s to postive
    }
    return pow(s,2);
}
