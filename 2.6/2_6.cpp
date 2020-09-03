#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <Windows.h>


/*
    ! РАЗДЕЛ 2. ВЕТВЛЕНИЯ. МНОЖЕСТВЕННЫЙ ВЫБОР
    ! Задание:
    * 2.6. Составьте программу, которая выдает сообщение о кодах ASCII по
    * следующей схеме: если код меньше 32 или равен 127, то выдается сообщение
    * «Управляющие коды». Если значение кода находится в интервале от 48 до 57
    * выдается сообщение «Код цифры», от 65 до 90 и от 128 до 159 – «Код прописной
    * буквы»; от 97 до 122, от 159 до 175, и от 224 до 241 – «Код строчной буквы»; от
    * 176 до 223 – «Код символа псевдографики»
*/

using namespace std;

int main(void)
{

    // * unsugned char, т.к. при обычном char будет, например, русская буква А кодом ASCII -127
    unsigned char symbol;
    cout <<"Hello, User\n"<< "Enter character: ";
    cin >> symbol;

    // * Сразу после ? идет выполнение, если выполняется условие
    // ? Тернарные условные операции, хотя можно было использовать if else/ if else if else или даже switch вместе case
    // ! Условие, что если код будет меньше 32-го кода или будет равен 127-ому коду, то это Коды Управления
    (int(symbol)<32 || int(symbol)==127) ? cout << "Control codes" : 
    (
        // ! Условие, что код символа будет от 48 до 57 включая их - то выведет, что это Код Цифр
        (int(symbol)>=48 && int(symbol)<=57) ? cout<<"Digit code" : 
        (
            // ! Условие, что код символа будет от 65 до 90, от 128 до 159 включая их - то выведет, что это Код Прописной Буквы
            (int(symbol)>=65 && int(symbol)<=90 || int(symbol)>=128 && int(symbol)<=159) ? cout<<"Capital letter code" : 
            (
                // ! Условие, что код символа будет от 97 до 122, от 159 до 175, от 224 до 241 включая их - то выведет, что это Код Строчной Буквы
                (int(symbol)>=97 && int(symbol)<=122 || int(symbol)>159 && int(symbol)<=175 || int(symbol)>=224 && int(symbol)<=241) ? cout<<"Lowercase letter code" : 
                (
                    // ! Условие, что код символа будет от 176 до 223 включая их - то выведет, что это Код Символа Псевдографики
                    (int(symbol)>=176 && int(symbol)<=223) ? cout<< "Pseudographic symbol code" : 
                    (
                        // ! Условие, что код символа будет равен коду Спец символа - то выведет, что это Код Символа Псевдографики 
                        (int(symbol)>=33 && int(symbol)<=47 || int(symbol)>=58 && int(symbol)<=64 || int(symbol)>=91 && int(symbol)<=96 ||
                        int(symbol)>=123 && int(symbol)<=126 || int(symbol)>=242) ? cout<<"Spec symbol" : 
                            cout<< "I dont know such a code, sorry"
                    )
                )
            )
        )
    );
    
    system("pause>nul");
    return 0;
    // Здесь пиши if && other
    // ? Можно было использовать и if else и сократить int(symbol)
    if (int(symbol)<32 || int(symbol)==127) {
        cout << "Control codes";
    } else if (int(symbol)>=48 && int(symbol)<=57) {
        cout<<"Digit code";
    } else if (int(symbol)>=65 && int(symbol)<=90 || int(symbol)>=128 && int(symbol)<=159) {
        cout<<"Capital letter code";
    } else if (int(symbol)>=97 && int(symbol)<=122 || int(symbol)>159 && int(symbol)<=175 || int(symbol)>=224 && int(symbol)<=241) {
        cout<<"Lowercase letter code";
    } else if (int(symbol)>=176 && int(symbol)<=223) {
        cout<< "Pseudographic symbol code";
    } else if (int(symbol)>=33 && int(symbol)<=47 || int(symbol)>=58 && int(symbol)<=64 || int(symbol)>=91 && int(symbol)<=96 ||
    int(symbol)>=123 && int(symbol)<=126 || int(symbol)>=242) {
        cout<<"Spec symbol";
    } else {
        cout<< "I dont know such a code, sorry";
    };

    // ? Можно было использовать switch
    switch(int(symbol))
    {
    // * Очень много писать case, а точнее под каждый символ, а это 256 кейсов
    };

    
}