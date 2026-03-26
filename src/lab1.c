#include "C:\ccode\algoritmizaciya\include\lab1.h"
#include <stdio.h>
float waterpool(int V, int v1, int v2){
    if (v1 > v2) {
        float z = v1 - v2;
        float t = V / z;
        printf("time = %f\n", t);
        return t;
    }
    else if (v1 < v2) {
        printf("The pool is filling up\n");
    }
    else {
        printf("The volume does not change\n");
    }
    return 0;
}