#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "bingkai1.c"
#include "menu_registrasi.c"
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
/////////////////////MACAM WARNA//////////////////////////////////
#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define DARK_WHITE 7
#define GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15
/////////////////////////////////////////////////////
int text_color = FOREGROUND_INTENSITY;
int bg_color = 0;
void background_clr(int color)
{
    SetConsoleTextAttribute(handle, text_color | (color << 4));
    bg_color = color;
}
void gotoxy(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void setcolor(int text, int bg)
{
    SetConsoleTextAttribute(handle, bg * 16 + text);
}
////////////////////////////////////////////////
void welcome();
void kotak_pilihan();
void bingkai_pilih();
void pilihan();
void louding_bingkai();
void kotak();
void beli();
void menulogin();
void login_registrasi();
void belanja();
void informasi();
void produk();
void ballgown_dres();
void lira();
void latulip();
void off_shause();
void shopia();
void mermaid();
void denim();
void warna_ukuran();
void maju_panjang();
void maju1_panjang();
void tinggi();
void tampilan_baju();
void tampilan_butik();
void melebihi();
void stok_habis();
void beli_lagi();
void daftar_regisrasi();
void beli_lagi();
void setruk_pembanyaran();
void valid_banyak();
void background();
void menu_admin1();
void tambah_stok();
void membeli_stok();
void pilihan_admin();
void login_admin();
void maju();
void tampilan_admin();
void maju_keil();
void riwayat();
///////////////////////////////////////////////////////////////////////////////////////
char war;
char uk;
char pilih1;
char pilih2;
char kembali;
char nama1[100];
char pass1[100];
char nama1[100];
char mau[10];
char uang[50];
char user[100];
char pass[100];
char ukuran[10];
char pilih3[10];
char bnyk[7][7];
char banyak[10];
char harga_baju[7][50];
char beli_baju[7][50];
char warna_baju[8][50];
char ukuran_baju[4][50];
char jumlah_tambah_stok[10];
long jmlh[7] = {0, 0, 0, 0, 0, 0, 0};
int stock[10];
char tampStok[10][10];
char ukbaj[3][3], wanbaj[3][3], jmlbarang[50][50];
int harga = 0, kembalian = 0, kurang, banyak2, total_harga = 0, tamp = 0, tamp1 = 0, uang2 = 0, tbh_stok;
char ukur[10][50] = {{"S"}, {"M"}, {"L"}, {"XL"}};
char barang[10][50] = {{"ballgown Dress"}, {"lira Dress"}, {"Latulip Dress"}, {"off shouseder dress"}, {"Shopia Anggel Dress"}, {"mermaid Dress"}, {"denim dress"}};
char warna[10][50] = {{"Maroon"}, {"Navy"}, {"lilak"}, {"Peach"}, {"Army"}, {"nafy"}, {"mustrad"}, {"coksu"}};
char harga2[10][50] = {{"Rp.595.000"}, {"Rp.5750.000"}, {"Rp.550.000"}, {"Rp.520.000"}, {"Rp.500.000"}, {"Rp.460.000"}, {"Rp.380.000"}};

////////////////////////////////////////////////////////////////////////////

void bingkaii(int x, int y, int panjang, int lebar, int color, int bg)
{
    for (int i = 0; i <= panjang; i++)
    {
        for (int j = 0; j <= lebar; j++)
        {
            if (i == 0 || i == panjang || j == 0 || j == lebar)
            {
                gotoxy(i + x, j + y);
                setcolor(color, color);
                printf("%c%c", 219, 219);
            }
            else
            {
                gotoxy(i + x, j + y);
                background_clr(bg);
                printf("  ");
            }
        }
    }
}
////////////////////////////////////////////////////////////////
void background()
{
    for (int a = 0; a < 166; a++)
    {
        gotoxy(a, 41);
        printf("%c", 219);
        Sleep(2); // bawa
        gotoxy(a, 0);
        printf("%c", 219);
        Sleep(2); // atas
    }
    // garis vertikal
    for (int a = 0; a < 42; a++)
    {
        gotoxy(0, a);
        printf("%c%c", 219, 219);
        Sleep(2); // kiri
        gotoxy(164, a);
        printf("%c%c", 219, 219);
        Sleep(2); // kanan
    }
    for (int a = 1; a < 41; a++)
    {
        gotoxy(2, a);
        printf("%c%c", 177, 177); // kiri
        gotoxy(162, a);
        printf("%c%c", 177, 177); // kanan
    }
    // arsir horizontal
    for (int a = 2; a < 162; a++)
    {
        gotoxy(a, 40);
        printf("%c", 177); // bawah
        gotoxy(a, 1);
        printf("%c", 177); // atas
    }
}
void welcome()
{
    bingkaii(0, 0, 165, 42, 13, 15);
    bingkaii(1, 1, 164, 41, 5, 15);
    setcolor(5, 15);
    gotoxy(8, 4);
    printf("                        $$\\                                                        ");
    gotoxy(8, 5);
    printf("                        $$ |                                                       ");
    gotoxy(8, 6);
    printf("$$\\  $$\\  $$\\  $$$$$$\\  $$ | $$$$$$$\\  $$$$$$\\  $$$$$$\\$$$$\\   $$$$$$\\             ");
    gotoxy(8, 7);
    printf("$$ | $$ | $$ |$$  __$$\\ $$ |$$  _____|$$  __$$\\ $$  _$$  _$$\\ $$  __$$\\            ");
    gotoxy(8, 8);
    printf("$$ | $$ | $$ |$$$$$$$$ |$$ |$$ /      $$ /  $$ |$$ / $$ / $$ |$$$$$$$$ |           ");
    gotoxy(8, 9);
    printf("$$ | $$ | $$ |$$   ____|$$ |$$ |      $$ |  $$ |$$ | $$ | $$ |$$   ____|           ");
    gotoxy(8, 10);
    printf("\\$$$$$\\$$$$  |\\$$$$$$$\\ $$ |\\$$$$$$$\\ \\$$$$$$  |$$ | $$ | $$ |\\$$$$$$$\\            ");
    gotoxy(8, 11);
    printf(" \\_____\\____/  \\_______|\\__| \\_______| \\______/ \\__| \\__| \\__| \\_______|           ");
    gotoxy(15, 13);
    printf("    $$\\                     $$\\                   $$\\     $$\\ $$\\                 ");
    gotoxy(15, 14);
    printf("    $$ |                    $$ |                  $$ |    \\__|$$ |                ");
    gotoxy(15, 15);
    printf("  $$$$$$\\    $$$$$$\\        $$$$$$$\\  $$\\   $$\\ $$$$$$\\   $$\\ $$ |  $$\\           ");
    gotoxy(15, 16);
    printf("  \\_$$  _|  $$  __$$\\       $$  __$$\\ $$ |  $$ |\\_$$  _|  $$ |$$ | $$  |          ");
    gotoxy(15, 17);
    printf("    $$ |    $$ /  $$ |      $$ |  $$ |$$ |  $$ |  $$ |    $$ |$$$$$$  /           ");
    gotoxy(15, 18);
    printf("    $$ |$$\\ $$ |  $$ |      $$ |  $$ |$$ |  $$ |  $$ |$$\\ $$ |$$  _$$<            ");
    gotoxy(15, 19);
    printf("    \\$$$$  |\\$$$$$$  |      $$$$$$$  |\\$$$$$$  |  \\$$$$  |$$ |$$ | \\$$\\           ");
    gotoxy(15, 20);
    printf("     \\____/  \\______/       \\_______/  \\______/    \\____/ \\__|\\__|  \\__|          ");
    tampilan_butik();
    tampilan_baju();
}
void tampilan_butik()
{
    setcolor(5, 15);
    gotoxy(25, 22);
    printf("   $$\\ $$\\                               $$\\                $$\\           ");
    gotoxy(25, 23);
    printf("   $$ |\\__|                              $$ |               $$ |          ");
    gotoxy(25, 24);
    printf("   $$ |$$\\  $$$$$$\\   $$$$$$\\   $$$$$$\\  $$ |  $$\\ $$$$$$\\  $$$$$$$\\     ");
    gotoxy(25, 25);
    printf("   $$ |$$ |$$  __$$\\  \\____$$\\ $$  __$$\\ $$ | $$  |\\____$$\\ $$  __$$\\     ");
    gotoxy(25, 26);
    printf("   $$ |$$ |$$ /  $$ | $$$$$$$ |$$ |  \\__|$$$$$$  / $$$$$$$ |$$ |  $$ |    ");
    gotoxy(25, 27);
    printf("   $$ |$$ |$$ |  $$ |$$  __$$ |$$ |      $$  _$$< $$  __$$ |$$ |  $$ |    ");
    gotoxy(25, 28);
    printf("   $$ |$$ |$$$$$$$  |\\$$$$$$$ |$$ |      $$ | \\$$\\$$$$$$$ |$$ |  $$ |    ");
    gotoxy(25, 29);
    printf("   \\__|\\__|$$  ____/  \\_______|\\__|      \\__|  \\__|\\_______|\\__|  \\__|    ");
    gotoxy(25, 30);
    printf("          $$ |                                                            ");
    gotoxy(25, 31);
    printf("          $$ |                                                            ");
    gotoxy(25, 32);
    printf("          \\__|                                                            ");
}
void tampilan_baju()
{
    setcolor(5, 15);
    gotoxy(90, 6);
    printf("         __    __              ");
    gotoxy(90, 7);
    printf("        /  \\  /  \\            ");
    gotoxy(90, 8);
    printf("        `~( `' )~'             ");
    gotoxy(90, 9);
    printf("           }  {                ");
    gotoxy(90, 10);
    printf("          /\\  /\\              ");
    gotoxy(90, 11);
    printf("        .'  `'  `.             ");
    gotoxy(90, 12);
    printf("       /  .'  `.  \\           ");
    gotoxy(90, 13);
    printf("     .'  /      \\  `.         ");
    gotoxy(90, 14);
    printf("        .'   .  `.   \\        ");
    gotoxy(90, 15);
    printf("  .'   /     |    \\   `.      ");
    gotoxy(90, 16);
    printf(" /    .'     .    `.    \\     ");
    gotoxy(90, 17);
    printf("/    /       |      \\    \\     ");
    gotoxy(90, 18);
    printf("`~~~~..___   |   __..~~~~'     ");
    Sleep(2000);
    system("cls");
    kotak_pilihan();
}
void kotak_pilihan()
{
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    // setcolor(5, 15);
    background();
    judul_bingkai();
    // horizontal
    for (int a = 0; a < 25; a++)
    {
        gotoxy(28 + a, 24);
        printf("%c", 219); // atas
        gotoxy(28 + a, 28);
        printf("%c", 219); // bawah
        gotoxy(73 + a, 24);
        printf("%c", 219); // atas
        gotoxy(73 + a, 28);
        printf("%c", 219); // bawah
        gotoxy(118 + a, 24);
        printf("%c", 219); // atas
        gotoxy(118 + a, 28);
        printf("%c", 219); // bawah
    }
    // vertikal
    for (int a = 0; a < 4; a++)
    {
        gotoxy(28, 25 + a);
        printf("%c%c", 219, 219); // kiri
        gotoxy(51, 25 + a);
        printf("%c%c", 219, 219); // kanan
        gotoxy(73, 25 + a);
        printf("%c%c", 219, 219); // kiri
        gotoxy(96, 25 + a);
        printf("%c%c", 219, 219); // kanan
        gotoxy(118, 25 + a);
        printf("%c%c", 219, 219); // kiri
        gotoxy(141, 25 + a);
        printf("%c%c", 219, 219); // kanan
    }
    gotoxy(37, 26);
    printf(" U S E R");
    gotoxy(80, 26);
    printf(" A D M I N");
    gotoxy(123, 26);
    printf("K E L U A R");
    bingkai_pilih();
    pilihan();
}
void bingkai_pilih()
{
    // setcolor(5, 15);
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
    //  setcolor(5, 15);
    // system("cls");
    char pilih[100];
    int pilih2;
    int plh = 0;
    gotoxy(70, 33);
    printf("Masukan pilihan nomer : ");
    plh = atoi(valpilih(pilih));
    if (plh == 1)
    {
        system("cls");
        background();
        login_registrasi();
    }
    else if (plh == 2)
    {
        system("cls");
        tampilan_admin();
        tambah_stok();
    }
    else if (plh == 3)
    {
        system("cls");
        background();
        terimakasih();
        // exit(1);
    }
}
void kotak()
{
    // setcolor(5, 15);
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
void daftar_regisrasi()
{
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    // setcolor(5, 15);
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
    val_nam_inp();
    // gotoxy(27, 28);
    // printf("0 UNTUK KEMBALI");
    // gotoxy(22, 25);
    // printf("==>ENTER UNTUK MELANJUTKAN<==");
    // gotoxy(36, 31);
}
void login_registrasi()
{
    int plh = 0;
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    // setcolor(5, 15);
    kotak();
    char pilih[100];
    gotoxy(63, 18);
    printf(" 1. LOGIN");
    gotoxy(63, 19);
    printf(" 2. REGISTRASI ");
    gotoxy(63, 20);
    printf(" 3. IMPORMASI ");
    gotoxy(63, 21);
    printf(" 4. KEMBALI ");
    gotoxy(70, 23);
    printf("Pilih : ");
    plh = atoi(vlh(pilih));
    if (plh == 1)
    {
        system("cls");
        kotak();
        u_login();
    }
    else if (plh == 2)
    {
        system("cls");
        // bingkaii(0, 0, 165, 42, 13, 15);
        // bingkaii(1, 1, 164, 41, 5, 15);
        // louding_bingkai();
        registrasi();
    }
    else if (plh == 3)
    {
        informasi();
    }
    else if (plh == 4)
    {
        system("cls");
        kotak_pilihan();
    }
}
void maju()
{
    for (int a = 0; a <= 50; a++)
    {
        Sleep(10); // persentase
        gotoxy(55 + a, 31);
        printf("%c", 219);
        Sleep(10); // jalan
    }
}
void louding_bingkai()
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
void belanja()
{
    system("cls");
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
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

    /////////////////////////////// MENAMPILKAN NAMA KONSUMEN  /////////////////////////////
    char nama1[50][50];
    char no1[50][50];
    char kelamin1[50][50];
    char umur1[50][50];
    char ttl1[50][50];

    FILE *file;
    file = fopen("registrasi_akun.txt", "r");
    int x = 0;
    int z = 0;
    while (!feof(file))
    {
        fscanf(file, "%s", &nama1[x]);
        fscanf(file, "%s", &no1[x]);
        fscanf(file, "%s", &kelamin1[x]);
        fscanf(file, "%s", &umur1[x]);
        fscanf(file, "%s", &ttl1[x]);
        x++;
    }
    fclose(file);
    gotoxy(115, 22);
    printf(" Selamat Datang %s ", nama1[indek]);
    gotoxy(65, 20);
    printf(" 1.BELANJA ");
    gotoxy(65, 23);
    printf(" 2.KEMBALI ");
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
    char plh = 0;
    char pilih[100];
    gotoxy(115, 25);
    printf(" MASUKKAN PILIHAN : ");
    plh = atoi(vlh22(pilih));
    while (true)
    {
        if (plh == 1)
        {
            maju();
            produk();
        }
        else if (plh == 2)
        {
            maju();
            system("cls");
            login_registrasi();
        }
        else
        {
            gotoxy(85, 29);
            printf(" INVALID !! ");
            Sleep(1000);
        }
    }
}
void produk()
{
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
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
    printf("%s pcs", tampStok[0]);
    gotoxy(91, 10);
    printf("%s pcs", tampStok[1]);
    gotoxy(91, 12);
    printf("%s pcs", tampStok[2]);
    gotoxy(91, 14);
    printf("%s pcs", tampStok[3]);
    gotoxy(91, 16);
    printf("%s pcs", tampStok[4]);
    gotoxy(91, 18);
    printf("%s pcs", tampStok[5]);
    gotoxy(91, 20);
    printf("%s pcs", tampStok[6]);
    gotoxy(5, 29);
    printf("Tekan 0 untuk kembali");
    while (true)
    {
        int plh = 0;
        char pilih[100];
        gotoxy(52, 26);
        printf("MASUKKAN PILIHAN : ");
        gotoxy(71, 26);
        plh = atoi(vlh33(pilih));
        if (plh == 0)
        {
            system("cls");
            belanja();
        }
        else if (plh == 1)
        {
            system("cls");
            ballgown_dres(0);
        }
        else if (plh == 2)
        {
            system("cls");
            lira(1);
        }
        else if (plh == 3)
        {
            system("cls");
            latulip(2);
        }
        else if (plh == 4)
        {
            system("cls");
            off_shause(3);
        }
        else if (plh == 5)
        {
            system("cls");
            shopia(4);
        }
        else if (plh == 6)
        {
            system("cls");
            mermaid(5);
        }
        else if (plh == 7)
        {
            system("cls");
            denim(6);
        }
    }
}
void maju_panjang()
{
    for (int a = 0; a <= 161; a++)
    {
        Sleep(5); // persentase
        gotoxy(2 + a, 10);
        printf("%c", 219);
        Sleep(5); // jalan
    }
    tinggi();
}
void maju1_panjang()
{
    for (int a = 0; a <= 161; a++)
    {
        Sleep(5); // persentase
        gotoxy(2 + a, 22);
        printf("%c", 219);
        Sleep(5); // jalan
    }
}
void tinggi()
{
    for (int a = 10; a < 22; a++)
    {
        gotoxy(80, a);
        printf("%c%c", 219, 219);
        Sleep(2); // kiri
    }
}
void ballgown_dres(int a)
{
    background();
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    gotoxy(55, 3);
    printf("         BALLGOUN DRESS (Rp. 595.000)");
    gotoxy(50, 4);
    printf("  BALLGOUN DRESS koleksi by LIRA yang  dibuat dari Kain satin ");
    gotoxy(55, 5);
    printf("  yang mempunyai tampilan mengkilap dengan tekstur ");
    gotoxy(35, 6);
    printf("  lembut dan mudah jatuh,  terasa nyaman ketika digunakan dan memiliki bentuk melengkung bervoleme.");
    gotoxy(30, 7);
    printf("drees ini cocok untuk digunakan di acara pernikahan karena dapat membuat penampilanmu terkesan dan lebih elegan dan menawan");
    maju_panjang();
    warna_ukuran(a);
}
void lira(int a)
{
    background();
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    gotoxy(60, 3);
    printf("           lira dress(Rp. 575.000)");
    gotoxy(35, 4);
    printf("lira deress baju ini terbuat dari kain wolfis yang sangat nyaman ketika digunakan, karena memiliki");
    gotoxy(55, 5);
    printf("tekstur yang halus,ringan, mudah menyerap keringat dan juga mudah jatuh ");
    gotoxy(50, 6);
    printf("Drees ini cocok digunakan ketika di acara kumpul keluarga ataupun temen sebanya  ");
    maju_panjang();
    warna_ukuran(a);
}
void latulip(int a)
{
    background();
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    gotoxy(60, 3);
    printf("              LATULIP (Rp. 520.000)");
    gotoxy(45, 4);
    printf(" Latulip  Dress merupakan jenis gaun yang kami buat dari bahan kain pilihan yang ");
    gotoxy(45, 5);
    printf("membuatnya  berkualitas,nyaman di pakai dan tidak membuat mudah berkeringat.");
    gotoxy(45, 6);
    printf("koleksi yang satu ini sangat cocok  ketika digunakan ke acara-acara formal.. ");
    maju_panjang();
    warna_ukuran(a);
}
void off_shause(int a)
{
    background();
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    gotoxy(60, 3);
    printf("          OFF SHOUSE DREES (Rp. 520.000)");
    gotoxy(45, 4);
    printf(" OFF SHOUSE DREESD, tidak jauh beda dengan LATULIP DREES,");
    gotoxy(40, 5);
    printf("koleksi yang satu ini juga merupakan gaun yang kami buat dari kain berkualitas, hanya saja ");
    gotoxy(42, 6);
    printf("koleksi ini tekturnya lebih halus dan mudah jatuh dibanding koleksi LATULIP DRESS.");
    gotoxy(40, 7);
    printf("jenis dress ini pisa membuat penampilan muterlihat lebih girly anggun dan elegan dangan bawahan a-line dan mixi");
    gotoxy(40, 8);
    printf("Dress ini juga  bisa di padukan dengan berbagai macam alas kaki biar terlihat cantik");
    maju_panjang();
    warna_ukuran(a);
}
void shopia(int a)
{
    background();
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    gotoxy(60, 3);
    printf("          SHOPIA ANGGEL DREES (Rp. 500.000)");
    gotoxy(45, 4);
    printf("Shopia Anggel Dress kami buat dari kain Balotelli, tidak menerawang tidak panas ");
    gotoxy(45, 5);
    printf("Bahannya pun  lembut dengan tekstur yang khas.");
    gotoxy(40, 6);
    printf("Koleksi yang satu ini kami rangcang dngan sederhana namun tampak elegan dan anggun . ");
    gotoxy(30, 7);
    printf("Dress ini cocok digunakan untuk membuat pinngang lebar terlihat lebih ramping , dan cook digunakan diberbagai  acara apapun");
    maju_panjang();
    warna_ukuran(a);
}
void mermaid(int a)
{
    background();
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    gotoxy(60, 3);
    printf("          MERMAID DRESS(Rp. 460.000)");
    gotoxy(40, 4);
    printf("Mermaid Dress ini terbuat dari kaen siffon kaen bahan ini sangat nyaman saat digunakan .");
    gotoxy(43, 5);
    printf("mermaid dress juga memiliki bentuk yang terimpirasi dari putri dunyung ");
    gotoxy(30, 6);
    printf("karena dari bangian atas sampe lutut dan memiliki pentuk yang ketat ,namun dibagian bawah lutut memiliki bentuk melebar sampe keujung kaki  ");
    gotoxy(30, 7);
    printf("dengan model bagian atas yang berbentuk tanpa lengan atau dengan lengan,dress ini biasanya di gunakan di saat acara acara formal");
    maju_panjang();
    warna_ukuran(a);
}
void denim(int a)
{
    background();
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    gotoxy(60, 3);
    printf("           DENIM DREES (Rp. 380.000)");
    gotoxy(45, 4);
    printf("Denim Dress by lira ini terbuat dari bahan yang sangat nyaman pada saat digunakan.");
    gotoxy(40, 5);
    printf("koleksinya yang satu ini terbuat dari 100 %% serat kapas alami, memiliki tekstur yang halus,adem, ");
    gotoxy(40, 6);
    printf("dan mudah menyerap keringat.Kain jenis ini paling cocok dipakai pada daerah mempunyai iklim tropis");
    maju_panjang();
    warna_ukuran(a);
}
void warna_ukuran(int a)
{
    tinggi();
    gotoxy(30, 12);
    printf("MACAM WARNA BAJU YANG TERSEDIA      ");
    gotoxy(30, 13);
    printf("1. Maroon ");
    gotoxy(30, 14);
    printf("2. Navy");
    gotoxy(30, 15);
    printf("3. Ungu ");
    gotoxy(30, 16);
    printf("4. Peach ");
    gotoxy(30, 17);
    printf("5. Army ");
    gotoxy(30, 18);
    printf("6. Kuning ");
    gotoxy(30, 19);
    printf("7. Coklat ");
    gotoxy(30, 20);
    printf("8. Hijau ");
    gotoxy(95, 13);
    printf("UKURAN BAJU  YANG TERSEDIA            ");
    gotoxy(95, 14);
    printf("1. S        ");
    gotoxy(95, 15);
    printf("2. M        ");
    gotoxy(95, 16);
    printf("3. L        ");
    gotoxy(95, 17);
    printf("4. XL       ");
    maju1_panjang();
    while (true)
    {
        char mau;
        gotoxy(25, 23);
        printf("Apakah anda mau beli?(y/t)");
        gotoxy(52, 23);
        mau = getch();
        if (mau == 'y' || mau == 'Y')
        {
            beli(a);
        }
        else if (mau == 't' || mau == 'T')
        {
            // kotak_tampilan();
            produk();
        }
        else
        {
            gotoxy(105, 25);
            printf("INVALID ! ");
            Sleep(1000);
        }
    }
}
void beli(int a)
{
    char pilih;
    for (int qq = 0; qq < 7; qq++)
    {
        stock[qq] = atoi(tampStok[qq]);
    }
    while (true)
    {
        char war[100];
        gotoxy(35, 24);
        printf("Pilih No. Warna : ");
        gotoxy(53, 24);
        valpilih8(war);
        ///////////////////////

        if (war[0] == '1' || war[0] == '2' || war[0] == '3' || war[0] == '4' || war[0] == '5' || war[0] == '6' || war[0] == '7' || war[0] == '8')
        {
            if (war[0] == '1')
            {
                strcpy(warna_baju[tamp], warna[0]);
            }
            else if (war[0] == '2')
            {
                strcpy(warna_baju[tamp], warna[1]);
            }
            else if (war[0] == '3')
            {
                strcpy(warna_baju[tamp], warna[2]);
            }
            else if (war[0] == '4')
            {
                strcpy(warna_baju[tamp], warna[3]);
            }
            else if (war[0] == '5')
            {
                strcpy(warna_baju[tamp], warna[4]);
            }
            else if (war[0] == '6')
            {
                strcpy(warna_baju[tamp], warna[5]);
            }
            else if (war[0] == '7')
            {
                strcpy(warna_baju[tamp], warna[6]);
            }
            else
            {
                strcpy(warna_baju[tamp], warna[7]);
            }
            while (true)
            {
                char uk[100];
                gotoxy(35, 25);
                printf("No. Ukuran (s-m-l-xl) : ");
                gotoxy(59, 25);
                valpilih4(uk);
                if (uk[0] == '1' || uk[0] == '2' || uk[0] == '3' || uk[0] == '4')
                {
                    if (uk[0] == '1')
                    {
                        strcpy(ukuran_baju[tamp], ukur[0]);
                    }
                    else if (uk[0] == '2')
                    {
                        strcpy(ukuran_baju[tamp], ukur[1]);
                    }
                    else if (uk[0] == '3')
                    {
                        strcpy(ukuran_baju[tamp], ukur[2]);
                    }
                    else
                    {
                        strcpy(ukuran_baju[tamp], ukur[3]);
                    }
                    while (true)
                    {
                        gotoxy(35, 26);
                        printf("Berapa Banyak : ");
                        gotoxy(51, 26);
                        valjum(banyak);
                        valid_banyak();
                        banyak2 = atoi(banyak);
                        strcpy(bnyk[tamp], banyak);
                        // char war;
                        // pilih = getche();
                        int index = 0;

                        int jml = atoi(jmlbarang[index]);
                        if (a == 0)
                        {
                            if (banyak2 <= stock[0])
                            {
                                strcpy(beli_baju[tamp], barang[0]);
                                strcpy(harga_baju[tamp], harga2[0]);
                                tamp++;

                                harga = 5950000 * banyak2;
                                total_harga += harga;
                                stock[0] -= banyak2;
                                gotoxy(35, 28);
                                printf("Total : Rp. %d", harga);
                                jmlh[tamp1] += harga;
                                tamp1++;

                                itoa(stock[0], tampStok[0], 10);

                                FILE *file;
                                file = fopen("bstok.txt", "w");

                                fprintf(file, "%s\n", &tampStok[0]);
                                fprintf(file, "%s\n", &tampStok[1]);
                                fprintf(file, "%s\n", &tampStok[2]);
                                fprintf(file, "%s\n", &tampStok[3]);
                                fprintf(file, "%s\n", &tampStok[4]);
                                fprintf(file, "%s\n", &tampStok[5]);
                                fprintf(file, "%s\n", &tampStok[6]);

                                fclose(file);

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
                        else if (a == 1)
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
                                gotoxy(35, 28);
                                printf("Total : Rp. %d", harga);

                                itoa(stock[1], tampStok[1], 10);

                                FILE *file;
                                file = fopen("bstok.txt", "w");

                                fprintf(file, "%s\n", &tampStok[0]);
                                fprintf(file, "%s\n", &tampStok[1]);
                                fprintf(file, "%s\n", &tampStok[2]);
                                fprintf(file, "%s\n", &tampStok[3]);
                                fprintf(file, "%s\n", &tampStok[4]);
                                fprintf(file, "%s\n", &tampStok[5]);
                                fprintf(file, "%s\n", &tampStok[6]);

                                fclose(file);
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
                        else if (a == 2)
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
                                gotoxy(35, 28);
                                printf("Total : Rp. %d", harga);
                                itoa(stock[2], tampStok[2], 10);

                                FILE *file;
                                file = fopen("bstok.txt", "w");

                                fprintf(file, "%s\n", &tampStok[0]);
                                fprintf(file, "%s\n", &tampStok[1]);
                                fprintf(file, "%s\n", &tampStok[2]);
                                fprintf(file, "%s\n", &tampStok[3]);
                                fprintf(file, "%s\n", &tampStok[4]);
                                fprintf(file, "%s\n", &tampStok[5]);
                                fprintf(file, "%s\n", &tampStok[6]);

                                fclose(file);
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
                        else if (a == 3)
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
                                gotoxy(35, 28);
                                printf("Total : Rp. %d", harga);
                                itoa(stock[3], tampStok[3], 10);

                                FILE *file;
                                file = fopen("bstok.txt", "w");

                                fprintf(file, "%s\n", &tampStok[0]);
                                fprintf(file, "%s\n", &tampStok[1]);
                                fprintf(file, "%s\n", &tampStok[2]);
                                fprintf(file, "%s\n", &tampStok[3]);
                                fprintf(file, "%s\n", &tampStok[4]);
                                fprintf(file, "%s\n", &tampStok[5]);
                                fprintf(file, "%s\n", &tampStok[6]);

                                fclose(file);
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
                        else if (a == 4)
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
                                gotoxy(35, 28);
                                printf("Total : Rp. %d", harga);
                                itoa(stock[4], tampStok[4], 10);

                                FILE *file;
                                file = fopen("bstok.txt", "w");

                                fprintf(file, "%s\n", &tampStok[0]);
                                fprintf(file, "%s\n", &tampStok[1]);
                                fprintf(file, "%s\n", &tampStok[2]);
                                fprintf(file, "%s\n", &tampStok[3]);
                                fprintf(file, "%s\n", &tampStok[4]);
                                fprintf(file, "%s\n", &tampStok[5]);
                                fprintf(file, "%s\n", &tampStok[6]);

                                fclose(file);
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
                        else if (a == 5)
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
                                gotoxy(35, 28);
                                printf("Total : Rp. %d", harga);
                                itoa(stock[5], tampStok[5], 10);

                                FILE *file;
                                file = fopen("bstok.txt", "w");

                                fprintf(file, "%s\n", &tampStok[0]);
                                fprintf(file, "%s\n", &tampStok[1]);
                                fprintf(file, "%s\n", &tampStok[2]);
                                fprintf(file, "%s\n", &tampStok[3]);
                                fprintf(file, "%s\n", &tampStok[4]);
                                fprintf(file, "%s\n", &tampStok[5]);
                                fprintf(file, "%s\n", &tampStok[6]);

                                fclose(file);
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
                        else if (a == 6)
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
                                gotoxy(35, 28);
                                printf("Total : Rp. %d", harga);
                                itoa(stock[6], tampStok[6], 10);

                                FILE *file;
                                file = fopen("bstok.txt", "w");

                                fprintf(file, "%s\n", &tampStok[0]);
                                fprintf(file, "%s\n", &tampStok[1]);
                                fprintf(file, "%s\n", &tampStok[2]);
                                fprintf(file, "%s\n", &tampStok[3]);
                                fprintf(file, "%s\n", &tampStok[4]);
                                fprintf(file, "%s\n", &tampStok[5]);
                                fprintf(file, "%s\n", &tampStok[6]);

                                fclose(file);
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
                            gotoxy(99, 28);
                            printf("Warna Tidak Tersedia");
                            Sleep(1000);
                        }
                    }
                }
                else
                {
                    gotoxy(99, 32);
                    printf("Ukuran Tidak Tersedia ");
                    Sleep(1000);
                }
            }
        }
        else
        {
            gotoxy(99, 32);
            printf("Tidak Tersedia");
            Sleep(1000);
        }
    }
}
void melebihi()
{
    gotoxy(50, 32);
    printf("      Pembelian melebihi stok, silahkan kurangi pembelian!!     ");
    Sleep(2000);
    gotoxy(51, 26);
    printf("     ");
    gotoxy(50, 32);
    printf("                                                                 ");
}
void stok_habis()
{
    gotoxy(99, 29);
    printf("      Stok Habis     ");
}
void beli_lagi()
{
    char tampuang[100] = {};
    int tampuang2 = 0;
    while (true)
    {
        gotoxy(35, 29);
        printf("Apakah anda mau membeli lagi?(y/t)");
        gets(mau);
        if (strcmp(mau, "y") == 0 || strcmp(mau, "Y") == 0)
        {
            system("cls");
            produk();
        }
        else if (strcmp(mau, "t") == 0 || strcmp(mau, "T") == 0)
        {
            gotoxy(35, 29);
            printf("                                   ");
            gotoxy(35, 30);
            printf("Total Harga : Rp. %d", total_harga);
            // int norekening;
            gotoxy(35, 31);
            printf("MEMBANYARAN  harus MELALU OVO   ");
            // gotoxy(58, 31);
            // scanf("%d", &norekening);
            while (true)
            {
                gotoxy(35, 32);
                printf("Masukkan Uang : Rp. ");
                gotoxy(57, 32);
                // gets(uang);
                strcpy(tampuang, cekuang(uang));
                tampuang2 = atoi(tampuang);
                // printf("%d", tampuang2);
                valid_banyak();
                // uang2 = atoi(uang);
                if (tampuang2 > total_harga)
                {
                    // kembalian = tampuang2 - total_harga;
                    // gotoxy(35, 33);
                    // printf("Kembalian : Rp.%d", kembalian);
                    // Sleep(2000);

                    // system("cls");
                    // setruk_pembanyaran();
                    //  gotoxy(57, 32);
                    //  printf("                   ");

                    Sleep(2);
                    gotoxy(57, 32);
                    printf("                         ");
                    gotoxy(57, 34);
                    printf(" NOMINl UANG HARUS SAMA !!!!!");
                    Sleep(100);
                    gotoxy(57, 34);
                    printf("                                   ");
                    // system("cls");
                }
                else if (tampuang2 < total_harga)
                {
                    // kurang = total_harga - tampuang2;
                    // gotoxy(35, 33);
                    // printf("KURANG : Rp.%d", kurang);
                    // Sleep(1000);
                    // system("cls");
                    gotoxy(57, 32);
                    printf("                   ");
                    Sleep(2);
                    gotoxy(57, 32);
                    printf("                            ");
                    gotoxy(57, 34);
                    printf(" NOMINAL UANG TIDAK CUKUP  !!!!!");
                    Sleep(100);
                    gotoxy(57, 34);
                    printf("                                   ");
                    Sleep(1);
                    // system("cls");
                }
                // if (uang2 == total_harga)
                // {
                //     gotoxy(35, 33);
                //     printf("Uang Anda Pas");
                //     Sleep(1500);
                //     system("cls");
                //     setruk_pembanyaran();
                // }
                //  else if (uang2 < total_harga)
                //     {
                //         kurang = total_harga - uang2;
                //         gotoxy(35, 33);
                //         printf("KURANG : Rp.%d", kurang);
                //         Sleep(1000);
                //     }
                //     else
                // {
                //     gotoxy(35, 33);
                //     printf(" masukan uang harus pas ");
                // }
                else
                {
                    gotoxy(57, 33);
                    printf("Uang Anda Pas ");
                    Sleep(1500);
                    system("cls");
                    setruk_pembanyaran();
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
void valid_banyak()
{

    int a = strlen(banyak);
    if (a <= 0)
    {
        gotoxy(78, 27);
        printf("Maaf, inputan invalid!");
        Sleep(1000);
        gets(banyak);
        gotoxy(78, 27);
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
            gotoxy(78, 27);
            valid_banyak();
        }
    }
    if (salah > 0)
    {
        gotoxy(78, 27);
        printf("Maaf, inputan invalid!");
        Sleep(1000);
        gets(banyak);
        gotoxy(78, 27);
        valid_banyak();
    }
    if (banyak == 0)
    {
        gotoxy(78, 27);
        printf("Maaf, inputan invalid!");
        Sleep(1000);
        gets(banyak);
        gotoxy(78, 27);
        gotoxy(78, 27);
        printf("       ");
        valid_banyak();
    }
}
void setruk_pembanyaran()
{
    char nama1[50][50];
    char no1[50][50];
    char kelamin1[50][50];
    char umur1[50][50];
    char ttl1[50][50];
    FILE *file;
    file = fopen("registrasi_akun.txt", "r");
    int x = 0;
    int z = 0;
    while (!feof(file))
    {
        fscanf(file, "%s", &nama1[x]);
        fscanf(file, "%s", &no1[x]);
        fscanf(file, "%s", &kelamin1[x]);
        fscanf(file, "%s", &umur1[x]);
        fscanf(file, "%s", &ttl1[x]);
        x++;
    }
    fclose(file);
    // gotoxy(115, 22);
    // printf(" Selamat Datang %s ", nama1[indek]);
    background();
    gotoxy(20, 2);
    printf("                            ======================================                                       ");
    gotoxy(20, 3);
    printf("                              # STRUK PENJUALAN BUTIK liparkah #                                          ");
    gotoxy(20, 4);
    printf("                            ======================================                                       ");
    gotoxy(20, 5);
    printf("=========================================================================================================");
    gotoxy(20, 6);
    printf("=          NAMA PRODUK          =     WARNA     =  UKURAN  =  JUMLAH  =     HARGA     =     TOTAL       =");
    gotoxy(20, 7);
    printf("=========================================================================================================");
    gotoxy(20, 8);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 9);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 10);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 11);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 12);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 13);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 14);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 15);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 16);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 17);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 18);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 19);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 20);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 21);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 22);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 23);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 24);
    printf("=                               =               =          =          =               =                 =");
    gotoxy(20, 25);
    printf("=========================================================================================================");
    gotoxy(20, 26);
    printf("= NAMA      : %s                                       TOTAL HARGA = Rp.              =", nama1[indek]);
    gotoxy(20, 27);
    printf("= NO HP     : %s                                                  BAYAR = Rp.                     =", no1[indek]);
    gotoxy(20, 28);
    printf("= ASAL KOTA : %s                                                                                    =", ttl1[indek]);
    gotoxy(20, 30);
    printf("=========================================================================================================");
    for (int a = 0; a < tamp; a++)
    {
        gotoxy(22, 9 + a);
        printf("%s", beli_baju[a]);
        gotoxy(58, 9 + a);
        printf("%s", warna_baju[a]);
        gotoxy(73, 9 + a);
        printf("%s", ukuran_baju[a]);
        gotoxy(84, 9 + a);
        printf("%s", bnyk[a]);
        gotoxy(92, 9 + a);
        printf("%s", harga_baju[a]);
        gotoxy(108, 9 + a);
        printf("Rp. ");
        gotoxy(113, 9 + a);
        printf("%ld", jmlh[a]);
    }
    gotoxy(113, 26);
    printf("%d", total_harga);
    gotoxy(114, 27);
    printf("%s", uang);
    FILE *file7;
    file7 = fopen("riwayat.txt", "a");

    fprintf(file7, "%s\n", &nama1[indek]);
    fprintf(file7, "%s\n", &no1[indek]);
    fprintf(file7, "%s\n", &ttl1[indek]);
    fprintf(file7, "%s\n", &uang);

    fclose(file7);
    while (true)
    {
        gotoxy(10, 31);
        printf(" Tekan 0 untuk kembali : ");
        gotoxy(36, 31);
        kembali = getche();
        if (kembali == '0')
        {
            for (int a = 0; a < tamp; a++)
            {
                jmlh[a] = 0;
            }
            tamp = 0;
            total_harga = 0;
            tamp1 = 0;
            harga = 0;
            kembalian = 0;
            belanja();
        }
        else
        {
            gotoxy(35, 30);
            printf("INVALID !");
            Sleep(1000);
            gotoxy(35, 30);
            printf("         ");
            gotoxy(56, 30);
            printf(" ");
        }
    }
}
void informasi()
{
    system("cls");
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    background();
    setcolor(5, 15);
    gotoxy(30, 9);
    printf("                                 I N F O R M A S I ");
    gotoxy(30, 10);
    printf("                               |||||||||||||||||||||||");
    gotoxy(25, 11);
    printf("               Butik liparkah adalah Aplikasi yang dibuat untuk memudahkan pembeli    ");
    gotoxy(24, 12);
    printf("   dalam membeli fashion yang berkualitas.Tujuan dari aplikasi ini yaitu untuk memudahkan masyarakat         ");
    gotoxy(24, 13);
    printf("                   yang ingin membeli baju tampa harus keluar dari rumah.     ");
    gotoxy(24, 14);
    printf("aplikasi ini di dirikan pada tanggal 15 januari 2023  oleh lira rahmawati selaku pemilik dari Butik liparkah ini.   ");
    gotoxy(24, 15);
    printf("                 Permbuat Aplikasi ini berharap agar Aplikasi ini dapat bermanfaat. ");
    gotoxy(25, 16);
    printf("                          Dan juga menjadi awal yang baik untuk kedepannya.");
    gotoxy(60, 27);
    printf(" TEKAN TOMBOL ENTER 2x UNTUK KEMBALI.......");
    getche();
    int input;
    while ((input = getch()) != 13)
    {
        gotoxy(115, 27);
        printf("       ");
    }
    system("cls");
    background();
    login_registrasi();
}
/////////////////////////////// A D M I N ////////////////////////////////////////////
void bingkai1()
{
    for (int a = 0; a < 166; a++)
    {
        gotoxy(a, 41);
        printf("%c", 219);
        gotoxy(a, 0);
        printf("%c", 219);
    }
    for (int a = 0; a < 42; a++)
    {
        gotoxy(0, a);
        printf("%c%c", 219, 219);
        gotoxy(164, a);
        printf("%c%c", 219, 219);
    }
    for (int a = 1; a < 41; a++)
    {
        gotoxy(2, a);
        printf("%c%c", 177, 177);
        gotoxy(162, a);
        printf("%c%c", 177, 177);
    }
    for (int a = 2; a < 162; a++)
    {
        gotoxy(a, 40);
        printf("%c", 177);
        gotoxy(a, 1);
        printf("%c", 177);
    }
}
void maju_keil()
{
    for (int a = 0; a <= 50; a++)
    {
        Sleep(10); // persentase
        gotoxy(55 + a, 31);
        printf("%c", 219);
        Sleep(10); // jalan
    }
}
void tampilan_admin()
{
    background();
    for (int a = 0; a < 100; a++)
    {
        gotoxy(33 + a, 15);
        printf("%c", 219); // atas
        gotoxy(33 + a, 21);
        printf("%c", 219); // bawah
    }
    // garis horizontal pendek
    for (int a = 0; a < 4; a++)
    {
        gotoxy(29 + a, 16);
        printf("%c", 219); // kiri atas
        gotoxy(29 + a, 20);
        printf("%c", 219); // kiri bawah
        gotoxy(133 + a, 16);
        printf("%c", 219); // kanan atas
        gotoxy(133 + a, 20);
        printf("%c", 219); // kanan bawah
    }
    // garis vertikal panjang
    for (int a = 0; a < 4; a++)
    {
        gotoxy(29, 17 + a);
        printf("%c%c", 219, 219); // kiri
        gotoxy(135, 17 + a);
        printf("%c%c", 219, 219); // kanan
    }
    // garis vertikal pendek
    gotoxy(33, 16);
    printf("%c%c", 219, 219); // kiri atas
    gotoxy(131, 16);
    printf("%c%c", 219, 219); // kanan atas
    gotoxy(33, 20);
    printf("%c%c", 219, 219); // kiri bawah
    gotoxy(131, 20);
    printf("%c%c", 219, 219); // kanan bwah
    // garis bawah
    for (int a = 0; a < 20; a++)
    {
        gotoxy(70 + a, 17);
        printf("%c", 95);
    }
    for (int a = 0; a < 20; a++)
    {
        gotoxy(70 + a, 19);
        printf("%c", 95);
    }
    login_admin();
}
void login_admin()
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
            terimakasih();
            exit(0);
        }
        else
        {
            gotoxy(54, 17);
            printf(" masukan username   : ");
            InputNama(nama1);
            gotoxy(54, 19);
            printf(" password           : ");
            InputPass(pass1);
            gotoxy(75, 17);
            gotoxy(75, 19);
            if (strcmp(nama1, "Lira") == 0 && strcmp(pass1, "200803") == 0)
            {
                for (int a = 1; a <= 100; a++)
                {
                    if (a % 2 == 0)
                    {
                        gotoxy(75, 27);
                        printf("Loading...%d%%", a);
                        Sleep(5);
                        gotoxy(75, 22);
                    }
                }
                maju_keil();
                pilihan_admin();
            }
            else
            {
                gotoxy(65, 22);
                printf(" nama dan password salah !!!");
                gotoxy(65, 23);
                printf(" ulangi kembali  !!!");
                jml++;
                Sleep(1000);
                system("cls");
                tampilan_admin();
            }
        }
        // char nama[100], pass[100], nomor[100], alamat[100];
        FILE *buff = fopen("login.txt", "a");
        fprintf(buff, "%s\n", nama1);
        fprintf(buff, "%s\n", pass1);
        fclose(buff);
    } while (!(strcmp(nama1, "Lira") == 0 && strcmp(pass1, "200803") == 0));
}
void menu_admin1()
{
    gotoxy(30, 5);
    printf("                                                                    __                __                  ");
    gotoxy(30, 6);
    printf("                                                                  /  |              /  |                  ");
    gotoxy(30, 7);
    printf(" _____  ____    ______   _______   __    __         ______    ____$$ | _____  ____  $$/  _______          ");
    gotoxy(30, 8);
    printf("/     \\/    \\  /      \\ /       \\ /  |  /  |       /      \\  /    $$ |/     \\/    \\ /  |/\\        ");
    gotoxy(30, 9);
    printf("$$$$$$ $$$$  |/$$$$$$  |$$$$$$$  |$$ |  $$ |       $$$$$$  |/$$$$$$$ |$$$$$$ $$$$  |$$ |$$$$$$$  |        ");
    gotoxy(30, 10);
    printf("$$ | $$ | $$ |$$    $$ |$$ |  $$ |$$ |  $$ |       /    $$ |$$ |  $$ |$$ | $$ | $$ |$$ |$$ |  $$ |        ");
    gotoxy(30, 11);
    printf("$$ | $$ | $$ |$$$$$$$$/ $$ |  $$ |$$ \\__$$ |      /$$$$$$$ |$$ \\__$$ |$$ | $$ | $$ |$$ |$$ |  $$ |      ");
    gotoxy(30, 12);
    printf("$$ | $$ | $$ |$$       |$$ |  $$ |$$    $$/       $$    $$ |$$    $$ |$$ | $$ | $$ |$$ |$$ |  $$ |        ");
    gotoxy(30, 13);
    printf("$$/  $$/  $$/  $$$$$$$/ $$/   $$/  $$$$$$/         $$$$$$$/  $$$$$$$/ $$/  $$/  $$/ $$/ $$/   $$/         ");
}
void pilihan_admin()
{
    system("cls");
    background();
    menu_admin1();
    gotoxy(45, 16);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
    gotoxy(45, 17);
    printf("%c", 186);
    gotoxy(45, 18);
    printf("%c", 186);
    gotoxy(45, 19);
    printf("%c", 186);
    gotoxy(45, 20);
    printf("%c", 186);
    gotoxy(45, 21);
    printf("%c", 186);
    gotoxy(45, 22);
    printf("%c", 186);
    gotoxy(98, 17);
    printf("%c", 186);
    gotoxy(98, 18);
    printf("%c", 186);
    gotoxy(98, 19);
    printf("%c", 186);
    gotoxy(98, 20);
    printf("%c", 186);
    gotoxy(98, 21);
    printf("%c", 186);
    gotoxy(98, 22);
    printf("%c", 186);
    gotoxy(45, 23);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    gotoxy(58, 18);
    printf("1. T A M B A  H S T O K");
    gotoxy(58, 20);
    printf("2. R I W A Y A T ");
    gotoxy(58, 22);
    printf("3. K E M B A L I");
    int pilihan_admin;
    gotoxy(58, 26);
    printf("pilih : ");
    scanf("%d", &pilihan_admin);
    switch (pilihan_admin)
    {
    case 1:
        tambah_stok();
        break;
    case 2:
        system("cls");
        // riwayat();
        break;
    case 3:
        system("cls");
        kotak_pilihan();
        break;
    }
}
// void riwayat()
// {
//     system("cls");
//     char nama1[50][50];
//     char no1[50][50];
//     char kelamin1[50][50];
//     char umur1[50][50];
//     char ttl1[50][50];
//     int norekening;

//     FILE *file;
//     file = fopen("registrasi_akun.txt", "r");
//     int x = 0;
//     int z = 0;
//     while (!feof(file))
//     {
//         fscanf(file, "%s", &nama1[x]);
//         fscanf(file, "%s", &no1[x]);
//         fscanf(file, "%s", &kelamin1[x]);
//         fscanf(file, "%s", &umur1[x]);
//         fscanf(file, "%s", &ttl1[x]);
//         x++;
//     }
//     fclose(file);

//     time_t ambil_waktu;
//     time(&ambil_waktu);
//     printf("\nriwanyat pembelian:");
//     printf("\ntgl/hari %s", ctime(&ambil_waktu));
//     printf("\nNama  : ", nama1);
//     printf("\nno hp :  : ", no1);
//     printf("\nAlamat: ", ttl1);
// }

void tambah_stok()
{
    system("cls");
    gotoxy(30, 1);
    printf("                ==========================                   ");
    gotoxy(30, 2);
    printf("                    # TAMBAH STOK : #                         ");
    gotoxy(30, 3);
    printf("                 ==========================                   ");
    gotoxy(27, 4);
    printf("===============================================================");
    gotoxy(27, 5);
    printf("==    No    ==     NAMA PRODUK            ==        STOK     ==");
    gotoxy(27, 6);
    printf("===============================================================");
    gotoxy(27, 7);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 8);
    printf("==    1     ==    ballgown Drees          ==                 ==");
    gotoxy(27, 9);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 10);
    printf("==    2     ==    lira Dress              ==                 ==");
    gotoxy(27, 11);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 12);
    printf("==    3     ==    Latulip Dress           ==                 ==");
    gotoxy(27, 13);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 14);
    printf("==    4     ==    Off shouseder dress     ==                 ==");
    gotoxy(27, 15);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 16);
    printf("==    5     ==    Shopia Anggel Dress     ==                 ==");
    gotoxy(27, 17);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 18);
    printf("==    6     ==    mermaid Dress           ==                 ==");
    gotoxy(27, 19);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 20);
    printf("==    7     ==    Denim Dress             ==                 ==");
    gotoxy(27, 21);
    printf("==          ==                            ==                 ==");
    gotoxy(27, 22);
    printf("===============================================================");
    // char tampStok [10][10];
    FILE *file;
    file = fopen("bstok.txt", "r");
    int x = 0;
    while (!feof(file))
    {
        fscanf(file, "%s", &tampStok[x]);
        x++;
    }
    fclose(file);

    gotoxy(77, 8);
    printf("%s pcs", tampStok[0]);
    gotoxy(77, 10);
    printf("%s pcs", tampStok[1]);
    gotoxy(77, 12);
    printf("%s pcs", tampStok[2]);
    gotoxy(77, 14);
    printf("%s pcs", tampStok[3]);
    gotoxy(77, 16);
    printf("%s pcs", tampStok[4]);
    gotoxy(77, 18);
    printf("%s pcs", tampStok[5]);
    gotoxy(77, 20);
    printf("%s pcs", tampStok[6]);
    membeli_stok();
}
void tambah_lagi()
{
    while (true)
    {
        gotoxy(29, 27);
        printf("tambah Lagi (y/t)?");
        gotoxy(47, 27);
        gets(mau);
        if (strcmp(mau, "y") == 0 || strcmp(mau, "Y") == 0)
        {
            gotoxy(29, 27);
            printf("                             ");
            gotoxy(29, 26);
            printf("                             ");
            gotoxy(49, 25);
            printf("                             ");
            break;
        }
        else if (strcmp(mau, "t") == 0 || strcmp(mau, "T") == 0)
        {
            system("cls");
            pilihan_admin();
        }
        else if (strcmp(mau, "0") == 0)
        {
            tampilan_admin();
            menu_admin1();
        }
        else
        {
            gotoxy(45, 30);
            printf("INVALID ! ");
            Sleep(1000);
            gotoxy(45, 30);
            printf("          ");
            gotoxy(50, 27);
            printf("        ");
        }
    }
}
void membeli_stok()
{
    char membeli;
    // char tampStok[10][10];
    gotoxy(10, 30);
    printf(" Tekan 0 untuk kembali ");
    while (true)
    {
        gotoxy(27, 25);
        printf("Masukan Pilihan : ");
        gotoxy(46, 25);
        printf("    ");
        gotoxy(47, 25);
        membeli = getche();
        if (membeli == '0')
        {
            system("cls");
            menu_admin1();
            pilihan_admin();
        }
        else if (membeli == '1')
        {
            char jumlah_tambah_stok[10];
            int tbh_stok;
            gotoxy(29, 26);
            printf("Jumlah Stok     : ");
            gotoxy(47, 26);
            gets(jumlah_tambah_stok);
            tbh_stok = atoi(jumlah_tambah_stok);
            if (tbh_stok > 0 && tbh_stok <= 100)
            {
                stock[0] = atoi(tampStok[0]);
                stock[0] += tbh_stok;
                itoa(stock[0], tampStok[0], 10);
                FILE *file;
                file = fopen("bstok.txt", "w");

                fprintf(file, "%s\n", &tampStok[0]);
                fprintf(file, "%s\n", &tampStok[1]);
                fprintf(file, "%s\n", &tampStok[2]);
                fprintf(file, "%s\n", &tampStok[3]);
                fprintf(file, "%s\n", &tampStok[4]);
                fprintf(file, "%s\n", &tampStok[5]);
                fprintf(file, "%s\n", &tampStok[6]);

                fclose(file);
                // stock[0] += tbh_stok;
                gotoxy(77, 8);
                printf("%d pcs", stock[0]);
                tambah_lagi();
            }
            else if (tbh_stok > 50)
            {
                gotoxy(45, 30);
                printf("Maksimal 100 ! Minimal 1 ! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
            else if (tbh_stok == 0)
            {
                printf("    ");
            }
            else
            {
                gotoxy(45, 30);
                printf("INVALID!!!!!! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
        }
        else if (membeli == '2')
        {
            char jumlah_tambah_stok[10];
            int tbh_stok;
            gotoxy(29, 26);
            printf("Jumlah Stok     : ");
            gotoxy(47, 26);
            gets(jumlah_tambah_stok);
            tbh_stok = atoi(jumlah_tambah_stok);
            if (tbh_stok > 0 && tbh_stok <= 100)
            {
                stock[1] = atoi(tampStok[1]);
                stock[1] += tbh_stok;
                itoa(stock[1], tampStok[1], 10);
                FILE *file;
                file = fopen("bstok.txt", "w");

                fprintf(file, "%s\n", &tampStok[0]);
                fprintf(file, "%s\n", &tampStok[1]);
                fprintf(file, "%s\n", &tampStok[2]);
                fprintf(file, "%s\n", &tampStok[3]);
                fprintf(file, "%s\n", &tampStok[4]);
                fprintf(file, "%s\n", &tampStok[5]);
                fprintf(file, "%s\n", &tampStok[6]);

                fclose(file);
                // stock[1] += tbh_stok;
                gotoxy(77, 10);
                printf("%d pcs", stock[1]);
                tambah_lagi();
            }
            else if (tbh_stok > 50)
            {
                gotoxy(45, 30);
                printf("Maksimal 100 ! Minimal 1 ! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
            else if (tbh_stok == 0)
            {
                printf("   ");
            }
            else
            {
                gotoxy(45, 30);
                printf("INVALID!!!!!! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
        }
        else if (membeli == '3')
        {
            char jumlah_tambah_stok[10];
            int tbh_stok;
            gotoxy(29, 26);
            printf("Jumlah Stok     : ");
            gotoxy(47, 26);
            gets(jumlah_tambah_stok);
            tbh_stok = atoi(jumlah_tambah_stok);
            if (tbh_stok > 0 && tbh_stok <= 100)
            {
                stock[2] = atoi(tampStok[2]);
                stock[2] += tbh_stok;
                itoa(stock[2], tampStok[2], 10);
                FILE *file;
                file = fopen("bstok.txt", "w");

                fprintf(file, "%s\n", &tampStok[0]);
                fprintf(file, "%s\n", &tampStok[1]);
                fprintf(file, "%s\n", &tampStok[2]);
                fprintf(file, "%s\n", &tampStok[3]);
                fprintf(file, "%s\n", &tampStok[4]);
                fprintf(file, "%s\n", &tampStok[5]);
                fprintf(file, "%s\n", &tampStok[6]);

                fclose(file);
                // stock[2] += tbh_stok;
                gotoxy(77, 12);
                printf("%d pcs", stock[2]);
                tambah_lagi();
            }
            else if (tbh_stok > 50)
            {
                gotoxy(45, 30);
                printf("Maksimal 100 ! Minimal 1 ! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
            else if (tbh_stok == 0)
            {
                printf("   ");
            }
            else
            {
                gotoxy(45, 30);
                printf("INVALID!!!!!! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
        }
        else if (membeli == '4')
        {
            char jumlah_tambah_stok[10];
            int tbh_stok;
            gotoxy(29, 26);
            printf("Jumlah Stok     : ");
            gotoxy(47, 26);
            gets(jumlah_tambah_stok);
            tbh_stok = atoi(jumlah_tambah_stok);
            if (tbh_stok > 0 && tbh_stok <= 100)
            {
                stock[3] = atoi(tampStok[3]);
                stock[3] += tbh_stok;
                itoa(stock[3], tampStok[3], 10);
                FILE *file;
                file = fopen("bstok.txt", "w");

                fprintf(file, "%s\n", &tampStok[0]);
                fprintf(file, "%s\n", &tampStok[1]);
                fprintf(file, "%s\n", &tampStok[2]);
                fprintf(file, "%s\n", &tampStok[3]);
                fprintf(file, "%s\n", &tampStok[4]);
                fprintf(file, "%s\n", &tampStok[5]);
                fprintf(file, "%s\n", &tampStok[6]);

                fclose(file);
                // stock[3] += tbh_stok;
                gotoxy(77, 14);
                printf("%d pcs", stock[3]);
                tambah_lagi();
            }
            else if (tbh_stok > 50)
            {
                gotoxy(45, 30);
                printf("Maksimal 100 ! Minimal 1 ! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
            else if (tbh_stok == 0)
            {
                printf("   ");
            }
            else
            {
                gotoxy(45, 30);
                printf("INVALID!!!!!! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
        }
        else if (membeli == '5')
        {
            char jumlah_tambah_stok[10];
            int tbh_stok;
            gotoxy(29, 26);
            printf("Jumlah Stok     : ");
            gotoxy(47, 26);
            gets(jumlah_tambah_stok);
            tbh_stok = atoi(jumlah_tambah_stok);
            if (tbh_stok > 0 && tbh_stok <= 100)
            {
                stock[4] = atoi(tampStok[4]);
                stock[4] += tbh_stok;
                itoa(stock[4], tampStok[4], 10);
                FILE *file;
                file = fopen("bstok.txt", "w");

                fprintf(file, "%s\n", &tampStok[0]);
                fprintf(file, "%s\n", &tampStok[1]);
                fprintf(file, "%s\n", &tampStok[2]);
                fprintf(file, "%s\n", &tampStok[3]);
                fprintf(file, "%s\n", &tampStok[4]);
                fprintf(file, "%s\n", &tampStok[5]);
                fprintf(file, "%s\n", &tampStok[6]);

                fclose(file);
                // stock[4] += tbh_stok;
                gotoxy(77, 16);
                printf("%d pcs", stock[4]);
                tambah_lagi();
            }
            else if (tbh_stok > 50)
            {
                gotoxy(45, 30);
                printf("Maksimal 100 ! Minimal 1 ! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
            else if (tbh_stok == 0)
            {
                // menu();
                printf("   ");
            }
            else
            {
                gotoxy(45, 30);
                printf("INVALID!!!!!! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
        }
        else if (membeli == '6')
        {
            char jumlah_tambah_stok[10];
            int tbh_stok;
            gotoxy(29, 26);
            printf("Jumlah Stok     : ");
            gotoxy(47, 26);
            gets(jumlah_tambah_stok);
            tbh_stok = atoi(jumlah_tambah_stok);
            if (tbh_stok > 0 && tbh_stok <= 100)
            {
                stock[5] = atoi(tampStok[5]);
                stock[5] += tbh_stok;
                itoa(stock[5], tampStok[5], 10);
                FILE *file;
                file = fopen("bstok.txt", "w");

                fprintf(file, "%s\n", &tampStok[0]);
                fprintf(file, "%s\n", &tampStok[1]);
                fprintf(file, "%s\n", &tampStok[2]);
                fprintf(file, "%s\n", &tampStok[3]);
                fprintf(file, "%s\n", &tampStok[4]);
                fprintf(file, "%s\n", &tampStok[5]);
                fprintf(file, "%s\n", &tampStok[6]);

                fclose(file);
                // stock[5] += tbh_stok;
                gotoxy(77, 18);
                printf("%d pcs", stock[5]);
                tambah_lagi();
            }
            else if (tbh_stok > 50)
            {
                gotoxy(45, 30);
                printf("Maksimal 100 ! Minimal 1 ! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
            else if (tbh_stok == 0)
            {
                //  menu();
                printf("   ");
            }
            else
            {
                gotoxy(45, 30);
                printf("INVALID!!!!!! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
        }
        else if (membeli == '7')
        {
            char jumlah_tambah_stok[10];
            int tbh_stok;
            gotoxy(29, 26);
            printf("Jumlah Stok     : ");
            gotoxy(47, 26);
            gets(jumlah_tambah_stok);
            tbh_stok = atoi(jumlah_tambah_stok);
            if (tbh_stok > 0 && tbh_stok <= 100)
            {
                stock[6] = atoi(tampStok[6]);
                stock[6] += tbh_stok;
                itoa(stock[6], tampStok[6], 10);
                FILE *file;
                file = fopen("bstok.txt", "w");

                fprintf(file, "%s\n", &tampStok[0]);
                fprintf(file, "%s\n", &tampStok[1]);
                fprintf(file, "%s\n", &tampStok[2]);
                fprintf(file, "%s\n", &tampStok[3]);
                fprintf(file, "%s\n", &tampStok[4]);
                fprintf(file, "%s\n", &tampStok[5]);
                fprintf(file, "%s\n", &tampStok[6]);

                fclose(file);
                // stock[6] += tbh_stok;
                gotoxy(77, 20);
                printf("%d pcs", stock[6]);
                tambah_lagi();
            }
            else if (tbh_stok > 50)
            {
                gotoxy(45, 30);
                printf("Maksimal 100 ! Minimal 1 ! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
            else if (tbh_stok == 0)
            {
                // menu();
                printf("   ");
            }
            else
            {
                gotoxy(45, 30);
                printf("INVALID!!!!!! ");
                Sleep(1000);
                gotoxy(45, 30);
                printf("                           ");
                gotoxy(47, 26);
                printf("           ");
            }
        }
        else if (tbh_stok == 0)
        {
            //  menu();
            printf("   ");
        }
        else
        {
            gotoxy(45, 30);
            printf("INVALID!!!!!! ");
            Sleep(1000);
            gotoxy(45, 30);
            printf("                           ");
            gotoxy(47, 26);
            printf("           ");
        }
    }
}
// void riwanyat()
// {
//     system("cls");
//     gotoxy(15,5);
//     printf("R I W A Y A T  P E M B E L I N");
//     gotoxy(15,6);
//     printf("Nama pembeli",);

// }
//////////////////////////////////
void main()
{
    // bingkaii(0, 0, 165, 42, 13, 15);
    // bingkaii(1, 1, 164, 41, 5, 15);
    FILE *file;
    file = fopen("bstok.txt", "r");
    int x = 0;
    while (!feof(file))
    {
        fscanf(file, "%s", &tampStok[x]);
        x++;
    }
    fclose(file);

    welcome();
    getch();
}