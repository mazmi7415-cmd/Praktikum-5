#include <stdio.h>

int main() {
    int ordo;
    int A[100][100], B[100][100], hasil[100][100];
    char label[100];

    scanf("%d", &ordo);

    // baca matriks A
    scanf(" %[^\n]", label);
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // baca matriks B
    scanf(" %[^\n]", label);
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // hitung A x B
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < ordo; k++) {
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // cetak
    printf("Matriks AXB\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}