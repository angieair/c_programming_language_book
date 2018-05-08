#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lonelyinteger(int a_size, int* a) {
    // Complete this function
    int result = 0;
    for (int i = 0; i < a_size; i++)
    {
        result ^= a[i];
    }
    return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%i",&a[a_i]);
    }
    int result = lonelyinteger(n, a);
    printf("%d\n", result);
    return 0;
}
