#ifndef STREASY_H_INCLUDED
#define STREASY_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

string itc_hello_str(string n); //Заказные приветы (№1)
long long itc_len(string n); //Считала символов (№2)
void itc_print_copy_str(string n, int a); //Указанный символ из строки (№3)
void itc_first_end_three(string n); //первые и последние 3 символа/первый символ n раз (№4)
int itc_count_char_in_str(char b, string n); //Считатель символа в строке (№5)
string itc_even_place(string n); //первый символ ннада? (№6)
double itc_percent_lower_uppercase(string n); //сколько высоких (№7)
string itc_reverse_str(string n); //Слава наоборот (№8)
string itc_slice_str(string n, int z, int v); //часть слова (№9)
bool itc_equal_reverse(string n); //Ровный челик или нет (№10)
string itc_cmp_str(string n, string m, int u); //слова совмещайтес (№11)

#endif // STREASY_H_INCLUDED
