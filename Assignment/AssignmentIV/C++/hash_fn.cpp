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
    - 2025/11/20: add error handling for string , upgrade string's hash function
   Developer: Jui-Heng Hsu <RayH5487@gmail.com>
 */
#include <iostream>
#include <string>
#include <math.h>
#include "hash_fn.hpp"
using namespace std;
int myHashInt(int key, int m) {
    int k;//temp
    k=key*m;//set k
    k+=key;//k+key
    k-=pow(m,2);//k-m^2
    if(k<0){
        k*=-1;//if k negative change k to postive
    }
    return k;
}

int myHashString(const string& str, int m) {
    unsigned long hash = 0;
    int s;//temp
    if(str.empty()){return 0;}//error handing
    s=str.size();//set s
    for(int i=0; i<str.size(); i++)
    {
         s+=int(str[i]);//s+ASCLL(str[0],str[1]...str[str.size()])
    }
    s-=m;//s-m
    if(s<0){
        s*=-1;//if s negative change s to postive
    }
    return s;
}
