#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main () {
    int i, n;
    int *array;

    printf("How many numbers do you want to store? ");
    scanf("%d", &n);

    array = (int*)calloc(n, sizeof(*array));
    assert(array);

    printf("Initialized array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\nInput your %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("The stored numbers are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return(0);
}