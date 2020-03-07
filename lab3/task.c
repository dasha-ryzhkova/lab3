#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#define DEVIDE " ,.?!;:'-"



int ValInt(int obj)
{
    char Str[20];
    scanf("%s", Str);
    int count = 0;
    while (true)
    {
        count = 0;
        int t = strlen(Str);
        for (int i = 0; i < t; i++)
        {
            if (isdigit(Str[i]))
                count++;
        }
        if (count == strlen(Str))
            break;
        else
        {
            //printf("%s", "Помилка. Неправильні дані.\n");
            scanf("%s", Str);
        }
    }
    obj = atoi(Str);
    return obj;
}

int InputString() {
    char str1[100], str2[100], str3[100];
    char newString1[10][10], newString2[10][10];
    char* p;
    int i, j, ctr1, q, w = 0, e, r, ctr2;
   

    gets(str1);
    printf("---------------------------------------\n");


    j = 0; ctr1 = 0;
    for (i = 0; i <= (strlen(str1)); i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if (str1[i] == ' ' || str1[i] == '\0')
        {
            newString1[ctr1][j] = '\0';
            ctr1++;  //for next word
            j = 0;    //for next word, init index to 0
        }
        else
        {
            newString1[ctr1][j] = str1[i];
            j++;
        }
    }

    //разбиение строки по пробелам


    for (p = strtok(str1, DEVIDE); p; p = strtok(NULL, DEVIDE)) {
        for (q = strlen(p) - 1; q >= 0; --q, ++w) {
            str2[w] = p[q];
        }
        str2[w] = ' ';
        ++w;

    }
    str2[w] = '\0';


    r = 0; ctr2 = 0;
    for (e = 0; e <= (strlen(str2)); e++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if (str2[e] == ' ' || str2[e] == '\0')
        {
            newString2[ctr2][r] = '\0';
            ctr2++;  //for next word
            r = 0;    //for next word, init index to 0
        }
        else
        {
            newString2[ctr2][r] = str2[e];
            r++;
        }
    }


    for (i = 0; i < ctr1; i++) {
        for (e = i + 1; e < ctr2 - 1; e++) {

            if (! strcmp(newString1[i], newString2[e])) {
                printf("%10s", newString1[i]);
                printf(" - %s", newString1[e]);
                printf("\n");
            }
        }
    }

}
    
  

void GoToXY(int column, int line)
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (!SetConsoleCursorPosition(hConsole, coord))
    {
    }
}


int main()
{
    system("cls");
    printf("%c", (char)218);
    for (int i = 0; i < 118; i++)
    {
        printf("%c", (char)196);
    }
    printf("%c", (char)191);
    for (int j = 0; j < 28; j++)
    {
        printf("%c", (char)179);
        for (int l = 0; l < 15; l++)
        {
            printf("\t");
        }
        printf("%c", (char)179);
    }
    printf("%c", (char)192);
    for (int m = 0; m < 118; m++)
    {
        printf("%c", (char)196);
    }
    printf("%c", (char)217);

    system("chcp 1251");

    GoToXY(48, 4);
    printf("Лабораторна робота №1\n");

    GoToXY(20, 10);
    printf("Тема: \"ОПРАЦЮВАННЯ СИМВОЛЬНИХ ДАНИХ\"\n");

    GoToXY(10, 18);
    printf("Виконала студентка групи КМ-92\n");

    GoToXY(98, 18);
    printf("Рижкова Д.О.\n");

    GoToXY(57, 28);
    printf("2020\n\n");

    system("pause");
    system("cls");

    printf("Дано текст. Виділити з тексту всі слова, які є оберненими одне до одного.\n");
    printf("\n");
    printf("\nВведіть рядок:\n");
    InputString();

    int choise = 0;
    printf("\nДля продовження оберіть 1, для закінчення - 0.\n");
    choise = ValInt(choise);
    while (choise != 0 && choise != 1)
    {
        printf("Помилка.\n");
        scanf("%d", &choise);

    }
    if (choise == 0) {
        exit(1);
        system("cls");
    }
}