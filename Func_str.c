#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Created by islam on 28.02.2025.
// Функция инициализации строки
string creat(string st,int n)
{
    if (n <= 0)
    {
        string er;
        creat(er,11);
        er.st = "Index Error";
        return er;
    }

    st.st = malloc((n + 1)*sizeof(char));
    st.n = n;
    return st;
}
// Функция конкатенации строки на входе 2 строки
string concat(string a, string b)
{
    string new;
    new.st = malloc((a.n + b.n + 1)*sizeof(char));
    new.n = a.n+b.n;
    for (int i=0;i<a.n;i++)
    {
        new.st[i] = a.st[i];
    }
    for (int i=a.n ,n = 0;n<b.n;i++, n++)
    {
        new.st[i] = b.st[n];
    }
//    printf("%s", new.st);
    return new;
}
//Функция для получения подстроки с  i-го по j-й элемент включительно. На входе строка и числа i,j
// Возвращает строку с ошибкой в случае неправильных индексов
string string_ex(string a,int i,int j)
{
    int c = j - i;
    string minor;
    string er;
    creat(er,11);
    er.st = "Index Error";
    minor = creat(minor,c);
    if ((a.n < i) || (a.n < j) || (i < 0) || (j<i) )
        return er;
    for (int p=0;p<c;p++)
    {
        printf("%d",p);
        printf("%c\n",a.st[i + p]);
        minor.st[p] = a.st[i+p];
    }
//    print(minor);
//    printf("%d",minor.n);
    return minor;
}
//Функция для поиска подстроки.
// На вход подается строка в которой ведется поиск,
// строка которую мы ищем и переменная значение которой решает будем ли мы учитывать регистр
// выдает индекс подстроки в случае успешного поиска и минус 1 в случае если безуспешен
int find(string a, string b, int reg)
{
    if ((a.st[0] == NULL) || (b.st[0] == NULL))
    {
        return -1;
    }

    if (reg == 0)
    {
        int sov = 0;
        int ind = -1;
        for (int i=0;a.n>i;i++)
        {
            if (tolower(a.st[i]) == tolower(b.st[sov]))
            {
                if (sov == 0) ind = i;
                sov++;
                if (sov == (b.n - 1))
                    return ind;
            }
        }
        return ind;
    }
    else
    {
        int sov = 0;
        int ind = -1;
        for (int i=0;a.n>i;i++)
        {
            if (a.st[i] == b.st[sov])
            {
                if (sov == 0) ind = i;
                sov++;
                if (sov == (b.n - 1))
                    return ind;
            }
        }
        return ind;
    }

}
//Делает первую букву заглавной
string capitalise(string a)
{
    a.st[0] = toupper(a.st[0]);
    return a;
}
//Делает все буквы маленькими
string lower(string a)
{
    for (int i=0;i<a.n;i++)
    {
        a.st[i] = tolower(a.st[i]);
    }
    return a;
}
//Делает все буквы большими
string upper(string a)
{
    for (int i=0;i<a.n;i++)
    {
        a.st[i] = toupper(a.st[i]);
    }
    return a;
}
// считает количество символов b в строке a
int nfind(string a,char b)
{
    int num = 0;
    for (int i=0;i<a.n;i++)
    {
        if (a.st[i]==b)
        {
            num++;
        }
    }
    return num;
}


//Функция выдающая длину строки
int len(string a)
{
    return a.n;
}
//Функции ввода и вывода на вход подается строка которую вы хотите вывести или же в которую вы хотите записать данные из терминала
void print(string a)
{
    for (int i=0;i<a.n;i++)
    {
        printf("%c",a.st[i]);
    }
    printf("\n");
}
string input(string a)
{
    scanf("%s", a.st);
    return a;
}