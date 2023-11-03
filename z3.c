#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_two_int(double* a){
    int *b = (int*)a;
    printf("%d %d", b[0], b[1]);
}

int main(){
    int a = 10, b = 100;
    int* res = malloc(8);
    res[0] = a;
    res[1] = b;
    print_two_int(res);
    return 0;
}