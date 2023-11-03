#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int size1, size2;
    scanf("%d %d", &size1, &size2);
    int* matrix1 = malloc(size1 * size2 * sizeof(int));
    int* matrix2 = malloc(size1 * size2 * sizeof(int));
    int* matrix3 = malloc(size1 * size2 * sizeof(int));
    for(int i = 0; i < size1 * size2; i++){
        matrix1[i] = (rand()*time(NULL)) % 3;
    }
    for(int i = 0; i < size1 * size2; i++){
        matrix2[i] = (rand()*time(NULL)) % 3;
    }
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            printf("%d ", matrix1[i * size2 + j]);
    }
    printf("\n");
    }
    printf("\n");
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            printf("%d ", matrix2[i * size2 + j]);
    }
    printf("\n");
    }
    printf("\n");printf("\n");
    for(int i = 0; i < size1 * size2; i++){
        matrix3[i] = matrix1[i] + matrix2[i];
    }
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            printf("%d ", matrix3[i * size2 + j]);
    }
    printf("\n");
    }
    free(matrix1);
    free(matrix2);
    free(matrix3);
    return 0;
}