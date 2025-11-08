#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){
    double a = 2.14;
    double b = -4.21;
    double c = 3.25;
    double xnach = -4.5;
    double xkon = -33.5;
    int size = 0;
    for(double i = -4.5; i > -33.5; i -= 0.5){
        size += 1;
    }
    double arr[size];
    int count = 0;
    for(double i = -4.5; i > -33.5; i -= 0.5){
        double y = a*pow(i, 2.0)*sin(i)+b*i+c;
        arr[count] = y;
        count++;
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1; j++){
            if(arr[j] < arr[j+1]){
                double temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("%.2f\n", arr[i]);
    }
    return 0;
}