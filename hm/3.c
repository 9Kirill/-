#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv){
    printf("Все числа\n");
    srand(time(NULL));
    double arr[20];
    for(int i = 0; i < 20; i++){
        arr[i] = ((double)rand() / RAND_MAX) * 20.0 - 10.0;
    }

    for(int i = 0; i < 20; i++){
        printf("%.2f\n", arr[i]);
    }
    int size = 0;

    printf("Размер положительного массива\n");
    for(int i = 0; i < 20; i++){
        if(arr[i] > 0){
            size++;
        }
    }

    printf("%d\n", size);
    printf("Только положительные\n");

    double posArr[size];
    int posIndex = 0;
    for(int i = 0; i < 20; i++){
        if(arr[i] > 0.0){
            posArr[posIndex] = arr[i];
            posIndex++;
        }
    }
    for(int i = 0; i < size; i++){
        printf("%.2f\n", posArr[i]);
    }
    return 0;
}