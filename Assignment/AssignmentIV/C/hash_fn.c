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
#include <string.h>
#include <stdlib.h>
int myHashInt(int key, int m) {
    int k=0;
    if(key<1 || m<1){
        printf("Wrong Input");
        return 0;//Error handing
    }
    while (key>1){
        k+=key;
        key/=2;
    }
    return k%m;
}
int myHashString(const char* str, int m) {
    if(str==NULL || m<1) {
        printf("Wrong Input\n");
        return 0;//Error handing
    }
    int s=strlen(str);
    int n=(int)'a';
    for(int i=0;strlen(str); i++) {
        s+=i*((int)str[i]-n+1);//set 'a'=0 'b'=1...in calculation and +1 to prevent i*0
        s%=m;
    }
    s+=((int)str[0])%m;
    if (s < 0) {
        s*=-1;//if s negative change s to postive
    }
    return s%m;
}
