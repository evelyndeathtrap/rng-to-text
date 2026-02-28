  GNU nano 7.2              rd.c                         GNU nano 7.2                     rd.c                               
#include <stdio.h>
#include <immintrin.h>
#include <unistd.h>
#include "words.h"
int main() {
    // _rdrand32_step returns 1 on success, 0 on failure
    unsigned short a;
    while(5) {

    _rdrand16_step(&a);
    unsigned long long count = 0;
    while(lines[count] != NULL) {
        count++;
    }    
//    _rdrand16_step(&b);
   // unsigned long long r = b - a;
        if (a >= count)
{ a; }          
        else
        printf("%s ", lines[(unsigned long long)a]);
        fflush(stdout);
        usleep(500000); 
        }

   
    
    return 0;
}


