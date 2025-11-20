/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h
    - 2025/11/20: copy and change hash_fn.cpp's code to C
   Developer: Jui-Heng Hsu <RayH5487@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "hash_fn.h"

int myHashInt(int key, int m) {
    int k;//temp
    k=key*m;//set k
    k+=key;//k+key
    k-=(int)pow(m,2);//k-m^2
    if(k<0){
        k*=-1;//if k negative change k to postive
    }
    return k;
}

int myHashString(const char* str, int m) {
    int s;//temp
    if(str==NULL){return 0;}//error handing
    s=strlen(str);//set s
    for(int i=0; i<strlen(str); i++)
    {
         s+=(int)str[i];//s+ASCLL(str[0],str[1]...str[str.size()])
    }
    s-=m;//s-m
    if(s<0){
        s*=-1;//if s negative change s to postive
    }
    return s;
}
