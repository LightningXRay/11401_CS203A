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
    - 2025/11/20: remake hash funtion
   Developer: Jui-Heng Hsu <RayH5487@gmail.com>
   * @brief Computes the hash index for an integer key.
   * @param key The integer key to hash.
   * @param m The table size.
   * @return The computed hash index.
 */

#include <iostream>
#include <string>
#include <math.h>
#include "hash_fn.hpp"
using namespace std;
int myHashInt(int key, int m) {
    int k=1;
    while(key>1){
        k+=key;
        key/=2;
    }
    return k%m;
}

int myHashString(const string& str, int m) {
  int s,n;//temp
  if(str.empty()){return 0;}//prevent NULL string
  s=str.size();
  n=int('a');
  for(int i=0; i<str.size(); i++)
  {
       s+=i*(int(str[i])-n+1);//set 'a'=0 'b'=1...in calculation and +1 to prevent i*0
       s%=m;
  }
  s+=int(str[0])%m;
  if(s<0){
      s*=-1;//if s negative change s to postive
  }
  return s%m;
}
