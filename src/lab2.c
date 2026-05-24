#include "C:\ccode\algoritmizaciya\include\lab2.h"
#include <stdio.h>
float countings(int N){
    int b = 1;
    int c = 1;
    int i = 0;
    float z = 1.0;
    float s = 0.0; 
    do{
        i+=1;
        if (s<3.0){
            s+=z;
            z = z * ((float)(b+2) / (c+3));
            b += 2;
            c += 3;
        }
        else{
            break;
        }
    }while(i<N);
    printf("Result: %f\n", s);
    return s;
}

