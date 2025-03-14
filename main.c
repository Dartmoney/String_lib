#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "library.h"

int main(void) {
    SetConsoleOutputCP(65001);
    int x;
    int c;
    string a;
    string b;
    a = creat(a,10);
    b = creat(b,3);
    input(a);
    input(b);
    c = find(a,b,0);
    printf("%d", c);
//    print(a);
//    b = string_ex(a,2,6);
    free(a.st);
    free(b.st);
    scanf("%d",&x);
    return 0;
}
