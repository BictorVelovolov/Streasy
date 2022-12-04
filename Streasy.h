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

#endif // STREASY_H_INCLUDED
