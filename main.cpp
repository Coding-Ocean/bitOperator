#include<stdio.h>
#include<process.h>
#include"decToBinStr.h"

//ビット演算子 &, |, ^, ~, <<, >>
int main()
{
    int numBits = 4;

    int a = 3;
    int b = 6;
    printf("           a      = %s\n", decToBinStr(a, numBits));
    printf("           b      = %s\n", decToBinStr(b, numBits));
    printf("\n");
    printf(" AND ..... a & b  = %s\n", decToBinStr(a & b, numBits));
    printf(" OR ...... a | b  = %s\n", decToBinStr(a | b, numBits));
    printf(" XOR ..... a ^ b  = %s\n", decToBinStr(a ^ b, numBits));
    printf("\n");
    
    int c = 2;
    printf("           c      = %s\n", decToBinStr(c, numBits));
    printf(" NOT ..... ~c     = %s\n", decToBinStr(~c, numBits));
    printf(" SHIFT ... c << 1 = %s\n", decToBinStr(c << 1, numBits));
    printf(" SHIFT ... c >> 1 = %s\n", decToBinStr(c >> 1, numBits));

    system("pause>0");
}
