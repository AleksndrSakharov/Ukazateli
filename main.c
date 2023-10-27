#include <stdio.h>
void print_array(int arr[], int* size){
    printf("\n%p\n", &size);
    arr[0] = 0;
    for(int i = 0; i < *size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    *size = 100;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size1 = 10;
    //sizeof(arr)/sizeof(int)
    printf("\n%p\n", &size1);
    print_array(arr, &size1);
    printf("\n%d\n", size1);
    // double a = 10;
    // int f = 20;
    // double* pointerA = &a;
    // printf("%lf", *pointerA);
    //<тип>* <имя указателя> = <адрес на участок памяти>;
    return 0;
}