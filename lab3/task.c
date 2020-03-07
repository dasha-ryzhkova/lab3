#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#define DELIM " ,.?!;:'-"



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
    char b[256], s[256];
    char* p;
    int i = 0, j;
    gets(s);

    for (p = strtok(s, DELIM); p; p = strtok(NULL, DELIM)) {
        for (j = strlen(p) - 1; j >= 0; --j, ++i) {
            b[i] = p[j];
        }
        b[i] = ' ';
        ++i;

    }
    b[i] = '\0';
    puts(b);

    for (int q = 0; q < strlen(s); q++) {
        for (int w = 0; w < strlen(s); w++) {
            if (s[q] = b[w]) {
                printf("%s", s[q]);
                printf(" - ");
                printf("%s", s[w]);
                break;
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
    

    /*int choise = 0;
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
    }*/


              
    
}
