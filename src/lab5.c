#include "C:\ccode\algoritmizaciya\include\lab5.h"
#include<stdio.h>
#include<stdlib.h>  
#define N 10
int compare_vozr(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
int compare_ubyv(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}
int to_zero(){
    int x[N], min, max, i, min_i, max_i;
    for(i = 0; i<N; i++)
        scanf("%d", &x[i]);
    min = x[0];
    max = x[0];
    min_i = 0;
    max_i = 0;
    for(i = 1; i<N; i++){
        if(x[i] > max){
            max = x[i];
            max_i = i;}
        if(x[i] < min){
            min = x[i];
            min_i = i;}
    }
    
    int start, end;
    if(min_i < max_i){
        start = min_i + 1;
        end = max_i - 1;
        if(start < end){
            qsort(&x[start], end-start+1, sizeof(int), compare_vozr);
        }
    } else if(max_i < min_i){
        start = max_i + 1;
        end = min_i - 1;
        if(start < end){
            qsort(&x[start], end-start+1, sizeof(int), compare_ubyv);
        }
    }
    for(i = 0; i<N; i++)
        printf("%d ", x[i]);
    printf("\n");
    return 0;
}
 //между наибольшим и наименьшим применяется алгоритм qsort.
 //
