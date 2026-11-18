#include <stdio.h>
#include <string.h>

int main() {
    char depan[100], belakang[100], lengkap[205];
    
    printf("Nama Depan: ");
    fgets(depan, sizeof(depan), stdin);
    depan[strcspn(depan, "\n")] = '\0';
    
    printf("Nama Belakang: ");
    fgets(belakang, sizeof(belakang), stdin);
    belakang[strcspn(belakang, "\n")] = '\0';
    
    strcpy(lengkap, depan);
    strcat(lengkap, " ");
    strcat(lengkap, belakang);
    
    int panjang = 0;
    for (int i = 0; lengkap[i] != '\0'; i++) {
        if (lengkap[i] != ' ') {
            panjang++;
        }
    }
    
    printf("Nama Lengkap : %s\n", lengkap);
    printf("Panjang Nama (tanpa spasi): %d\n", panjang);
    
    return 0;
}