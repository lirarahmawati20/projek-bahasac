// #include <stdio.h>
// #include <conio.h>
// #include <windows.h>
// #include <conio.h>
// #include <stdbool.h>
// #include <time.h>
// #define handle GetStdHandle(STD_OUTPUT_HANDLE)

// void gotoxy(int x, int y)
// {
//    COORD posisi = {x, y};
//    SetConsoleCursorPosition(handle, posisi);
// }
// void setcolor(int text, int bg)
// {
//    SetConsoleTextAttribute(handle, bg * 16 + text);
// }
// char nama1[100];
// char pass1[100];
// char user[100];
// char pass[100];
// void bingkai();
// void menu_admin1();
// void tambah_stok();
// void membeli_stok();
// void pilihan_admin();
// void login_admin();
// char mau[10];
// char jumlah_tambah_stok[10];
// long jmlh[7] = {0, 0, 0, 0, 0, 0, 0};
// int stock[10] = {10, 10, 10, 10, 10, 10, 10};
// char ukbaj[3][3], wanbaj[3][3], jmlbarang[50][50];
// int harga = 0, kembalian = 0, kurang, banyak2, total_harga = 0, tamp = 0, tamp1 = 0, uang2 = 0, tbh_stok;
// char ukur[10][50] = {{"S"}, {"M"}, {"L"}, {"XL"}};
// char barang[10][50] = {{"ballgown Dress"}, {"lira Dress"}, {"Latulip Dress"}, {"off shouseder dress"}, {"Shopia Anggel Dress"}, {"mermaid Dress"}, {"denim dress"}};
// char warna[10][50] = {{"Maroon"}, {"Navy"}, {"lilak"}, {"Peach"}, {"Army"}, {"nafy"}, {"mustrad"}, {"coksu"}};
// char harga2[10][50] = {{"Rp.595.000"}, {"Rp.5750.000"}, {"Rp.550.000"}, {"Rp.520.000"}, {"Rp.500.000"}, {"Rp.460.000"}, {"Rp.380.000"}};
// // void bingkai_admin();
// ////////////////////////////////////////////////////////////////////////////////
// char *InputNama(char *nama)
// {
//    char input;
//    int ind = 0;
//    while ((input = getch()) != 13 || ind < 4)
//    {
//       if (((input >= 'a' && input <= 'z' && ind != 0) || (input >= 'A' && input <= 'Z') || (nama[ind - 1] != ' ' && input == ' ' && ind != 0)) && ind < 4)
//       {
//          printf("%c", input);
//          nama[ind] = input;
//          ind++;
//       }
//       else if (input == 8 && ind != 0)
//       {
//          printf("\b \b");
//          nama[ind] = input;
//          ind--;
//       }
//    }
//    nama[ind] = '\0';
//    return nama;
// }
// /////////////////////////validasi ///////////////////////////////////////////////////
// char *InputPass(char *pass)
// {
//    char input;
//    int ind = 0;
//    while ((input = getch()) != 13 || ind < 5)
//    {
//       if ((input >= '0' && input <= '9') && ind < 6)
//       {
//          printf("*");
//          pass[ind] = input;
//          ind++;
//       }
//       else if (input == 8 && ind != 0)
//       {
//          printf("\b \b");
//          pass[ind] = input;
//          ind--;
//       }
//    }
//    pass[ind] = '\0';
//    return pass;
// }
// // //////////////////////////////////////////////////////////////////////////
// void bingkai1()
// {
//    for (int a = 0; a < 166; a++)
//    {
//       gotoxy(a, 41);
//       printf("%c", 219);
//       gotoxy(a, 0);
//       printf("%c", 219);
//    }
//    for (int a = 0; a < 42; a++)
//    {
//       gotoxy(0, a);
//       printf("%c%c", 219, 219);
//       gotoxy(164, a);
//       printf("%c%c", 219, 219);
//    }
//    for (int a = 1; a < 41; a++)
//    {
//       gotoxy(2, a);
//       printf("%c%c", 177, 177);
//       gotoxy(162, a);
//       printf("%c%c", 177, 177);
//    }
//    for (int a = 2; a < 162; a++)
//    {
//       gotoxy(a, 40);
//       printf("%c", 177);
//       gotoxy(a, 1);
//       printf("%c", 177);
//    }
// }
// void maju_keil()
// {
//    for (int a = 0; a <= 50; a++)
//    {
//       Sleep(10); // persentase
//       gotoxy(55 + a, 31);
//       printf("%c", 219);
//       Sleep(10); // jalan
//    }
// }
// void tampilan_admin()
// {
//    for (int a = 0; a < 100; a++)
//    {
//       gotoxy(33 + a, 15);
//       printf("%c", 219); // atas
//       gotoxy(33 + a, 21);
//       printf("%c", 219); // bawah
//    }
//    // garis horizontal pendek
//    for (int a = 0; a < 4; a++)
//    {
//       gotoxy(29 + a, 16);
//       printf("%c", 219); // kiri atas
//       gotoxy(29 + a, 20);
//       printf("%c", 219); // kiri bawah
//       gotoxy(133 + a, 16);
//       printf("%c", 219); // kanan atas
//       gotoxy(133 + a, 20);
//       printf("%c", 219); // kanan bawah
//    }
//    // garis vertikal panjang
//    for (int a = 0; a < 4; a++)
//    {
//       gotoxy(29, 17 + a);
//       printf("%c%c", 219, 219); // kiri
//       gotoxy(135, 17 + a);
//       printf("%c%c", 219, 219); // kanan
//    }
//    // garis vertikal pendek
//    gotoxy(33, 16);
//    printf("%c%c", 219, 219); // kiri atas
//    gotoxy(131, 16);
//    printf("%c%c", 219, 219); // kanan atas
//    gotoxy(33, 20);
//    printf("%c%c", 219, 219); // kiri bawah
//    gotoxy(131, 20);
//    printf("%c%c", 219, 219); // kanan bwah

//    // garis bawah
//    for (int a = 0; a < 20; a++)
//    {
//       gotoxy(70 + a, 17);
//       printf("%c", 95);
//    }
//    for (int a = 0; a < 20; a++)
//    {
//       gotoxy(70 + a, 19);
//       printf("%c", 95);
//    }

//    // gotoxy(60, 35);
//    // printf("Tekan tombol %cEsc%c untuk kembali ke Menu Awal", 34, 34);
//    // inputan_kode_akses();
//    login_admin();
// }
// void login_admin()
// {
//    // tampilan_admin();
//    int jml = 0;
//    do
//    {
//       if (jml == 3)
//       {
//          system("cls");
//          gotoxy(55, 15);
//          printf("login invalid");
//          Sleep(1000);
//          system("cls");
//          Sleep(100);
//          // terimakasih();
//          exit(0);
//       }
//       else
//       {
//          gotoxy(54, 17);
//          printf(" masukan username   : ");
//          InputNama(nama1);
//          gotoxy(54, 19);
//          printf(" password           : ");
//          InputPass(pass1);
//          gotoxy(75, 17);
//          gotoxy(75, 19);
//          if (strcmp(nama1, "Lira") == 0 && strcmp(pass1, "200803") == 0)
//          {
//             for (int a = 1; a <= 100; a++)
//             {
//                if (a % 2 == 0)
//                {
//                   gotoxy(75, 27);
//                   printf("Loading...%d%%", a);
//                   Sleep(5);
//                   gotoxy(75, 22);
//                }
//             }
//             maju_keil();
//             pilihan_admin();
//          }
//          else
//          {
//             gotoxy(65, 22);
//             printf(" nama dan password salah !!!");
//             gotoxy(65, 23);
//             printf(" ulangi kembali  !!!");
//             jml++;
//             Sleep(1000);
//             system("cls");
//          }
//       }
//       // char nama[100], pass[100], nomor[100], alamat[100];
//       FILE *buff = fopen("login.txt", "a");
//       fprintf(buff, "%s\n", nama1);
//       fprintf(buff, "%s\n", pass1);
//       fclose(buff);
//    } while (!(strcmp(nama1, "Lira") == 0 && strcmp(pass1, "200803") == 0));
// }
// void menu_admin1()
// {
//    gotoxy(30, 5);
//    printf("                                                                    __                __                  ");
//    gotoxy(30, 6);
//    printf("                                                                  /  |              /  |                  ");
//    gotoxy(30, 7);
//    printf(" _____  ____    ______   _______   __    __         ______    ____$$ | _____  ____  $$/  _______          ");
//    gotoxy(30, 8);
//    printf("/     \\/    \\  /      \\ /       \\ /  |  /  |       /      \\  /    $$ |/     \\/    \\ /  |/\\        ");
//    gotoxy(30, 9);
//    printf("$$$$$$ $$$$  |/$$$$$$  |$$$$$$$  |$$ |  $$ |       $$$$$$  |/$$$$$$$ |$$$$$$ $$$$  |$$ |$$$$$$$  |        ");
//    gotoxy(30, 10);
//    printf("$$ | $$ | $$ |$$    $$ |$$ |  $$ |$$ |  $$ |       /    $$ |$$ |  $$ |$$ | $$ | $$ |$$ |$$ |  $$ |        ");
//    gotoxy(30, 11);
//    printf("$$ | $$ | $$ |$$$$$$$$/ $$ |  $$ |$$ \\__$$ |      /$$$$$$$ |$$ \\__$$ |$$ | $$ | $$ |$$ |$$ |  $$ |      ");
//    gotoxy(30, 12);
//    printf("$$ | $$ | $$ |$$       |$$ |  $$ |$$    $$/       $$    $$ |$$    $$ |$$ | $$ | $$ |$$ |$$ |  $$ |        ");
//    gotoxy(30, 13);
//    printf("$$/  $$/  $$/  $$$$$$$/ $$/   $$/  $$$$$$/         $$$$$$$/  $$$$$$$/ $$/  $$/  $$/ $$/ $$/   $$/         ");
// }
// void pilihan_admin()
// {
//    system("cls");
//    menu_admin1();
//    gotoxy(45, 16);
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
//    gotoxy(45, 17);
//    printf("%c", 186);
//    gotoxy(45, 18);
//    printf("%c", 186);
//    gotoxy(45, 19);
//    printf("%c", 186);
//    gotoxy(45, 20);
//    printf("%c", 186);
//    gotoxy(45, 21);
//    printf("%c", 186);
//    gotoxy(98, 17);
//    printf("%c", 186);
//    gotoxy(98, 18);
//    printf("%c", 186);
//    gotoxy(98, 19);
//    printf("%c", 186);
//    gotoxy(98, 20);
//    printf("%c", 186);
//    gotoxy(98, 21);
//    printf("%c", 186);
//    gotoxy(45, 22);
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
//    gotoxy(58, 18);
//    printf("1. T A M B A H STOK");
//    gotoxy(58, 20);
//    printf("2. R I W A Y A T ");
//    int pilihan_admin;
//    gotoxy(58, 24);
//    printf("pilih : ");
//    scanf("%d", &pilihan_admin);
//    switch (pilihan_admin)
//    {
//    case 1:
//       tambah_stok();
//       break;
//    case 2:
//       printf("riwanyart");
//       break;
//    }
// }

// void tambah_stok()
// {
//    system("cls");
//    gotoxy(30, 1);
//    printf("                ==========================                   ");
//    gotoxy(30, 2);
//    printf("                    # TAMBAH STOK : #                         ");
//    gotoxy(30, 3);
//    printf("                 ==========================                   ");
//    gotoxy(27, 4);
//    printf("===============================================================");
//    gotoxy(27, 5);
//    printf("==    No    ==     NAMA PRODUK            ==        STOK     ==");
//    gotoxy(27, 6);
//    printf("===============================================================");
//    gotoxy(27, 7);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 8);
//    printf("==    1     ==    ballgown Drees          ==                 ==");
//    gotoxy(27, 9);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 10);
//    printf("==    2     ==    lira Dress              ==                 ==");
//    gotoxy(27, 11);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 12);
//    printf("==    3     ==    Latulip Dress           ==                 ==");
//    gotoxy(27, 13);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 14);
//    printf("==    4     ==    Off shouseder dress     ==                 ==");
//    gotoxy(27, 15);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 16);
//    printf("==    5     ==    Shopia Anggel Dress     ==                 ==");
//    gotoxy(27, 17);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 18);
//    printf("==    6     ==    mermaid Dress           ==                 ==");
//    gotoxy(27, 19);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 20);
//    printf("==    7     ==    Denim Dress             ==                 ==");
//    gotoxy(27, 21);
//    printf("==          ==                            ==                 ==");
//    gotoxy(27, 22);
//    printf("===============================================================");
//    gotoxy(77, 8);
//    printf("%d pcs", stock[0]);
//    gotoxy(77, 10);
//    printf("%d pcs", stock[1]);
//    gotoxy(77, 12);
//    printf("%d pcs", stock[2]);
//    gotoxy(77, 14);
//    printf("%d pcs", stock[3]);
//    gotoxy(77, 16);
//    printf("%d pcs", stock[4]);
//    gotoxy(77, 18);
//    printf("%d pcs", stock[5]);
//    gotoxy(77, 20);
//    printf("%d pcs", stock[6]);
//    membeli_stok();
// }
// void tambah_lagi()
// {
//    while (true)
//    {
//       gotoxy(29, 27);
//       printf("tambah Lagi (y/t)?");
//       gotoxy(47, 27);
//       gets(mau);
//       if (strcmp(mau, "y") == 0 || strcmp(mau, "Y") == 0)
//       {
//          gotoxy(29, 27);
//          printf("                             ");
//          gotoxy(29, 26);
//          printf("                             ");
//          gotoxy(49, 25);
//          printf("                             ");
//          break;
//       }
//       else if (strcmp(mau, "t") == 0 || strcmp(mau, "T") == 0)
//       {
//          system("cls");
//          pilihan_admin();
//       }
//       else if (strcmp(mau, "0") == 0)
//       {
//          // menu();
//          tampilan_admin();
//          menu_admin1();
//       }
//       else
//       {
//          gotoxy(45, 30);
//          printf("INVALID ! ");
//          Sleep(1000);
//          gotoxy(45, 30);
//          printf("          ");
//          gotoxy(50, 27);
//          printf("        ");
//       }
//    }
// }
// // // // // ////////////////////////////////////////////////////////////////////////////////
// void membeli_stok()
// {
//    char membeli;
//    gotoxy(10, 30);
//    printf(" Tekan 0 untuk kembali ");
//    while (true)
//    {
//       gotoxy(27, 25);
//       printf("Masukan Pilihan : ");
//       gotoxy(46, 25);
//       printf("    ");
//       gotoxy(47, 25);
//       membeli = getche();
//       if (membeli == '0')
//       {
//          system("cls");
//          login_admin();
//       }
//       else if (membeli == '1')
//       {
//          gotoxy(29, 26);
//          printf("Jumlah Stok     : ");
//          gotoxy(47, 26);
//          gets(jumlah_tambah_stok);
//          tbh_stok = atoi(jumlah_tambah_stok);
//          if (tbh_stok > 0 && tbh_stok <= 100)
//          {
//             stock[0] += tbh_stok;
//             gotoxy(77, 8);
//             printf("%d pcs", stock[0]);

//             tambah_lagi();
//          }
//          else if (tbh_stok > 50)
//          {
//             gotoxy(45, 30);
//             printf("Maksimal 100 ! Minimal 1 ! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//          else if (tbh_stok == 0)
//          {
//             // menu();
//             printf("    ");
//          }
//          else
//          {
//             gotoxy(45, 30);
//             printf("INVALID!!!!!! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//       }
//       else if (membeli == '2')
//       {
//          gotoxy(29, 26);
//          printf("Jumlah Stok     : ");
//          gotoxy(47, 26);
//          gets(jumlah_tambah_stok);
//          tbh_stok = atoi(jumlah_tambah_stok);
//          if (tbh_stok > 0 && tbh_stok <= 100)
//          {
//             stock[1] += tbh_stok;
//             gotoxy(77, 10);
//             printf("%d pcs", stock[1]);
//             tambah_lagi();
//          }
//          else if (tbh_stok > 50)
//          {
//             gotoxy(45, 30);
//             printf("Maksimal 100 ! Minimal 1 ! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//          else if (tbh_stok == 0)
//          {
//             // menu();
//             printf("   ");
//          }
//          else
//          {
//             gotoxy(45, 30);
//             printf("INVALID!!!!!! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//       }
//       else if (membeli == '3')
//       {
//          gotoxy(29, 26);
//          printf("Jumlah Stok     : ");
//          gotoxy(47, 26);
//          gets(jumlah_tambah_stok);
//          tbh_stok = atoi(jumlah_tambah_stok);
//          if (tbh_stok > 0 && tbh_stok <= 100)
//          {
//             stock[2] += tbh_stok;
//             gotoxy(77, 12);
//             printf("%d pcs", stock[2]);
//             tambah_lagi();
//          }
//          else if (tbh_stok > 50)
//          {
//             gotoxy(45, 30);
//             printf("Maksimal 100 ! Minimal 1 ! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//          else if (tbh_stok == 0)
//          {
//             // menu();
//             printf("   ");
//          }
//          else
//          {
//             gotoxy(45, 30);
//             printf("INVALID!!!!!! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//       }
//       else if (membeli == '4')
//       {
//          gotoxy(29, 26);
//          printf("Jumlah Stok     : ");
//          gotoxy(47, 26);
//          gets(jumlah_tambah_stok);
//          tbh_stok = atoi(jumlah_tambah_stok);
//          if (tbh_stok > 0 && tbh_stok <= 100)
//          {
//             stock[3] += tbh_stok;
//             gotoxy(77, 14);
//             printf("%d pcs", stock[3]);
//             tambah_lagi();
//          }
//          else if (tbh_stok > 50)
//          {
//             gotoxy(45, 30);
//             printf("Maksimal 100 ! Minimal 1 ! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//          else if (tbh_stok == 0)
//          {
//             /// menu();
//             printf("   ");
//          }
//          else
//          {
//             gotoxy(45, 30);
//             printf("INVALID!!!!!! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//       }
//       else if (membeli == '5')
//       {
//          gotoxy(29, 26);
//          printf("Jumlah Stok     : ");
//          gotoxy(47, 26);
//          gets(jumlah_tambah_stok);
//          tbh_stok = atoi(jumlah_tambah_stok);
//          if (tbh_stok > 0 && tbh_stok <= 100)
//          {
//             stock[4] += tbh_stok;
//             gotoxy(77, 16);
//             printf("%d pcs", stock[4]);
//             tambah_lagi();
//          }
//          else if (tbh_stok > 50)
//          {
//             gotoxy(45, 30);
//             printf("Maksimal 100 ! Minimal 1 ! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//          else if (tbh_stok == 0)
//          {
//             // menu();
//             printf("   ");
//          }
//          else
//          {
//             gotoxy(45, 30);
//             printf("INVALID!!!!!! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//       }
//       else if (membeli == '6')
//       {
//          gotoxy(29, 26);
//          printf("Jumlah Stok     : ");
//          gotoxy(47, 26);
//          gets(jumlah_tambah_stok);
//          tbh_stok = atoi(jumlah_tambah_stok);
//          if (tbh_stok > 0 && tbh_stok <= 100)
//          {
//             stock[5] += tbh_stok;
//             gotoxy(77, 18);
//             printf("%d pcs", stock[5]);
//             tambah_lagi();
//          }
//          else if (tbh_stok > 50)
//          {
//             gotoxy(45, 30);
//             printf("Maksimal 100 ! Minimal 1 ! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//          else if (tbh_stok == 0)
//          {
//             //  menu();
//             printf("   ");
//          }
//          else
//          {
//             gotoxy(45, 30);
//             printf("INVALID!!!!!! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//       }
//       else if (membeli == '7')
//       {
//          gotoxy(29, 26);
//          printf("Jumlah Stok     : ");
//          gotoxy(47, 26);
//          gets(jumlah_tambah_stok);
//          tbh_stok = atoi(jumlah_tambah_stok);
//          if (tbh_stok > 0 && tbh_stok <= 100)
//          {
//             stock[6] += tbh_stok;
//             gotoxy(77, 20);
//             printf("%d pcs", stock[6]);
//             tambah_lagi();
//          }
//          else if (tbh_stok > 50)
//          {
//             gotoxy(45, 30);
//             printf("Maksimal 100 ! Minimal 1 ! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//          else if (tbh_stok == 0)
//          {
//             // menu();
//             printf("   ");
//          }
//          else
//          {
//             gotoxy(45, 30);
//             printf("INVALID!!!!!! ");
//             Sleep(1000);
//             gotoxy(45, 30);
//             printf("                           ");
//             gotoxy(47, 26);
//             printf("           ");
//          }
//       }
//       else if (tbh_stok == 0)
//       {
//          //  menu();
//          printf("   ");
//       }
//       else
//       {
//          gotoxy(45, 30);
//          printf("INVALID!!!!!! ");
//          Sleep(1000);
//          gotoxy(45, 30);
//          printf("                           ");
//          gotoxy(47, 26);
//          printf("           ");
//       }
//    }
// }
// void main()
// {
//    tampilan_admin();
//    tambah_stok();
//    getch();
// }
// // // /