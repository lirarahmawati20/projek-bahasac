#include<stdio.h>
#include<conio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>
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
/////////////////////////////////////
void welcome();
void kotak_pilihan();
void bingkai_pilih();
void pilihan();
void louding_bingkai();
void kotak();
void login_user();
void menulogin();
void login();
///////////////////////////////
char user[100];
char pass[100];
////////////////////
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
    // welcome();
}
void welcome()
{
    background();
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
    bingkai_pilih();
    pilihan();
  
    // kotak_pilihan();
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
    // system("cls");
    int pilih2;
    int pilih;
    gotoxy(70, 33);
    printf("Masukan pilihan nomer : ");
    scanf("%d", &pilih);
    if (pilih == 1)
    {
         system("cls");
         login();
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
 login_registrasi(){
    char pilih;
    background();
    menulogin();
    kotak();
    gotoxy(63, 19);
    printf(" 1. Login");
    gotoxy(63, 20);
    printf(" 2. Registrasi ");
    gotoxy(70, 22);
    printf("Pilih :");
    pilih = getch();
     if (pilih == '1'){
     louding_bingkai();
     login();
     }
     else if(pilih=='2')
     {
     //Regisrasi(){
     printf("registrasi");
     }
     else{
         printf("eror");
//         login();
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
void login()
{
    int jml = 0;
    do
    {
        background();
        louding_bingkai();
        kotak();

        if (jml == 3)
        {
            
            gotoxy(125, 15);
            printf("login invalid");
            Sleep(2000);
            system("cls");
            kotak_pilihan();
            
        }
        else
        {
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
            }
            else
            {
                gotoxy(63, 22);
                printf(" nama dan password salah !!!");
                gotoxy(63, 23);
                printf(" ulangi kembali  !!!");
                jml++;
                Sleep(1000);
                system("cls");
            }
        }
    } while (!(strcmp(user, "Lira") == 0 && strcmp(pass, "200803") == 0));
}


void main(){
 //background();
 welcome();
 //louding_bingkai();

//printf("hello");
    getch();
}