#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>
//#include "validasi.c"
//#include "welcom.c"
//#include "regestrasi.c"
#define handle GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
}
///////////////////////////////////////
void background();
void menulogin();
void kotak();
void login();
//void menu1();
void belanja();
void produk();
void informasi();
void ballgown_dres();
void lira();
void latulip();
void off_shause();
void shopia();
void mermaid();
void denim();
void melebihi();
void stok_habis();
void warna_ukuran();
void beli_lagi();
void tambah_lagi();
void bingkaimenu();
void pilihan();
void val_nam_inp();
void bingkaipilih();
void valid_banyak();
void bingkai();
void val_nam_inp();
void nama_inp();
void val_no();
void kelaminkm();
void in_usia();
void val_usia();
void val_kota_inp();
void val_kota();
void user_login();
void user_login_pass();
//void lira();
void nama_inp();
//void valid_uang();

char pilih1;
char pilih2;
//char pilih_tambah_stok;
char kembali;
char war;
char uk;
char ukuran[10];
char mau[10];
char pilih3[10];
char jumlah_tambah_stok[10];
char uang[50];
char beli_baju[7][50];
char warna_baju[8][50];
char ukuran_baju[4][50];
char harga_baju[7][50];
long jmlh[7] = {0, 0, 0, 0, 0, 0, 0};
char bnyk[7][7];
char banyak[10];
char barang[10][50] = {{"ballgown Dress"}, {"lira Dress"}, {"Latulip Dress"}, {"off shouseder dress"}, {"Shopia Anggel Dress"}, {"mermaid Dress"}, {"denim dress"}};
char warna[10][50] = {{"Maroon"}, {"Navy"}, {"lilak"}, {"Peach"}, {"Army"}, {"nafy"}, {"mustrad"}, {"coksu"}};
char harga2[10][50] = {{"Rp.595.000"}, {"Rp.5750.000"}, {"Rp.550.000"}, {"Rp.520.000"}, {"Rp.500.000"}, {"Rp.460.000"}, {"Rp.380.000"}};
char ukur[10][50] = {{"S"}, {"M"}, {"L"}, {"XL"}};
char user[100], pass[100];
char ukbaj[3][3], wanbaj[3][3], jmlbarang[50][50];
int harga = 0, kembalian = 0, kurang, banyak2, total_harga = 0, tamp = 0, tamp1 = 0, uang2 = 0, tbh_stok;
int stock[10] = {10, 10, 10, 10, 10, 10, 10};
//char index = 0;

void background()
{
    for (int a = 0; a < 166; a++)
    {
        gotoxy(a, 41);
        printf("%c", 219);
        Sleep(5); //bawah
        gotoxy(a, 0);
        printf("%c", 219);
        Sleep(5); //atas
    }
    //garis vertikal
    for (int a = 0; a < 42; a++)
    {
        gotoxy(0, a);
        printf("%c%C", 219, 219);
        Sleep(5); //kiri
        gotoxy(164, a);
        printf("%c%C", 219, 219);
        Sleep(5); //kanan
    }
    for (int a = 1; a < 41; a++)
    {
        gotoxy(2, a);
        printf("%c%c", 177, 177); //kiri
        gotoxy(162, a);
        printf("%c%c", 177, 177); //kanan
    }
    //arsir horizontal
    for (int a = 2; a < 162; a++)
    {
        gotoxy(a, 40);
        printf("%c", 177); //bawah
        gotoxy(a, 1);
        printf("%c", 177); //atas
    }
    //lira();
}
void selamat()
{
    //lira();
    //printf("selamat datang ");
    Sleep(2000);
    system("cls");
    menulogin();
}
void menulogin()
{
    gotoxy(13, 7);
    printf("\a%c      %c%c%c%c%c  %c%c%c%c%c  %c  %c%c    %c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(13, 8);
    printf("%c      %c   %c  %c      %c  %c %c   %c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(13, 9);
    printf("%c      %c   %c  %c%c%c%c%c  %c  %c  %c  %c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(13, 10);
    printf("%c      %c   %c  %c   %c  %c  %c   %c %c", 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(13, 11);
    printf("%c%c%c%c%c  %c%c%c%c%c  %c%c%c%c%c  %c  %c    %c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
}
void kotak()
{
    for (int x = 60; x <= 100; x++)
    {
        gotoxy(x, 15);
        printf("%c", 219);
        gotoxy(x, 25);
        printf("%c", 219);
    }
    for (int y = 15; y <= 25; y++)
    {
        gotoxy(60, y);
        printf("%c", 219);
        gotoxy(100, y);
        printf("%c", 219);
    }
}
void registrasi()
{
    background();
    char pilih, ulang;

    gotoxy(35, 10);
    printf("   Nama lengkap            :                                ");
    gotoxy(35, 11);
    printf("   _________________________________________________________");
    gotoxy(35, 12);
    printf("   No Telepon              :                                ");
    gotoxy(35, 13);
    printf("   _________________________________________________________");
    gotoxy(35, 14);
    printf("   Jenis kelamin [l/p]     :                                ");
    gotoxy(35, 15);
    printf("   _________________________________________________________");
    gotoxy(35, 16);
    printf("   Umur                    :                                ");
    gotoxy(35, 17);
    printf("   _________________________________________________________");
    gotoxy(35, 18);
    printf("   Asal kota               :                                ");
    gotoxy(35, 19);
    printf("   _________________________________________________________");
    gotoxy(35, 20);
    printf("   Masukkan username       :                                ");
    gotoxy(35, 21);
    printf("   _________________________________________________________");
    gotoxy(35, 22);
    printf("   Masukkan password       :                                ");
    gotoxy(35, 23);
    printf("   _________________________________________________________");

    gotoxy(27, 28);
    printf("0 UNTUK KEMBALI");
    gotoxy(22, 25);
    printf("==>ENTER UNTUK MELANJUTKAN<==");
    gotoxy(36, 31);
    pilih = getch();
    if (pilih == 'T')
    {
        login();
    }
    else if (pilih == 13)
    {
        val_nam_inp();
    }
    if (pilih == '1')
    {
        int jml = 0;
        do
        {

            if (jml == 3)
            {
                system("cls");
                gotoxy(55, 15);
                printf("login invalid");
                Sleep(1000);
                system("cls");
                Sleep(100);
            }
            else
            {
                gotoxy(63, 19);
                printf("                   ");
                gotoxy(63, 20);
                printf("                   ");
                gotoxy(70, 22);
                printf("                   ");
                gotoxy(63, 18);

                printf(" masukan username   : ");
                gotoxy(63, 19);
                printf(" password           : ");
                gotoxy(85, 18);
                gets(user);
                gotoxy(85, 19);
                gets(pass);
                if (strcmp(user, "Lira") == 0 && strcmp(pass, "200803") == 0)
                {
                    for (int a = 0; a <= 50; a++)
                    {
                        gotoxy(75, 28);
                        printf("loading %d %%", a * 2);
                        Sleep(10); //persentase
                        gotoxy(55 + a, 31);
                        printf("%c", 219);
                        Sleep(10); //jalan
                    }
                    system("cls");
                    pilihan();
                }
                else
                {
                    gotoxy(63, 22);
                    printf(" nama dan password salah !!!");
                    gotoxy(63, 23);
                    printf(" ulangi kembali  !!!");
                    jml++;
                    // Sleep(1000);
                    system("cls");
                }
            }
        } while (!(strcmp(user, "Lira") == 0 && strcmp(pass, "200803") == 0));
    }
    else if (pilih == '2')
    {
        system("cls");
        // PANGGIL FUSION
        // bingkai();
        // val_nam_inp();
        // nama_inp();
        // val_no();
        // kelaminkm();
        // in_usia();
        // val_usia();
        // val_kota_inp();
        // val_kota();
        // user_login();
        // user_login_pass();
    }
    else
    {
        printf("eror");
        login();
    }
}
void menu1()
{
    printf("selamat ");
}
void kotak_tampilan()
{
    background();
    //menu1();
    system("cls");
    //menulogin();
    //horizontal
    for (int a = 0; a < 25; a++)
    {
        gotoxy(28 + a, 24);
        printf("%c", 219); //atas
        gotoxy(28 + a, 28);
        printf("%c", 219); //bawah
        gotoxy(73 + a, 24);
        printf("%c", 219); //atas
        gotoxy(73 + a, 28);
        printf("%c", 219); //bawah
        gotoxy(118 + a, 24);
        printf("%c", 219); //atas
        gotoxy(118 + a, 28);
        printf("%c", 219); //bawah
    }
    //vertikal
    for (int a = 0; a < 4; a++)
    {
        gotoxy(28, 25 + a);
        printf("%c%c", 219, 219); //kiri
        gotoxy(51, 25 + a);
        printf("%c%c", 219, 219); //kanan
        gotoxy(73, 25 + a);
        printf("%c%c", 219, 219); //kiri
        gotoxy(96, 25 + a);
        printf("%c%c", 219, 219); //kanan
        gotoxy(118, 25 + a);
        printf("%c%c", 219, 219); //kiri
        gotoxy(141, 25 + a);
        printf("%c%c", 219, 219); //kanan
    }
    gotoxy(37, 26);
    printf(" U S E R");
    gotoxy(80, 26);
    printf(" A D M I N");
    gotoxy(123, 26);
    printf("K E L U A R");
}
void maju()
{
    for (int a = 0; a <= 50; a++)
    {
        Sleep(10); //persentase
        gotoxy(55 + a, 31);
        printf("%c", 219);
        Sleep(10); //jalan
    }
}
void bingkai_pilih()
{
    for (int x = 60; x <= 110; x++)
    {
        gotoxy(x, 31);
        printf("%c", 219);
        gotoxy(x, 36);
        printf("%c", 219);
    }
    for (int y = 31; y <= 36; y++)
    {
        gotoxy(60, y);
        printf("%c", 219);
        gotoxy(110, y);
        printf("%c", 219);
    }
}
void pilihan()
{
    system("cls");
    kotak_tampilan();
    bingkai_pilih();
    int pilih;
    int pilih2;
    gotoxy(70, 33);
    printf("Masukan pilihan nomer : ");
    scanf("%d", &pilih);
    if (pilih == 1)
    {
        belanja();
    }
    else if (pilih == 2)
    {
        printf("admin");
    }
    else if (pilih == 3)
    {
        exit(0);
    }
    else
    {
        exit(0);
    }
}
// void daftar(){

// }
void belanja()
{
    system("cls");
    gotoxy(40, 3);
    printf("\a####     ####                                  ");
    gotoxy(40, 4);
    printf("## ##   ## ##   #####   ####    ##   ##   ##   ");
    gotoxy(40, 5);
    printf("##  ## ##  ##   ##      ## ##   ##   ##   ##   ");
    gotoxy(40, 6);
    printf("##   ##    ##   #####   ##  ##  ##   ##   ##   ");
    gotoxy(40, 7);
    printf("##         ##   ##      ##   ## ##   ##   ##   ");
    gotoxy(40, 8);
    printf("##         ##   #####   ##      ##   #######   ");
    gotoxy(45, 10);
    printf("#######    ######   ##            ##       ##     ##        ##       ##        ");
    gotoxy(45, 11);
    printf("##    #    ##       ##          ##  ##     ###    ##        ##     ##  ##      ");
    gotoxy(45, 12);
    printf("######     ######   ##         ## ## ##    ## ##  ##        ##    ########     ");
    gotoxy(45, 13);
    printf("##     #   ##       ##        ##      ##   ##  ## ##  #     ##   ##      ##     ");
    gotoxy(45, 14);
    printf("########   ######   ######   ##        ##  ##     ##   #######  ##        ##    ");

    for (int x = 60; x <= 100; x++)
    {
        gotoxy(x, 17);
        printf("%c", 219);
        gotoxy(x, 27);
        printf("%c", 219);
    }
    for (int y = 17; y <= 27; y++)
    {
        gotoxy(60, y);
        printf("%c", 219);
        gotoxy(100, y);
        printf("%c", 219);
    }
    int pilih2;
    // gotoxy(65, 19);
    // printf(" 1.DAFTAR   ");
    gotoxy(65, 21);
    printf(" 1.BELANJA ");
    gotoxy(65, 23);
    printf(" 2. INFORMASI ");
    gotoxy(65, 25);
    printf(" 3.KEMBALI");

    for (int x = 110; x <= 150; x++)
    {
        gotoxy(x, 23);
        printf("%c", 219);
        gotoxy(x, 27);
        printf("%c", 219);
    }
    for (int y = 23; y <= 27; y++)
    {
        gotoxy(110, y);
        printf("%c", 219);
        gotoxy(150, y);
        printf("%c", 219);
    }
    gotoxy(115, 25);
    printf(" MASUKKAN PILIHAN : ");
    // g //otoxy(101, 25);
    pilih2 = getche();

    while (true)
    {

        if (pilih2 == '1')
        {
            maju();
            produk();
        }
        else if (pilih2 == '2')
        {
            maju();
            informasi();
        }
        else if (pilih2 == '3')
        {
            maju();
            kotak_tampilan();
        }
        else
        {
            gotoxy(85, 29);
            printf(" INVALID !! ");
            Sleep(1000);
        }
    }
}
void beli()
{
    while (true)
    {
        char war;
        gotoxy(35, 20);
        printf("Pilih No. Warna : ");
        gotoxy(53, 20);
        war = getche();
        if (war == '1' || war == '2' || war == '3' || war == '4' || war == '5' || war == '6' || war == '7' || war == '8')
        {
            if (war == '1')
            {
                strcpy(warna_baju[tamp], warna[0]);
            }
            else if (war == '2')
            {
                strcpy(warna_baju[tamp], warna[1]);
            }
            else if (war == '3')
            {
                strcpy(warna_baju[tamp], warna[2]);
            }
            else if (war == '4')
            {
                strcpy(warna_baju[tamp], warna[3]);
            }
            else if (war == '5')
            {
                strcpy(warna_baju[tamp], warna[4]);
            }
            else if (war == '6')
            {
                strcpy(warna_baju[tamp], warna[5]);
            }
            else if (war == '7')
            {
                strcpy(warna_baju[tamp], warna[6]);
            }
            else
            {
                strcpy(warna_baju[tamp], warna[7]);
            }
            while (true)
            {
                char uk;
                gotoxy(36, 21);
                printf("No. Ukuran (s-m-l-xl) : ");
                gotoxy(59, 21);
                uk = getche();
                if (uk == '1' || uk == '2' || uk == '3' || uk == '4')
                {
                    if (uk == '1')
                    {
                        strcpy(ukuran_baju[tamp], ukur[0]);
                    }
                    else if (uk == '2')
                    {
                        strcpy(ukuran_baju[tamp], ukur[1]);
                    }
                    else if (uk == '3')
                    {
                        strcpy(ukuran_baju[tamp], ukur[2]);
                    }
                    else
                    {
                        strcpy(ukuran_baju[tamp], ukur[3]);
                    }
                    while (true)
                    {
                        gotoxy(35, 22);
                        printf("Berapa Banyak : ");
                        gotoxy(51, 22);
                        gets(banyak);
                        //valid_banyak();
                        banyak2 = atoi(banyak);
                        strcpy(bnyk[tamp], banyak);
                        int index = 0;
                        int jml = atoi(jmlbarang[index]);
                        if (war == '1')
                        {
                            if (banyak2 <= stock[0])
                            {
                                strcpy(beli_baju[tamp], barang[0]);
                                strcpy(harga_baju[tamp], harga2[0]);
                                tamp++;

                                harga = 5950000 * banyak2;
                                total_harga += harga;
                                stock[0] -= banyak2;
                                gotoxy(35, 23);
                                printf("Total : Rp. %d", harga);
                                jmlh[tamp1] += harga;
                                tamp1++;

                                beli_lagi();
                            }
                            else if (banyak2 > stock[0])
                            {
                                melebihi();
                            }
                            else
                            {
                                stok_habis();
                            }
                        }
                        else if (war == '2')
                        {
                            if (banyak2 <= stock[1])
                            {
                                strcpy(beli_baju[tamp], barang[1]);
                                strcpy(harga_baju[tamp], harga2[1]);
                                tamp++;
                                harga = 5750000 * banyak2;
                                total_harga += harga;
                                stock[1] -= banyak2;
                                jmlh[tamp1] += harga;
                                tamp1++;
                                gotoxy(35, 23);
                                printf("Total : Rp. %d", harga);
                                beli_lagi();
                            }
                            else if (banyak2 > stock[1])
                            {
                                melebihi();
                            }
                            else
                            {
                                stok_habis();
                            }
                        }
                        else if (war == '3')
                        {
                            if (banyak2 <= stock[2])
                            {
                                strcpy(beli_baju[tamp], barang[2]);
                                strcpy(harga_baju[tamp], harga2[2]);
                                tamp++;

                                harga = 550000 * banyak2;
                                total_harga += harga;
                                stock[2] -= banyak2;
                                jmlh[tamp1] += harga;
                                tamp1++;
                                gotoxy(35, 23);
                                printf("Total : Rp. %d", harga);
                                beli_lagi();
                            }
                            else if (banyak2 > stock[2])
                            {
                                melebihi();
                            }
                            else
                            {
                                stok_habis();
                            }
                        }
                        else if (war == '4')
                        {

                            if (banyak2 <= stock[3])
                            {
                                strcpy(beli_baju[tamp], barang[3]);
                                strcpy(harga_baju[tamp], harga2[3]);
                                tamp++;
                                harga = 520000 * banyak2;
                                total_harga += harga;
                                stock[3] -= banyak2;
                                jmlh[tamp1] += harga;
                                tamp1++;
                                gotoxy(35, 23);
                                printf("Total : Rp. %d", harga);
                                beli_lagi();
                            }
                            else if (banyak2 > stock[3])
                            {
                                melebihi();
                            }
                            else
                            {
                                stok_habis();
                            }
                        }
                        else if (war == '5')
                        {
                            if (banyak2 <= stock[4])
                            {
                                strcpy(beli_baju[tamp], barang[4]);
                                strcpy(harga_baju[tamp], harga2[4]);
                                tamp++;
                                harga = 500000 * banyak2;
                                total_harga += harga;
                                stock[4] -= banyak2;
                                jmlh[tamp1] += harga;
                                tamp1++;
                                gotoxy(35, 23);
                                printf("Total : Rp. %d", harga);
                                beli_lagi();
                            }
                            else if (banyak2 > stock[4])
                            {
                                melebihi();
                            }
                            else
                            {
                                stok_habis();
                            }
                        }
                        else if (war == '6')
                        {
                            if (banyak2 <= stock[5])
                            {
                                strcpy(beli_baju[tamp], barang[5]);
                                strcpy(harga_baju[tamp], harga2[5]);
                                tamp++;
                                harga = 460000 * banyak2;
                                total_harga += harga;
                                stock[5] -= banyak2;
                                jmlh[tamp1] += harga;
                                tamp1++;
                                gotoxy(35, 23);
                                printf("Total : Rp. %d", harga);
                                beli_lagi();
                            }
                            else if (banyak2 > stock[5])
                            {
                                melebihi();
                            }
                            else
                            {
                                stok_habis();
                            }
                        }
                        else if (war == '7')
                        {
                            if (banyak2 <= stock[6])
                            {
                                strcpy(beli_baju[tamp], barang[6]);
                                strcpy(harga_baju[tamp], harga2[6]);
                                tamp++;
                                harga = 38000 * banyak2;
                                total_harga += harga;
                                stock[6] -= banyak2;
                                jmlh[tamp1] += harga;
                                tamp1++;
                                gotoxy(35, 23);
                                printf("Total : Rp. %d", harga);
                                beli_lagi();
                            }
                            else if (banyak2 > stock[6])
                            {
                                melebihi();
                            }
                            else
                            {
                                stok_habis();
                            }
                        }
                        else
                        {
                            gotoxy(99, 29);
                            printf("Warna Tidak Tersedia");
                            Sleep(1000);
                        }
                    }
                }
                else
                {
                    gotoxy(99, 29);
                    printf("Ukuran Tidak Tersedia ");
                    Sleep(1000);
                }
            }
        }
        else
        {
            gotoxy(99, 29);
            printf("Tidak Tersedia");
            Sleep(1000);
        }
    }
}
void melebihi()
{
    gotoxy(50, 29);
    printf("      Pembelian melebihi stok, silahkan kurangi pembelian!!     ");
    Sleep(1000);
}
void stok_habis()
{
    gotoxy(99, 29);
    printf("      Stok Habis     ");
}
void beli_lagi()
{
    while (true)
    {
        gotoxy(35, 23);
        printf("Apakah anda mau membeli lagi?(y/t)");
        gets(mau);
        if (strcmp(mau, "y") == 0 || strcmp(mau, "Y") == 0)
        {
            system("cls");
            produk();
        }
        else if (strcmp(mau, "t") == 0 || strcmp(mau, "T") == 0)
        {
            gotoxy(35, 23);
            printf("                                   ");
            gotoxy(35, 24);
            printf("Total Harga : Rp. %d", total_harga);
            while (true)
            {
                gotoxy(35, 25);
                printf("Masukkan Uang : Rp. ");
                gotoxy(55, 25);
                gets(uang);
                valid_banyak();
                uang2 = atoi(uang);
                if (uang2 > total_harga)
                {
                    kembalian = uang2 - total_harga;
                    gotoxy(35, 28);
                    printf("Kembalian : Rp.%d", kembalian);
                    Sleep(2000);
                    system("cls");
                    printf(" lallala");
                }
                else if (uang2 < total_harga)
                {
                    kurang = total_harga - uang2;
                    gotoxy(35, 28);
                    printf("KURANG : Rp.%d", kurang);
                    Sleep(1000);
                }
                else
                {
                    gotoxy(35, 28);
                    printf("Uang Anda Pas");
                    Sleep(1500);
                    system("cls");
                    printf("lalala");
                }
            }
        }
        else
        {
            gotoxy(99, 29);
            printf("      INVALID !    ");
            Sleep(1000);
        }
    }
}
void produk()
{
    system("cls");
    gotoxy(30, 1);
    printf("                    ==========================                    ");
    gotoxy(30, 2);
    printf("                       # KOLEKSI PRODUK : #                       ");
    gotoxy(30, 3);
    printf("                    ==========================                    ");
    gotoxy(15, 4);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 5);
    printf("%c%c           NAMA PRODUK           %c%c            HARGA            %c%c         STOK        %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 6);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 7);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 8);
    printf("%c%c  1.Ballgow Drees                %c%c        Rp. 595.000          %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 9);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 10);
    printf("%c%c  2. Lira Drees                  %c%c        Rp. 575.000          %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 11);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 12);
    printf("%c%c  3. Latulif Dress               %c%c        Rp. 550.000          %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 13);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 14);
    printf("%c%c  4. Off Shose Drees             %c%c        Rp. 520.000          %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 15);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 16);
    printf("%c%c  5. Shopia Anggel Dress         %c%c        Rp. 500.000          %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 17);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 18);
    printf("%c%c  6. Mermaid Dress               %c%c        Rp. 460.000          %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 19);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 20);
    printf("%c%c  7. Denim Drees                 %c%c        Rp. 380.000          %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 21);
    printf("%c%c                                 %c%c                             %c%c                     %c%c", 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(15, 22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);
    gotoxy(91, 8);
    printf("%d pcs", stock[0]);
    gotoxy(91, 10);
    printf("%d pcs", stock[1]);
    gotoxy(91, 12);
    printf("%d pcs", stock[2]);
    gotoxy(91, 14);
    printf("%d pcs", stock[3]);
    gotoxy(91, 16);
    printf("%d pcs", stock[4]);
    gotoxy(91, 18);
    printf("%d pcs", stock[5]);
    gotoxy(91, 20);
    printf("%d pcs", stock[6]);
    gotoxy(5, 29);
    printf("Tekan 0 untuk kembali");
    while (true)
    {
        int pilih1;
        gotoxy(52, 26);
        printf("MASUKKAN PILIHAN : ");
        gotoxy(71, 26);
        pilih1 = getche();
        if (pilih1 == '0')
        {
            system("cls");
            menu1();
        }
        else if (pilih1 == '1')
        {
            system("cls");
            ballgown_dres();
        }
        else if (pilih1 == '2')
        {
            system("cls");
            lira();
        }
        else if (pilih1 == '3')
        {
            system("cls");
            latulip();
        }
        else if (pilih1 == '4')
        {
            system("cls");
            off_shause();
        }
        else if (pilih1 == '5')
        {
            system("cls");
            shopia();
        }
        else if (pilih1 == '6')
        {
            system("cls");
            mermaid();
        }
        else if (pilih1 == '7')
        {
            system("cls");
            denim();
        }
        else
        {
            gotoxy(52, 28);
            printf("Maaf pilihan anda tidak tersedia");
            Sleep(1000);
        }
    }
}

void ballgown_dres()
{
    gotoxy(20, 3);
    printf("1. BALLGOUN DRESS (Rp. 595.000)");
    gotoxy(20, 4);
    printf("      BALLGOUN DRESS koleksi by LIRA yang  dibuat dari Kain satin ");
    gotoxy(20, 5);
    printf("  yang mempunyai tampilan mengkilap dengan tekstur ");
    gotoxy(20, 6);
    printf("  lembut dan mudah jatuh,  terasa nyaman ketika digunakan dan memiliki bentuk melengkung bervoleme.");
    gotoxy(20, 7);
    printf("drees ini cocok untuk digunakan di acara pernikahan karena dapat membuat penampilanmu terkesan dan lebih elegan dan menawan");
    warna_ukuran();
}
void lira()
{
    gotoxy(20, 3);
    printf("7. lira dress(Rp. 575.000)");
    gotoxy(20, 4);
    printf("lira deress baju ini terbuat dari kain wolfis yang sangat nyaman ketika digunakan, karena memiliki");
    gotoxy(20, 5);
    printf("tekstur yang halus,ringan, mudah menyerap keringat dan juga mudah jatuh ");
    gotoxy(20, 6);
    printf("Drees ini cocok digunakan ketika di acara kumpul keluarga ataupun temen sebanya  ");
    warna_ukuran();
}
void latulip()
{
    gotoxy(20, 3);
    printf(" LATULIP (Rp. 520.000)");
    gotoxy(20, 4);
    printf(" Latulip  Dress merupakan jenis gaun yang kami buat dari bahan kain pilihan yang ");
    gotoxy(20, 5);
    printf("membuatnya  berkualitas,nyaman di pakai dan tidak membuat mudah berkeringat.");
    gotoxy(20, 6);
    printf("koleksi yang satu ini sangat cocok  ketika digunakan ke acara-acara formal.. ");
    warna_ukuran();
}
void off_shause()
{
    gotoxy(20, 3);
    printf("OFF SHOUSE DREES (Rp. 520.000)");
    gotoxy(20, 4);
    printf(" OFF SHOUSE DREESD, tidak jauh beda dengan LATULIP DREES,");
    gotoxy(20, 5);
    printf("koleksi yang satu ini juga merupakan gaun yang kami buat dari kain berkualitas, hanya saja ");
    gotoxy(20, 6);
    printf("koleksi ini tekturnya lebih halus dan mudah jatuh dibanding koleksi LATULIP DRESS.");
    gotoxy(20, 7);
    printf("jenis dress ini pisa membuat penampilan muterlihat lebih girly anggun dan elegan dangan bawahan a-line dan mixi");
    gotoxy(20, 8);
    printf("Dress ini juga  bisa di padukan dengan berbagai macam alas kaki biar terlihat cantik");
    warna_ukuran();
}
void shopia()
{
    gotoxy(20, 3);
    printf(" SHOPIA ANGGEL DREES (Rp. 500.000)");
    gotoxy(20, 4);
    printf("Shopia Anggel Dress kami buat dari kain Balotelli, tidak menerawang tidak panas ");
    gotoxy(20, 5);
    printf("Bahannya pun  lembut dengan tekstur yang khas.");
    gotoxy(20, 6);
    printf("Koleksi yang satu ini kami rangcang dngan sederhana namun tampak elegan dan anggun . ");
    gotoxy(20, 7);
    printf("Dress ini cocok digunakan untuk membuat pinngang lebar terlihat lebih ramping , dan cook digunakan diberbagai  acara apapun");
    warna_ukuran();
}
void mermaid()
{
    gotoxy(20, 3);
    printf("MERMAID DRESS(Rp. 460.000)");
    gotoxy(20, 4);
    printf("Mermaid Dress ini terbuat dari kaen siffon kaen bahan ini sangat nyaman saat digunakan .");
    gotoxy(20, 5);
    printf("mermaid dress juga memiliki bentuk yang terimpirasi dari putri dunyung ");
    gotoxy(20, 6);
    printf("karena dari bangian atas sampe lutut dan memiliki pentuk yang ketat ,namun dibagian bawah lutut memiliki bentuk melebar sampe keujung kaki  ");
    gotoxy(20, 7);
    printf("dengan model bagian atas yang berbentuk tanpa lengan atau dengan lengan,dress ini biasanya di gunakan di saat acara acara formal");
    warna_ukuran();
}
void denim()
{
    gotoxy(20, 3);
    printf(" DENIM DREES (Rp. 380.000)");
    gotoxy(20, 4);
    printf("Denim Dress by lira ini terbuat dari bahan yang sangat nyaman pada saat digunakan.");
    gotoxy(20, 5);
    printf("koleksinya yang satu ini terbuat dari 100 %% serat kapas alami, memiliki tekstur yang halus,adem, ");
    gotoxy(20, 6);
    printf("dan mudah menyerap keringat.Kain jenis ini paling cocok dipakai pada daerah mempunyai iklim tropis");
    warna_ukuran();
}
void warna_ukuran()
{
    gotoxy(30, 9);
    printf("Macam Warna Tersedia     ");
    gotoxy(30, 10);
    printf("1. Maroon ");
    gotoxy(30, 11);
    printf("2. Navy");
    gotoxy(30, 12);
    printf("3. Ungu ");
    gotoxy(30, 13);
    printf("4. Peach ");
    gotoxy(30, 14);
    printf("5. Army ");
    gotoxy(30, 15);
    printf("6. Kuning ");
    gotoxy(30, 16);
    printf("7. Coklat ");
    gotoxy(30, 17);
    printf("8. Hijau ");
    gotoxy(62, 9);
    printf("Ukuran Yang Tersedia             ");
    gotoxy(62, 10);
    printf("1. S        ");
    gotoxy(62, 11);
    printf("2. M        ");
    gotoxy(62, 12);
    printf("3. L        ");
    gotoxy(62, 13);
    printf("4. XL       ");
    while (true)
    {
        char mau[100];
        gotoxy(25, 18);
        printf("Apakah anda mau beli?(y/t)");
        gotoxy(52, 18);
        gets(mau);
        if (strcmp(mau, "y") == 0 || strcmp(mau, "Y") == 0)
        {
            beli();
        }
        else if (strcmp(mau, "t") == 0 || strcmp(mau, "T") == 0)
        {
            //kotak_tampilan();
            produk();
        }
        else
        {
            gotoxy(99, 29);
            printf("INVALID ! ");
            Sleep(1000);
        }
    }
}
void valid_banyak()
{
    int a = strlen(banyak);
    if (a <= 0)
    {
        gotoxy(78, 27);
        printf("Maaf, inputan invalid!");
        Sleep(1000);
        gets(banyak);
        valid_banyak();
    }
    int salah = 0;
    for (int c = 0; c < strlen(banyak); c++)
    {
        if (banyak[0] == '0')
        {
            salah++;
        }
        if (banyak[c] >= '0' && banyak[c] <= '9')
        {
            continue;
        }
        else
        {
            gotoxy(78, 27);
            printf("Maaf, inputan invalid!");
            Sleep(1000);
            gets(banyak);
            valid_banyak();
        }
    }
    if (salah > 0)
    {
        gotoxy(78, 27);
        printf("Maaf, inputan invalid!");
        Sleep(1000);
        gets(banyak);
        valid_banyak();
    }
    if (banyak == 0)
    {
        gotoxy(78, 27);
        printf("Maaf, inputan invalid!");
        Sleep(1000);
        gets(banyak);
        valid_banyak();
    }
}
void informasi()
{
    system("cls");
    gotoxy(22, 9);
    printf("                                 I N F O R M A S I ");
    gotoxy(22, 10);
    printf("                               |||||||||||||||||||||||");
    gotoxy(20, 11);
    printf("               Butik liparkah adalah Aplikasi yang dibuat untuk memudahkan pembeli    ");
    gotoxy(20, 12);
    printf("   dalam membeli fashion yang berkualitas.Tujuan dari aplikasi ini yaitu untuk memudahkan masyarakat         ");
    gotoxy(20, 13);
    printf("                   yang ingin membeli baju tampa harus keluar dari rumah.     ");
    gotoxy(20, 14);
    printf("aplikasi ini di dirikan pada tanggal 15 januari 2023  oleh lira rahmawati selaku pemilik dari Butik liparkah ini.   ");
    gotoxy(20, 15);
    printf("                 Permbuat Aplikasi ini berharap agar Aplikasi ini dapat bermanfaat. ");
    gotoxy(20, 16);
    printf("                          Dan juga menjadi awal yang baik untuk kedepannya.");
    gotoxy(60, 27);
    printf(" TEKAN TOMBOL ENTER UNTUK KEMBALI.......");
    getche();
    int input;
    while ((input = getch()) != 13)
    {
    }
    system("cls");
    belanja();
}
void main()
{
    background();
    menulogin();
    kotak();
    login();
    // kotak_tampilan();
    // pilihan();
    // belanja();
    // valid_banyak();
    // //valid_uang();
    // beli_lagi();
    getch();
}