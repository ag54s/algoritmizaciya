#include "C:\ccode\algoritmizaciya\include\lab3.h"
#include <stdio.h>
int how_many_a(){
    int cnt = 0;        
    int in_word = 0;    
    int has_a = 0;      
    int c;              
    while((c = getchar()) != EOF){
        if (c == 'a'){
            c = 'A';
        }else if (c == 'A'){
            c = 'a';
        }
        putchar(c);
        if (c == ' ' || c == '.' || c == ',' || c == '\n'){
            if (in_word && has_a){
                cnt+=1;
            }
            in_word = 0;
            has_a = 0;
        } 
        else {
            in_word = 1;
            if (c == 'a' || c == 'A'){
                has_a = 1;
            }
        }
    }
    if (in_word && has_a){
        cnt+=1;
    }
    printf("number of words = %d\n", cnt);
    return cnt;
}

//putchar. выводить в цикле букавы и символы потока. Но, буквы а должны менятся регистром 