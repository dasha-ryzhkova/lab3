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
            //printf("%s", "�������. ���������� ���.\n");
            scanf("%s", Str);
        }
    }
    obj = atoi(Str);
    return obj;
}

int InputString() {
    char b[256], s[256], t[256], r[256];
    char* p;
    int i = 0, j;
    gets(s);
    strcpy(t, s);
    for (p = strtok(s, DEVIDE); p; p = strtok(NULL, DEVIDE)) {
        for (j = strlen(p) - 1; j >= 0; --j, ++i) {
            b[i] = p[j];
        }
        b[i] = ' ';
        ++i;

    }
    b[i] = '\0';
    puts(b);
    strcpy(r, b);
    for (int q = 0; q < strlen(t); q++) {
        for (int w = 0; w < strlen(r); w++) {
            if (t[q] = r[w]) {
                printf("%s", t[q]);
                printf(" - ");
                printf("%s", t[w]);
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
    printf("����������� ������ �1\n");

    GoToXY(20, 10);
    printf("����: \"����������� ���������� �����\"\n");

    GoToXY(10, 18);
    printf("�������� ��������� ����� ��-92\n");

    GoToXY(98, 18);
    printf("������� �.�.\n");

    GoToXY(57, 28);
    printf("2020\n\n");

    system("pause");
    system("cls");

    printf("���� �����. ������� � ������ �� �����, �� � ���������� ���� �� ������.\n");
    
    printf("\n");
    printf("\n������ �����:\n");
    
    
    

    InputString();
    

    /*int choise = 0;
    printf("\n��� ����������� ������ 1, ��� ��������� - 0.\n");
    choise = ValInt(choise);
    while (choise != 0 && choise != 1)
    {
        printf("�������.\n");
        scanf("%d", &choise);

    }
    if (choise == 0) {
        exit(1);
        system("cls");
    }*/


              
    
}
