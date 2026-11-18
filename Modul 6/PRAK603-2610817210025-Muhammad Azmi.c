#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int baris1[n1], baris2[n2];

        for (int j = 0; j < n1; j++) {
            scanf("%d", &baris1[j]);
        }
        for (int j = 0; j < n2; j++) {
            scanf("%d", &baris2[j]);
        }

        for (int j = 0; j < n1; j++) {
            printf("%d ", baris1[j] * baris2[j]);
        }
    }

    return 0;
}