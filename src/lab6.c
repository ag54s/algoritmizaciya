#include <stdio.h>
#include "C:\ccode\algoritmizaciya\include\lab6.h"
#define k 3
#define n 4
int progression(){
    int x[k][n], i, j;
    int has_progression;
    for (i = 0; i < k; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &x[i][j]);
        }
    }
    for (i = 0; i < k; i++){
        int delta = x[i][1] - x[i][0];
        has_progression = 1;
        for (j = 1; j < n - 1; j++) {
            if (x[i][j + 1] - x[i][j] != delta){
                has_progression = 0;
                break;
            }
        }
        if (has_progression) {
            printf("string: has progression\n", i);
            for (j = 0; j < n; j++)
                printf("%d ", x[i][j]);
            printf("\n");
        } else{
            printf("string: no progression\n", i);
            for (j = 0; j < n; j++)
                printf("%d ", x[i][j]);
            printf("\n");}
    }
    return 0;
}