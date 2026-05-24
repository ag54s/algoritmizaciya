#include "C:\ccode\algoritmizaciya\include\lab4.h"
#include<stdio.h>
#define MAXLINE 1000
void words_with_same_leters(){
    char buffer[MAXLINE];
    char c;
    int first_c, last_c, flag, i, pos, start, j;
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    printf("Enter the text = ");
    gets(buffer);
    FILE *file = fopen("C:\\ccode\\algoritmizaciya\\src\\for4.txt", "w");
    flag = 0;
    first_c = ' ';
    start = 0;
    i = 0;
    pos = 0;
    do{
        c = buffer[i];
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0'){
            if (flag == 1){
                if (first_c != last_c){ 
                    for(j = start; j < i; j++)
                        buffer[pos++] = buffer[j];
                } else{
                    for(j = start; j < i; j++)
                        fprintf(file, "%c", buffer[j]);
                    fprintf(file, " ");
                }
            }
            flag = 0;
            buffer[pos++] = c;
        }
        else{
            if (flag == 0){
                start = i;
                first_c = c;
            }
            last_c = c;
            flag = 1;
        }
        i++;
    }
    while(c != '\0');
    
    buffer[pos] = '\0';
    fclose(file);
    printf("Result: ");
    puts(buffer);
}
//записать в файл все слова по условие задачи.