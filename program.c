#include <stdio.h>

int main() {
    int angka; //input dari user untuk memilih bulan
    char pilihan_keluar; //input dari user berupa huruf untuk lanjut atau berhenti
    
    //loop do-while agar program terus berjalan saat user tidak ingin keluar
    do {
        //loop do-while untuk validasi input
        do {
            printf("Lebokno angka (1-12) lek pengen ndelok wulan jowo: ");
            scanf("%d", &angka);

            //jika angka bukan 1-12 maka input invalid
            if (angka < 1 || angka > 12) {
                printf("Inputmu nguawor rek! Lebokno angka 1 sampe 12 ae.\n\n");
            }
        } while (angka < 1 || angka > 12);

        // switch case untuk memilih bulan jawa sesuai angka input
        printf("saiki wulan jowo ke-%d, ", angka);
        switch (angka) {
            case 1:
                printf("Sura\n");
                break;
            case 2:
                printf("Sapar\n");
                break;
            case 3:
                printf("Mulud\n");
                break;
            case 4:
                printf("Bakda Mulud\n");
                break;
            case 5:
                printf("Jumadil Awal\n");
                break;
            case 6:
                printf("Jumadil Akhir\n");
                break;
            case 7:
                printf("Rejeb\n");
                break;
            case 8:
                printf("Ruwah\n");
                break;
            case 9:
                printf("Pasa\n");
                break;
            case 10:
                printf("Sawal\n");
                break;
            case 11:
                printf("Sela (Apit)\n");
                break;
            case 12:
                printf("Besar\n");
                break;
        }

        //menanyakan user ingin keluar atau tidak
        printf("\nKate metu a teko program iki? (y/t): ");
        scanf(" %c", &pilihan_keluar); 
        printf("--------------------------------------------------\n");

    // jika user mengetik selain y atau Y maka program berhenti
    } while (pilihan_keluar != 'y' && pilihan_keluar != 'Y');

    printf("Program e wis mari. Suwun rek!\n");

    return 0;
}
