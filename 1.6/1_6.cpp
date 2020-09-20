#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <string>
#include <cmath>


// для использования cout, cer и тд
using namespace std;

int main(void)
{

    //* Приветствие
    cout << "Hello, User \nToday there will be a calculation and comparison of a complex radical\n" << endl;

    // * Переменная a и b в формуле
    int a, b, 
    // * Первый большой корень
    leftResultMinus, // * для минуса
    leftResultPlus, // * для плюса

    // * Второй большой корень 
    rightResultMinus, // * для минуса
    rightResultPlus, // * для плюса

    generalRideSideMinus, // * Подсчет всей правой части с минусом
    generalRideSidePlus; // * Подсчет всей правой части с плюсом

    // * Обращение к пользователю с переменной а
    cout << "Please enter a digit for the value a: ";
    // * ввод переменной а
    // * т.к. не разрешено использовать if, while и тд - я не могу поставить ограничения
    cin >> a;
    // * Второе обращение с переменной b
    cout << "Also, please enter a digit for the value b: ";
    // * ввод переменной b
    cin >> b;

    // * Подсчет левой части с плюсом и минусом
    // ! Здесь должно быть >=0
    leftResultPlus = sqrt(a+sqrt(b));
    // ! Здесь может быть меньше нуля
    leftResultMinus = sqrt(a-sqrt(b));
    
    // ? Можно было бы использовать Pow для float, но это на усмотрение
    // * Подсчет двух подчастей правой части
    rightResultPlus = sqrt((a+sqrt(pow(a,2)-b))/2);
    rightResultMinus = sqrt((a-sqrt(pow(a,2)-b))/2);

    // * Подсчет Полностью правой части с плюсом и минусом
    generalRideSidePlus = rightResultPlus + rightResultMinus;
    generalRideSideMinus = rightResultPlus - rightResultMinus;

    // * Сравнение левой и правой части с минусом и плюсом
    bool matchingMinus = leftResultPlus&&generalRideSidePlus;
    bool matchingPlus = leftResultMinus&&generalRideSideMinus;

    // * Вывод сравнения в виде 0 или 1
    cout << "\nWhen minus the calculations of the left and right sides: " << matchingMinus << endl;
    cout << "With plus the calculation of the left and right sides: " << matchingPlus<< "\n" << endl;


    // * Задержка консольного окна, чтобы окно не закрывалось
    system("pause>nul");
    return 0;
}