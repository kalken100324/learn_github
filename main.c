
#include <stdio.h>

int main() {

    char nama[50];
    char nim[10];
    int umur;

    printf("===== PROGRAM PERTAMA SAYA =====\n");

    printf("Masukkan nama: ");
    scanf("%49s", nama);

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("masukan nim anda: ");
    scanf("%9s", nim);

    printf("\n===== HASIL DATA =====\n");
    printf("Nama saya: %s\n", nama);
    printf("Umur saya: %d tahun\n", umur);
    printf("nim saya: %9s\n", nim);

    return 0;
}
