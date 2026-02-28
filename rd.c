#include <stdio.h>
#include <immintrin.h>
#include <unistd.h>
#include "words.h"
int main() {
    // _rdrand32_step returns 1 on success, 0 on failure
    unsigned short a;
    unsigned short b;
    while(5) {

    _rdrand16_step(&a);
//    _rdrand16_step(&b);
   // unsigned long long r = b - a;
	if (a >= line_count)
{ b; a; }		
	else
	printf("%s ", lines[(unsigned long long)~a % (line_count-1)]);
	fflush(stdout);
	
	}

   
    
    return 0;
}
