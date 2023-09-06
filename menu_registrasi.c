#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#define handle GetStdHandle(STD_OUTPUT_HANDLE)
void nama_inp();
void val_nam_inp();
void val_no();
void kelaminkm();
void in_usia();
void val_usia();
void val_kota_inp();
void val_kota();
void userreg_login();
void userreg_log_pass();
void login_registrasi();
void u_login();
void belanja();
void maju();
void kotak();

char inputan[50];
char inputan2[50];
char nama[50][50];
char no[50][50];
char kelamin[50][50];
char umur[50][50];
char ttl[50][50];
char userreg[50][50];
char password[50][50];
char namaakun[100];
char nam_inp[100];
char no_inp[100];
char usia_inp[100];
char kota_inp[100];
char userreg_inp[100];
char pass_inp[100];
int indek;
int dompet = 0;
void set_color(int text, int backgroud)
{
    SetConsoleTextAttribute(handle, backgroud * 16 + text);
}
///////////////////////////////////////
char *valpilih(char *pilih)
{
    char inp;
    char tamp[100] = {};
    int index = 0;
    while ((inp = getch()) != 13 || index == 0)
    {
        if (index < 1 && (inp >= '1' && inp <= '3'))
        {
            printf("%c", inp);
            tamp[index] = inp;
            index++;
        }
        else if (inp == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return strcpy(pilih, tamp);
}
////////////////////////////////////////////////
char *valpilih8(char *tamp)
{
    char inp;
    int index = 0;
    while ((inp = getch()) != 13 || index == 0)
    {
        if (index < 1 && (inp >= '1' && inp <= '8'))
        {
            printf("%c", inp);
            tamp[index] = inp;
            index++;
        }
        else if (inp == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return tamp;
}
////////////////////////////////////////////////
char *valjum(char *tamp)
{
    char inp;
    int inde = 0;
    while ((inp = getch()) != 13 || inde < 1)
    {
        if (((inde == 0 && inp >= '1' && inp <= '9') || (inde > 0 && inp >= '0' && inp <= '9')) && inde < 3)
        {
            printf("%c", inp);
            tamp[inde] = inp;
            inde++;
        }
        else if (inp == 8 && inde != 0)
        {
            printf("\b \b");
            inde--;
            tamp[inde] = '\0';
        }
    }
    tamp[inde] = '\0';
    return tamp;
}
////////////////////////////////////////////////
char *valpilih4(char *tamp)
{
    char inp;
    int index = 0;
    while ((inp = getch()) != 13 || index == 0)
    {
        if (index < 1 && (inp >= '1' && inp <= '4'))
        {
            printf("%c", inp);
            tamp[index] = inp;
            index++;
        }
        else if (inp == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return tamp;
}
////////////////////////////////////////////////

char *vlh(char *pilih)
{
    char inp;
    char tamp[100] = {};
    int index = 0;
    while ((inp = getch()) != 13 || index == 0)
    {
        if (index < 1 && (inp >= '1' && inp <= '4'))
        {
            printf("%c", inp);
            tamp[index] = inp;
            index++;
        }
        else if (inp == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return strcpy(pilih, tamp);
}
//////////////////////////////////////

char *vlh22(char *pilih)
{
    char inp;
    char tamp[100] = {};
    int index = 0;
    while ((inp = getch()) != 13 || index == 0)
    {
        if (index < 1 && (inp >= '1' && inp <= '2'))
        {
            printf("%c", inp);
            tamp[index] = inp;
            index++;
        }
        else if (inp == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return strcpy(pilih, tamp);
}
/////////////////////////////////////////////
char *vlh33(char *pilih)
{
    char inp;
    char tamp[100] = {};
    int index = 0;
    while ((inp = getch()) != 13 || index == 0)
    {
        if (index < 1 && (inp >= '0' && inp <= '7'))
        {
            printf("%c", inp);
            tamp[index] = inp;
            index++;
        }
        else if (inp == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return strcpy(pilih, tamp);
}
////////////////////////////////////////////
void val_nam_inp()
{
    char inp_nama;

    int x = 0;

    while (inp_nama != 13)
    {
        gotoxy(73 + x, 13);
        inp_nama = getch();

        if (x > 0 && inp_nama == 8)
        {
            printf("\b ");
            x--;
        }
        if (x < 22 && (inp_nama >= 'a' && inp_nama <= 'z' || inp_nama >= 'A' && inp_nama <= 'Z' || inp_nama == 32))
        {
            nam_inp[x] = inp_nama;
            printf("%c", nam_inp[x]);
            x++;
        }
        if (x == 0 && inp_nama == 13)
        {
            gotoxy(73, 13);
            printf("Input Salah");
            Sleep(250);
            gotoxy(73, 13);
            printf("                          ");
            Sleep(250);
            val_nam_inp();
        }
    }
    nam_inp[x] = 0;
    nama_inp();
}
void nama_inp()
{
    int salah;
    for (int a = 0; a < strlen(nam_inp); a++)
    {

        if (strlen(nam_inp) < 3)
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Nama Minimal 3 Digit");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                    ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nam_inp[0] == 32 || nam_inp[strlen(nam_inp) - 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Input Awal dan Akhir tidak boleh Spasi");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                                      ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nam_inp[0] >= 'a' && nam_inp[0] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Input Awal Harus Kapital");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                        ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nam_inp[strlen(nam_inp) - 1] >= 'A' && nam_inp[strlen(nam_inp) - 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Input Akhir tidak Boleh Kapital");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                               ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nam_inp[a] == ' ' && nam_inp[a + 1] >= 'a' && nam_inp[a + 1] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Setelah Spasi Harus Kapital");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                           ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nam_inp[a] >= 'A' && nam_inp[a] <= 'Z' && nam_inp[a + 1] >= 'A' && nam_inp[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Kapital Tidak Boleh Ganda");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                         ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nam_inp[a] >= 'a' && nam_inp[a] <= 'z' && nam_inp[a + 1] >= 'A' && nam_inp[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Error");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                               ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (nam_inp[a] == ' ' && nam_inp[a + 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 13);
                    printf("Spasi Tidak Boleh Ganda");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 13);
                    printf("                       ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
    }

    if (salah > 0)
    {
        salah = 0;
        val_nam_inp();
    }
    else
    {
        FILE *file;
        file = fopen("registrasi_akun.txt", "a");
        fprintf(file, "%s\n", nam_inp);
        fclose(file);
        val_no();
    }
}
void val_no()
{
    char handphone[100];
    char inputan1;
    char data1[30] = {};
    char data2[30] = {};
    int index = 0;
    gotoxy(73 + index, 15);
    while ((inputan1 = getch()) != 13 || index < 11)
    {
        if (inputan1 >= '0' && inputan1 <= '9' && index < 13)
        {
            if ((index == 0 && inputan1 == '0') || (index == 1 && inputan1 == '8') || (index == 2 && inputan1 == '1') || (index == 2 && inputan1 == '2') || (index == 2 && inputan1 == '8') || (index == 2 && inputan1 == '9') || (index == 2 && inputan1 == '3') || (index == 2 && inputan1 == '5') || (index == 2 && inputan1 == '7') || (index == 3 && inputan1 == '1') || (index == 3 && inputan1 == '2') || (index == 3 && inputan1 == '3') || (index == 3 && inputan1 == '4') || (index == 3 && inputan1 == '4') || (index == 3 && inputan1 == '5') || (index == 3 && inputan1 == '7') || (index == 3 && inputan1 == '8') || (index == 3 && inputan1 == '9'))
            {
                printf("%c", inputan1);
                data1[index] = inputan1;
                index++;
            }
            else if (index >= 4)
            {
                printf("%c", inputan1);
                data1[index] = inputan1;
                index++;
            }
        }
        else if (inputan1 == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
    }
    for (int a = 0; a < index; a++)
    {
        data2[a] = data1[a];
    }
    strcpy(handphone, data2);

    FILE *file;
    file = fopen("registrasi_akun.txt", "a");
    fprintf(file, "%s\n", handphone);
    fclose(file);
    kelaminkm();
}
void kelaminkm()
{
    char kel;
    int aa = 0;
    do
    {
        gotoxy(73, 17);
        kel = getche();

        if (kel == 'l')
        {

            FILE *file;
            file = fopen("registrasi_akun.txt", "a");
            fprintf(file, "%c\n", kel);
            fclose(file);

            in_usia();
        }
        else if (kel == 'p')
        {

            FILE *file;
            file = fopen("registrasi_akun.txt", "a");
            fprintf(file, "%c\n", kel);
            fclose(file);

            in_usia();
        }
        else
        {
            gotoxy(73, 17);
            printf("Input Tidak Valid");
            Sleep(250);
            gotoxy(73, 17);
            printf("                     ");
            aa = 1;
        }
    } while (aa == 1);
}
void in_usia()
{
    char inp_usia;
    int xz = 0;
    gotoxy(73, 16);
    while (inp_usia != 13)
    {
        gotoxy(73 + xz, 19);
        inp_usia = getch();
        if (xz > 0 && inp_usia == 8)
        {
            printf("\b ");
            xz--;
        }
        if (xz < 2 && (inp_usia >= '0' && inp_usia <= '9'))
        {
            usia_inp[xz] = inp_usia;
            printf("%c", usia_inp[xz]);
            xz++;
        }
        if (xz == 0 && inp_usia == 13)
        {
            gotoxy(73, 19);
            printf("Tidak Valid");
            Sleep(500);
            gotoxy(73, 19);
            printf("                ");
            in_usia();
        }
    }
    usia_inp[xz] = 0;

    val_usia();
}
void val_usia()
{
    int age;
    int cekusia;
    char usia2[100];

    for (int a = 0; a < strlen(usia_inp); a++)
    {

        if (usia_inp[0] == '0' || usia_inp[0] == '9' || usia_inp[0] == '8' || usia_inp[0] == '7')
        {
            for (int a = 1; a <= 6; a++)
            {

                if (a % 2 == 1)
                {
                    gotoxy(73, 19);
                    printf("INPUT TIDAK VALID!!!");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 19);
                    printf("                       ");
                    Sleep(250);
                }
            }
            gotoxy(73, 19);
            printf("  ");
            in_usia();
        }

        age = atoi(usia_inp);
        if (age >= 1 && age <= 16)
        {

            for (int b = 1; b <= 6; b++)
            {
                if (b % 2 == 1)
                {
                    gotoxy(73, 19);
                    printf("MINIMAL 17 TAHUN");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 19);
                    printf("                ");
                    Sleep(250);
                }
            }
            gotoxy(73, 19);
            printf("  ");
            in_usia();
        }

        else
        {
            cekusia++;
            itoa(age, usia2, 10);
        }
    }
    if (cekusia > 0)
    {
        cekusia = 0;
        FILE *file;
        file = fopen("registrasi_akun.txt", "a");
        fprintf(file, "%s\n", usia2);
        fclose(file);
        val_kota_inp();
    }
}
void val_kota_inp()
{
    char inp_kota;

    int x = 0;

    while (inp_kota != 13)
    {
        gotoxy(73 + x, 21);
        inp_kota = getch();

        if (x > 0 && inp_kota == 8)
        {
            printf("\b ");
            x--;
        }
        if (x < 22 && (inp_kota >= 'a' && inp_kota <= 'z' || inp_kota >= 'A' && inp_kota <= 'Z' || inp_kota == 32))
        {
            kota_inp[x] = inp_kota;
            printf("%c", kota_inp[x]);
            x++;
        }
        if (x == 0 && inp_kota == 13)
        {
            gotoxy(73, 21);
            printf("Input Salah");
            Sleep(250);
            gotoxy(73, 21);
            printf("                          ");
            Sleep(250);
            val_kota_inp();
        }
    }
    kota_inp[x] = 0;
    val_kota();
}
void val_kota()
{

    int salah;
    for (int a = 0; a < strlen(kota_inp); a++)
    {

        if (strlen(kota_inp) < 3)
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Nama Minimal 3 Digit");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                    ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (kota_inp[0] == 32 || kota_inp[strlen(kota_inp) - 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Input Awal dan Akhir tidak boleh Spasi");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                                      ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }

        if (kota_inp[0] >= 'a' && kota_inp[0] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Input Awal Harus Kapital");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                        ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (kota_inp[strlen(kota_inp) - 1] >= 'A' && kota_inp[strlen(kota_inp) - 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Input Akhir tidak Boleh Kapital");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                               ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (kota_inp[a] == ' ' && kota_inp[a + 1] >= 'a' && kota_inp[a + 1] <= 'z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Setelah Spasi Harus Kapital");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                           ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (kota_inp[a] >= 'A' && kota_inp[a] <= 'Z' && kota_inp[a + 1] >= 'A' && kota_inp[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Kapital Tidak Boleh Ganda");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                         ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (kota_inp[a] >= 'a' && kota_inp[a] <= 'z' && kota_inp[a + 1] >= 'A' && kota_inp[a + 1] <= 'Z')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Error");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                               ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
        if (kota_inp[a] == ' ' && kota_inp[a + 1] == ' ')
        {
            for (int a = 1; a <= 6; a++)
            {
                if (a % 2 == 1)
                {
                    gotoxy(73, 21);
                    printf("Spasi Tidak Boleh Ganda");
                    Sleep(250);
                }
                else
                {
                    gotoxy(73, 21);
                    printf("                       ");
                    Sleep(250);
                }
            }
            salah++;
            break;
        }
    }

    if (salah > 0)
    {
        salah = 0;
        val_kota_inp();
    }
    else
    {
        FILE *file;
        file = fopen("registrasi_akun.txt", "a");
        fprintf(file, "%s\n", kota_inp);
        fclose(file);
        userreg_login();
    }
}
void userreg_login()
{
    char u_awal;
    int ad = 0;

    while (u_awal != 13)
    {
        gotoxy(73 + ad, 23);
        u_awal = getch();

        if (ad > 0 && u_awal == 8)
        {
            printf("\b \b");
            ad--;
        }
        if (ad < 16 && (u_awal >= '0' && u_awal <= '9' || u_awal >= 'a' && u_awal <= 'z' || u_awal >= 'A' && u_awal <= 'Z'))
        {
            userreg_inp[ad] = u_awal;
            printf("%c", userreg_inp[ad]);
            ad++;
        }
        if (ad == 0 && u_awal == 13)
        {
            gotoxy(73, 23);
            printf("INPUT TIDAK BOLEH KOSONG!");
            Sleep(500);
            gotoxy(73, 23);
            printf("                             ");
            userreg_login();
        }
    }
    userreg_inp[ad] = 0;
    FILE *file2;
    file2 = fopen("akun.txt", "a");
    fprintf(file2, "%s\n", userreg_inp);
    fclose(file2);
    userreg_log_pass();
}
void userreg_log_pass()
{
    char u_awal;
    int ad = 0;

    while (u_awal != 13)
    {
        gotoxy(73 + ad, 25);
        u_awal = getch();

        if (ad > 0 && u_awal == 8)
        {
            printf("\b \b");
            ad--;
        }
        if (ad < 16 && (u_awal >= '0' && u_awal <= '9' || u_awal >= 'a' && u_awal <= 'z' || u_awal >= 'A' && u_awal <= 'Z'))
        {
            pass_inp[ad] = u_awal;
            printf("%c", pass_inp[ad]);
            ad++;
        }
        if (ad == 0 && u_awal == 13)
        {
            gotoxy(73, 25);
            printf("INPUT TIDAK BOLEH KOSONG!");
            Sleep(500);
            gotoxy(73, 25);
            printf("                             ");
            userreg_log_pass();
        }
    }
    pass_inp[ad] = 0;
    FILE *file2;
    file2 = fopen("akun.txt", "a");
    fprintf(file2, "%s\n", pass_inp);
    fclose(file2);
    char tekan;

    do
    {
        gotoxy(46, 37);
        printf("<== Tekan [y] untuk kembali");

        gotoxy(80, 37);
        printf("Tekan [t] untuk keluar ==>");
        gotoxy(75, 37);
        tekan = getch();
        if (tekan == 'y')
        {
            system("cls");
            login_registrasi();
        }
        else if (tekan == 't')
        {
            // system("pause");
            exit(0);
        }
    } while (!(tekan == 'y' && tekan == 't'));
}
void u_login()
{

    char pilih;
    char ulang;

    // do{
    set_color(15, 0);
    gotoxy(62, 3);
    printf(" %c%c%c  %c   %c%c%c   %c%c    %c    %c  %c%c    %c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(62, 4);
    printf("%c     %c  %c      %c %c   %c    %c  %c %c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(62, 5);
    printf(" %c%c%c  %c  %c %c%c   %c  %c  %c    %c  %c  %c  %c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(62, 6);
    printf("    %c %c  %c   %c  %c   %c %c    %c  %c   %c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(62, 7);
    printf(" %c%c%c  %c   %c%c%c   %c    %c%c    %c  %c    %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    set_color(15, 0);
    gotoxy(63, 18);
    printf("Username:");
    gotoxy(63, 19);
    printf("___________________________________");
    gotoxy(63, 21);
    printf("Password:");
    gotoxy(63, 22);
    printf("___________________________________");
    set_color(15, 0);
    gotoxy(73, 28);
    printf("0 UNTUK KEMBALI");
    gotoxy(66, 30);
    printf("==>ENTER UNTUK MELANJUTKAN<==");
    gotoxy(80, 29);
    while (TRUE)
    {
        pilih = getch();
        if (pilih == '0')
        {
            login_registrasi();
        }
        else if (pilih == 13)
        {
            int b = 0;
            gotoxy(73, 28);
            printf("                        ");
            gotoxy(66, 30);
            printf("                                    ");
            int wrong = 0;
            do
            {
                system("cls");
                void maju();
                set_color(6, 0);
                gotoxy(62, 3);
                printf(" %c%c%c  %c   %c%c%c   %c%c    %c    %c  %c%c    %c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
                gotoxy(62, 4);
                printf("%c     %c  %c      %c %c   %c    %c  %c %c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
                gotoxy(62, 5);
                printf(" %c%c%c  %c  %c %c%c   %c  %c  %c    %c  %c  %c  %c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
                gotoxy(62, 6);
                printf("    %c %c  %c   %c  %c   %c %c    %c  %c   %c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
                gotoxy(62, 7);
                printf(" %c%c%c  %c   %c%c%c   %c    %c%c    %c  %c    %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
                set_color(15, 0);
                char nama[50][50];
                char pass[50][50];
                FILE *file;
                file = fopen("akun.txt", "r");
                int x = 0;
                int z = 0;
                while (!feof(file))
                {
                    fscanf(file, "%s", &nama[x]);
                    fscanf(file, "%s", &pass[x]);
                    x++;
                }
                fclose(file);
                int a = 0;
                gotoxy(63, 18);
                printf("Username:");
                gotoxy(63, 19);
                printf("___________________________________");
                gotoxy(63, 21);
                printf("Password:");
                gotoxy(63, 22);
                printf("___________________________________");
                int xox = 0;
                char u_log;
                while (u_log != 13)
                {
                    gotoxy(73 + xox, 18);
                    u_log = getch();
                    if (xox > 0 && u_log == 8)
                    {
                        printf("\b ");
                        xox--;
                    }
                    if (xox < 24 && (u_log >= '0' && u_log <= '9' || u_log >= 'a' && u_log <= 'z' || u_log >= 'A' && u_log <= 'Z'))
                    {
                        inputan[xox] = u_log;
                        printf("%c", inputan[xox]);
                        xox++;
                    }
                    if (xox == 0 && u_log == 13)
                    {
                        gotoxy(63, 18);
                        printf("                         ");
                        gotoxy(63, 18);
                        printf("INPUT TIDAK VALID");
                        Sleep(500);
                        gotoxy(63, 18);
                        printf("                         ");
                        u_log = 0;
                        system("cls");
                        u_login();
                    }
                }
                inputan[xox] = 0;
                gotoxy(63, 21);
                printf("Password:");
                int kok = 0;
                char p_log;
                while (p_log != 13)
                {
                    gotoxy(73 + kok, 21);
                    p_log = getch();
                    if (kok > 0 && p_log == 8)
                    {
                        printf("\b ");
                        kok--;
                    }
                    if (kok < 24 && (p_log >= '0' && p_log <= '9' || p_log >= 'a' && p_log <= 'z' || p_log >= 'A' && p_log <= 'Z'))
                    {
                        inputan2[kok] = p_log;
                        printf("%c", inputan2[kok]);
                        kok++;
                    }
                    if (kok == 0 && p_log == 13)
                    {
                        gotoxy(63, 21);
                        printf("                         ");
                        gotoxy(63, 21);
                        printf("INPUT TIDAK VALID");
                        Sleep(500);
                        gotoxy(63, 21);
                        printf("                         ");
                        p_log = 0;
                        system("cls");
                        u_login();
                    }
                }
                inputan2[kok] = 0;
                for (int b = 0; b < x; b++)
                {
                    if ((strcmp(nama[b], inputan) == 0) && (strcmp(pass[b], inputan2) == 0))
                    {
                        indek = b;
                        a = 1;
                        break;
                    }
                }
                if (a == 1)
                {
                    for (int a = 0; a <= 50; a++)
                    {
                        gotoxy(75, 28);
                        printf("loading %d %%", a * 2);
                        Sleep(10); // persentase
                        gotoxy(55 + a, 31);
                        printf("%c", 219);
                        Sleep(10); // jalan
                    }
                    // system("cls");
                    maju();
                    belanja();
                }
                else
                {
                    b = 1;
                    p_log = 0;
                    u_log = 0;
                    wrong++;
                    gotoxy(63, 18);
                    printf("Username Atau Password Salah!");
                    Sleep(300);
                    gotoxy(63, 21);
                    printf("Username Atau Password Salah!");
                    Sleep(300);
                    if (wrong == 3)
                    {
                        gotoxy(63, 18);
                        printf("                                     ");
                        gotoxy(63, 19);
                        printf("                                     ");
                        gotoxy(63, 21);
                        printf("                                     ");
                        gotoxy(63, 22);
                        printf("                                     ");
                        gotoxy(63, 18);
                        printf("_____________________________________");
                        gotoxy(63, 22);
                        printf("_____________________________________");
                        gotoxy(67, 20);
                        printf("Percobaan Sudah Habis!");
                        Sleep(700);

                        login_registrasi();
                        system("cls");
                    }
                }
            } while (b == 1);
        }
    }
}

void registrasi()
{
    char nama1[50];
    char no1[50];
    char kelamin1[50];
    char umur1[50];
    char ttl1[50];
    char userreg1[50];
    char password1[50];
    dompet = 0;
    char pilih;
    char ulang;
    set_color(15, 0);
    gotoxy(55, 5);
    printf(" %c%c%c  %c   %c%c%c   %c%c    %c    %c   %c  %c %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(55, 6);
    printf("%c     %c  %c      %c %c   %c    %c   %c  %c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(55, 7);
    printf(" %c%c%c  %c  %c %c%c   %c  %c  %c    %c   %c  %c %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(55, 8);
    printf("    %c %c  %c   %c  %c   %c %c    %c   %c  %c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(55, 9);
    printf(" %c%c%c  %c   %c%c%c   %c    %c%c     %c%c%c   %c     \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(45, 13);
    printf("   Nama lengkap            :                                ");
    gotoxy(45, 14);
    printf("   _________________________________________________________");
    gotoxy(45, 15);
    printf("   No Telepon              :                                ");
    gotoxy(45, 16);
    printf("   _________________________________________________________");
    gotoxy(45, 17);
    printf("   Jenis kelamin [l/p]     :                                ");
    gotoxy(45, 18);
    printf("   _________________________________________________________");
    gotoxy(45, 19);
    printf("   Umur                    :                                ");
    gotoxy(45, 20);
    printf("   _________________________________________________________");
    gotoxy(45, 21);
    printf("   Asal kota               :                                ");
    gotoxy(45, 22);
    printf("   _________________________________________________________");
    gotoxy(45, 23);
    printf("   Masukkan username       :                                ");
    gotoxy(45, 24);
    printf("   _________________________________________________________");
    gotoxy(45, 25);
    printf("   Masukkan password       :                                ");
    gotoxy(45, 26);
    printf("   _________________________________________________________");
    gotoxy(67, 33);
    printf("0 UNTUK KEMBALI");
    gotoxy(62, 30);
    printf("==>ENTER UNTUK MELANJUTKAN<==");
    gotoxy(76, 31);
    pilih = getch();
    if (pilih == '0')
    {
        system("cls");
        login_registrasi();
    }
    else if (pilih == 13)
    {
        set_color(12, 0);
        gotoxy(55, 5);
        printf(" %c%c%c  %c   %c%c%c   %c%c    %c    %c   %c  %c %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        gotoxy(55, 6);
        printf("%c     %c  %c      %c %c   %c    %c   %c  %c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        gotoxy(55, 7);
        printf(" %c%c%c  %c  %c %c%c   %c  %c  %c    %c   %c  %c %c%c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        gotoxy(55, 8);
        printf("    %c %c  %c   %c  %c   %c %c    %c   %c  %c \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        gotoxy(55, 9);
        printf(" %c%c%c  %c   %c%c%c   %c    %c%c     %c%c%c   %c     \n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        set_color(15, 0);
        gotoxy(45, 13);
        printf("   Nama lengkap            :                                ");
        gotoxy(45, 14);
        printf("   _________________________________________________________");
        gotoxy(45, 15);
        printf("   No Telepon              :                                ");
        gotoxy(45, 16);
        printf("   _________________________________________________________");
        gotoxy(45, 17);
        printf("   Jenis kelamin [l/p]     :                                ");
        gotoxy(45, 18);
        printf("   _________________________________________________________");
        gotoxy(45, 19);
        printf("   Umur                    :                                ");
        gotoxy(45, 20);
        printf("   _________________________________________________________");
        gotoxy(45, 21);
        printf("   Asal kota               :                                ");
        gotoxy(45, 22);
        printf("   _________________________________________________________");
        gotoxy(45, 23);
        printf("   Masukkan username       :                                ");
        gotoxy(45, 24);
        printf("   _________________________________________________________");
        gotoxy(45, 25);
        printf("   Masukkan password       :                                ");
        gotoxy(45, 26);
        printf("   _________________________________________________________");
        gotoxy(67, 33);
        printf("                           ");
        gotoxy(62, 30);
        printf("                                 ");
        val_nam_inp();
    }
}
////////////////////validasi admun///////////////////////////////

char *cekuang(char *tampuang)
{
    char inp;
    int index = 0;

    while ((inp = getch()) != 13 || index < 5)
    {
        if (index < 9 && ((inp >= '0' && inp <= '9') && index > 0 || (inp >= '1' && inp <= '9') && index == 0))
        {
            printf("%c", inp);
            tampuang[index] = inp;
            index++;
        }
        else if (inp == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tampuang[index] = '\0';
        }
    }
    tampuang[index] = '\0';
    return tampuang;
}

char *InputNama(char *nama)
{
    char input;
    int ind = 0;
    while ((input = getch()) != 13 || ind < 4)
    {
        if (((input >= 'a' && input <= 'z' && ind != 0) || (input >= 'A' && input <= 'Z') || (nama[ind - 1] != ' ' && input == ' ' && ind != 0)) && ind < 4)
        {
            printf("%c", input);
            nama[ind] = input;
            ind++;
        }
        else if (input == 8 && ind != 0)
        {
            printf("\b \b");
            nama[ind] = input;
            ind--;
        }
    }
    nama[ind] = '\0';
    return nama;
}
/////////////////////////validasi ///////////////////////////////////////////////////
char *InputPass(char *pass)
{
    char input;
    int ind = 0;
    while ((input = getch()) != 13 || ind < 5)
    {
        if ((input >= '0' && input <= '9') && ind < 6)
        {
            printf("*");
            pass[ind] = input;
            ind++;
        }
        else if (input == 8 && ind != 0)
        {
            printf("\b \b");
            pass[ind] = input;
            ind--;
        }
    }
    pass[ind] = '\0';
    return pass;
}