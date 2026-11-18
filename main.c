
#include <stdio.h>

int main() {

    char nama[50];
    int umur;

    printf("===== PROGRAM PERTAMA SAYA =====\n");

    printf("Masukkan nama: ");
    scanf("%49s", nama);

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("\n===== HASIL DATA =====\n");
    printf("Nama saya: %s\n", nama);
    printf("Umur saya: %d tahun\n", umur);

    return 0;
}
