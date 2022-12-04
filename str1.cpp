#include<iostream>
#include<string>
#include"Streasy.h"

using namespace std;

string itc_hello_str (string n) //Number 1
{
    return "Hello, " + n;
}

long long itc_len(string n) //Number 2
{
    int s;
    for (int i = 0; n[i] != '\0'; i++)
        s = s + 1;
    return s;
}

void itc_print_copy_str(string n, int a) //Number 3
{
    cout << n[a];
}

void itc_first_end_three(string n) //Number 4
{
    string l, m;
    long long s, f, i;
    s = itc_len(n);
    if (s > 5)
    {
        for (i = 0; n[i] != n[3]; i++)
            cout << n[i] << " ";
        for (f = s - 3; n[f] != '\0'; f++)
            cout << n[f] << " ";
    }
    else
        for (i = 0; i < s; i++)
            cout << n[0];
}
int itc_count_char_in_str(char b, string n) //Number 5
{
    int m;
    for (int i = 0; n[i] != '\0'; i++)
        if (b == n[i])
        m = m + 1;
    return m;
}
