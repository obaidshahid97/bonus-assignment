#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void heapPermutation(char a[], int size, int n) {
    if (size == 1) {
        printf("%s\n", a);
    }
 
    for (int i=0; i<size; i++) {
        heapPermutation(a, size-1, n);

        if (size%2==1) {
            swap(&a[0], &a[size-1]);
        } else {
            swap(&a[i], &a[size-1]);
        }
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);
    heapPermutation(str, n, n);
    return 0;
}
