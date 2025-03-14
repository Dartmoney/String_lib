//
// Created by islam on 28.02.2025.
//

#ifndef LABA1_LIBRARY_H
#define LABA1_LIBRARY_H
typedef struct{
    char *st;
    int n;
} string;
string string_ex(string a,int i,int j);
string creat(string st,int n);
//void print(string a);
string concat(string a, string b);
int len(string a);
int find(string a, string b, int reg);
void print(string a);
string input(string a);
string capitalise(string a);
string lower(string a);
int nfind(string a,char b);
#endif //LABA1_LIBRARY_H
