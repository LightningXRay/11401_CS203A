# Homework Assignment IV: Hash Function Design & Observation (C/C++ Version)

This assignment focuses on the design and observation of hash functions using C/C++. 
Students are expected to implement and analyze the behavior of hash functions, 
evaluate their efficiency, and understand their applications in computer science.

Developer: [許睿恒]  
Email: [RayH5487@gmail.com]  

## My Hash Function
### Integer Keys 
- Formula / pseudocode:
  ```text
  [
  int myHashInt(int key, int m) {
    int k=1;
    while(key>1){
        k+=key;
        key/=2;
    }
    return k%m;
  }
  ]
  ```
- Rationale: [藉由不斷在k上加key/(2^n)來最大程度打散key，此程式只要key和m越大，他key就打得越散]

### Non-integer Keys
- Formula / pseudocode:
  ```text
  [
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
  ]
  ```
- Rationale: [先設s=str的長度,a=0,b=1...，再讓s不停加上i*str[i]，期間加上s%m避免溢出，最後s+=int(str[0])%m避免像aut,uat這樣的換位相等]

## Experimental Setup
- Table sizes tested (m): 10, 11, 37
- Test dataset:
  - Integers: 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60
  - Strings: "cat", "dog", "bat", "cow", "ant", "owl", "bee", "hen", "pig", "fox"
- Compiler: GCC and G++
- Standard: C23 and C++23

## Results
| Table Size (m) | Index Sequence         | Observation              |
|----------------|------------------------|--------------------------|
| 10             | 9, 1, 2, 6, ...        |即便key升序排列，index也沒有規律|
| 11             | 6, 8, 9, 2, ...       | More uniform             |
| 37             | 2, 4, 5, 9, ...    | Near-uniform             |

## Compilation, Build, Execution, and Output

### Compilation
- The project uses a comprehensive Makefile that builds both C and C++ versions with proper flags:
  ```bash
  # Build both C and C++ versions
  make all
  
  # Build only C version
  make c
  
  # Build only C++ version
  make cxx
  ```

### Manual Compilation (if needed)
- Command for C:
  ```bash
  gcc -std=c23 -Wall -Wextra -Wpedantic -g -o C/hash_function C/main.c C/hash_fn.c
  ```
- Command for C++:
  ```bash
  g++ -std=c++23 -Wall -Wextra -Wpedantic -g -o CXX/hash_function_cpp CXX/main.cpp CXX/hash_fn.cpp
  ```

### Clean Build Files
- Remove all compiled files:
  ```bash
  make clean
  ```

### Execution
- Run the compiled binary:
  ```bash
  ./hash_function
  ```
  or
  ```bash
  ./hash_function_cpp
  ```

### Result Snapshot
- Example output for integers:
  ```
  === Hash Function Observation (C Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      9
  22      1
  ...

  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      6
  22      8
  ...

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      2
  22      4
  ...

  === Hash Function Observation (C++ Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      9
  22      1
  ...

  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      6
  22      8
  ...

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      2
  22      4
  ...
  ```

- Example output for strings:
  ```
  === String Hash (m = 10) ===
  Key     Index
  -----------------
  cat     3
  dog     2
  ...

  === String Hash (m = 11) ===
  Key     Index
  -----------------
  cat     0
  dog     0
  ...

  === String Hash (m = 37) ===
  Key     Index
  -----------------
  cat     32
  dog     21
  ...
  ```

- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.
- Example output for integers:
  ```
  Hash table (m=10): [9, 1, 2, 6, 7, 9, 0, 3, 4, 6, ...]
  Hash table (m=11): [6, 8, 9, 2, 3, 5, 6, 9, 10, 1, ...]
  Hash table (m=37): [2, 4, 5, 9, 10, 12, 13, 16, 17, 19, ...]
  ```
- Example output for strings:
  ```
  Hash table (m=10): ["cat", "dog", "bat", "cow", "ant", ...]
  Hash table (m=11): ["fox", "cat", "dog", "bat", "cow", ...]
  Hash table (m=37): ["bee", "hen", "pig", "fox", "cat", ...]
  ```
- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.

## Analysis
- Prime vs non-prime `m`: Prime table sizes generally result in better distribution and fewer collisions.
- Patterns or collisions: Non-prime table sizes tend to produce repetitive patterns, leading to more collisions.
- Improvements: 透過特殊變換來最大程度打亂分布

## Reflection
1. 
