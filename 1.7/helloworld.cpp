#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <cmath>


// для использования cout, cer и тд
using namespace std;

int main(void)
{

    system("chcp 1251>nul");
    cout << "Hello, User \nToday there will be a calculation and comparison of a complex radical" << endl;
    //TODO сделать вывод формулы
    // * Переменная a и b в формуле
    unsigned int a, b, 
    // * Первый большой корень
    leftResultMinus, // * для минуса
    leftResultPlus, // * для плюса

    // * Второй большой корень 
    rightResultMinus, // * для минуса
    rightResultPlus, // * для плюса

    generalRideSideMinus, // * Подсчет всей правой части с минусом
    generalRideSidePlus; // * Подсчет всей правой части с плюсом

    cout << "Please enter a digit for the value a: " << endl;
    cin >> a;
    cout << a << endl;
    cout << "Also, please enter a digit for the value b: " << endl;
    cin >> b;

    leftResultPlus = sqrt(a+sqrt(b));
    //cout << leftResultPlus; // * Здесь >0
    leftResultMinus = sqrt(a-sqrt(b));
    // cout << leftResultMinus; // * Здесь может быть меньше нуля

    // ? Можно было бы использовать Pow для float, но это на усмотрение
    int c,e,g,f,i;
    rightResultPlus = sqrt((a+sqrt(pow(a,2)-b))/2);
    // i = pow(a,2);
    // cout << "this i: "<<i;
    // c = i-b;
    // cout << "\nthis c: "<< c;
    // e = sqrt(c);
    // cout << "\nthis e: "<< e;
    // g = (a-e)/2;
    // cout << "\nthis g: "<<g;
    // f = sqrt(g);
    // cout << "\nthis f: "<< f;


    rightResultMinus = sqrt((a-sqrt(pow(a,2)-b))/2);

    generalRideSidePlus = rightResultPlus + rightResultMinus;
    generalRideSideMinus = rightResultPlus - rightResultMinus;

    cout << "With a plus, the result will be: " << generalRideSidePlus;

    // * Задержка консольного окна
    // system("pause>nul");
}