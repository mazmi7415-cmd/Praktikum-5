#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kata[100], kata_kecil[100];
    fgets(kata, sizeof(kata), stdin);
    kata[strcspn(kata, "\n")] = '\0';
    
    int len = strlen(kata);
    for (int i = 0; i < len; i++) {
        kata_kecil[i] = tolower(kata[i]);
    }
    kata_kecil[len] = '\0';
    
    int palindrom = 1;
    for (int i = 0; i < len / 2; i++) {
        if (kata_kecil[i] != kata_kecil[len - 1 - i]) {
            palindrom = 0;
            break;
        }
    }
    
    if (palindrom) {
        printf("Kata '%s' adalah palindrom\n", kata);
    } else {
        printf("Kata '%s' bukan palindrom\n", kata);
    }
    
    return 0;
}