#include <stdio.h>

void bubbleSort(int array[], int size) {
    int index = size - 1;
    
    for ( int j = index - 1; j >= 0; j-- ) {
        for ( int i = 0; i <= j; i++ ) {
            if ( array[i] > array[i+1] ) {
                int temp = array[i+1];
                
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
    }
}

void print(int array[], int size) {
    int index = size - 1;

    for ( int j = 0; j < index; j++ ) {
        printf("%d ", array[j]);
    }
    printf("%d\n", array[index]);
}


int main() {
    int array[] = {2, 20, 2, 21, 1, 23, 3, 4, 8, 9};
    int size = 10;

    print(array, size);
    bubbleSort(array, size);
    print(array, size);

    return 0;
}

