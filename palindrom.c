#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    int i, j, uzunluk;
    int palindrom = 1;

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    uzunluk = strlen(kelime);

    for (i = 0, j = uzunluk - 1; i < uzunluk / 2; i++, j--) {
        if (kelime[i] != kelime[j]) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom == 1) {
        printf("%s palindrom bir kelime\n", kelime);
    } else {
        printf("%s palindrom degil\n", kelime);
    }

    return 0;
}
