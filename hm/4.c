#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int C[20], D[20], E[40];
    
    printf("Массив C:\n");
    for(int i = 0; i < 20; i++) {
        C[i] = rand() % 21;
        printf("%d ", C[i]);
    }
    printf("\n\n");
    
    printf("Массив D:\n");
    for(int i = 0; i < 20; i++) {
        D[i] = rand() % 21;
        printf("%d ", D[i]);
    }
    printf("\n\n");
    
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19 - i; j++) {
            if(C[j] > C[j + 1]) {
                int temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19 - i; j++) {
            if(D[j] > D[j + 1]) {
                int temp = D[j];
                D[j] = D[j + 1];
                D[j + 1] = temp;
            }
        }
    }
    
    printf("Отсортированный массив C:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }
    printf("\n\n");
    
    printf("Отсортированный массив D:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", D[i]);
    }
    printf("\n\n");
    
    int i = 0, j = 0, k = 0;
    
    while(i < 20 && j < 20) {
        if(C[i] <= D[j]) {
            E[k] = C[i];
            i++;
        } else {
            E[k] = D[j];
            j++;
        }
        k++;
    }
    
    while(i < 20) {
        E[k] = C[i];
        i++;
        k++;
    }
    
    while(j < 20) {
        E[k] = D[j];
        j++;
        k++;
    }
    
    printf("Объединенный отсортированный массив E:\n");
    for(int i = 0; i < 40; i++) {
        printf("%d ", E[i]);
    }
    printf("\n");
    
    return 0;
}