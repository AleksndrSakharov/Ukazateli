#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int* arr, int size){
    for(int i = 0; i < size; i++) printf("arr[%d] = %d\n", i, arr[i]);
}
int* arrgen(int size){
    int r = rand()*time(NULL) % 100;
    int* arr = (int*)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        arr[i] = r;
    }
    int k = rand()*time(NULL) % (size);
    arr[k] = 100 + rand()*time(NULL) % 100;
    return arr;
}
void find_i(int* arr, int a, int* elem, int* index){
    int base = arr[0];
    if(arr[1] != base && arr[2] != base){
        *elem = base;
        *index = 0;
        return;
    } 
    for(int i = 1; i < a; i++){
        if(arr[i] != base){
        *elem = arr[i];
        *index = i;
        return;
        }
    }
}

int main(){
    int size = 1;
    scanf("%d", &size);
    int* arr;
    arr = arrgen(size);
    int elem1 = 0;
    int index1 = 0;
    find_i(arr, size, &elem1, &index1);
    printf("\nelem = %d, index = %d\n", elem1, index1);
    print_array(arr, size);
    free(arr);
    return 0;
}