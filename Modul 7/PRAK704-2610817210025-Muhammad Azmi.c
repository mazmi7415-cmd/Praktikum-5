#include <stdio.h>
#include <string.h>

int main() {
    char deskripsi[500];
    fgets(deskripsi, sizeof(deskripsi), stdin);
    deskripsi[strcspn(deskripsi, "\n")] = '\0';
    
    if (strlen(deskripsi) > 20) {
        char potongan[21];
        strncpy(potongan, deskripsi, 20);
        potongan[20] = '\0';
        printf("%s...\n", potongan);
    } else {
        printf("%s\n", deskripsi);
    }
    
    return 0;
}