#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value = n - (i < j ? (i < size - j - 1 ? i : size - j - 1) : (j < size - i - 1 ? j : size - i - 1));
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
