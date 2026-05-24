#include <stdio.h>
#include <stdlib.h>
#include "include/lab1.h"
#include "include/lab2.h"
#include "include/lab3.h"
#include "include/lab4.h"
#include "include/lab5.h"
#include "include/lab6.h"
void print_menu(){
    printf("\n---main menu---\n");
    printf("1. Task 1 (Time to empty the pool)\n");
    printf("2. Task 2 (calculation according to a given principle)\n");
    printf("3. Task 3 (how many words with a)\n");
    printf("4. Task 4 (delete words with same letters)\n");
    printf("5. Task 5 (zeroing of elements)\n");
    printf("6. Task 6 (proression)\n");
    printf("0. Exit\n");
    printf("Your choise: ");
}
int main(){
    int choise;
    int running = 1;
    while (running){
        print_menu();
        if (scanf("%d", &choise) != 1){
            printf("Input error. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        switch (choise){
            case 1:{
                int V, v1, v2;
                printf("\n---Task 1: Pool Draining Time---\n");
                printf("Enter the volume of the pool V = ");
                scanf("%f", &V);
                printf("Enter outflow rate v1 = ");
                scanf("%f", &v1);
                printf("Enter inflow rate v2 = ");
                scanf("%f", &v2);
                waterpool(V, v1, v2);
                break;
            }
            case 2:{
                int N;
                printf("\n---Task 2:calculation according to a given principle---\n");
                printf("Enter the number of row elements N = ");
                scanf("%d", &N);
                countings(N);
                break;
            }
            case 3:{
                printf("\n---Task 3:how many words with a---\n");
                printf("Enter the text = ");
                how_many_a();
                break;
            }
            case 4:{
                printf("\n---Task 4:delete words with the same first and last letters---\n");
                words_with_same_leters();    
                break;
            }
            case 5:{
                printf("\n---Task 5:zeroing out the elements---\n");
                to_zero();
                break;
            }
            case 6:{
                printf("\n---Task 6: progression---\n");
                progression();
                break;
            }
            case 0:{
                printf("Exiting the program.\n");
                running = 0;
                break;
            }
            default:{
                printf("Incorrect selection. Please select an item from the menu.\n");
                break;
            }
        }
    }
    return 0;
}