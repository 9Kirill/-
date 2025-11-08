#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv){
    srand(time(NULL));
    int arr[15];
    printf("Все числа\n");

    for(int i = 0; i < 15; i++){
        arr[i] = rand() % 11;
}
    for(int i = 0; i < 15; i++){  
        printf("%.2d\n", arr[i]);
    }

    printf("Только уникальные числа\n");

    for(int i = 0; i < 15; i++){  
        int player = 1;
            for(int j = 0; j < i; j++){
                if(arr[i] == arr[j]){
                    player = 0;
                    break;
            }
        }
        if(player){
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}