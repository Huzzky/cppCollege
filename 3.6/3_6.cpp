#include <stdio.h>
#include <locale.h>
#include <iostream>


/*
    ! РАЗДЕЛ 3. ЦИКЛЫ
    * 3.6.Составить программу определения наименьшего общего кратного двух
    * неотрицательных чисел a и b. Наибольший общий делитель двух неотрицательных
    * чисел НОД (a, b) определите по алгоритму Евклида. Если a=b, то НОД (a, b) = a
    * или НОД (a, b) = b, иначе, если a>b, то НОД (a, b) = НОД (a–b, b), иначе НОД (a, b)
    * = НОД (a, b–a). Последнее действие выполняется до тех пор, пока a не станет
    * равным b.
    * 
    * НОД - наименьший общий делитель
    * НОК = (a*b)/НОД(a, b)
*/

using namespace std;

int main() {

    unsigned int a,b;

    while (true) {

        cout << "Hello User\n" << "Enter the value(zero cannot be entered) a to find NOD: ";
        cin >> a;

        // * Если введено число, то продолжается
        if (cin && a>0) {

            cout<<"Now enter the value(zero cannot be entered) b: ";
            cin >> b;

            if (cin && b>0) {

                // * Объявление  переменных для локального использования (защита кода и бла-бла-бла)
                unsigned int _a, _b;
                _a = a;
                _b = b;

                // * Пока a и b не равны - из большего вычитается меньшее
                while (_a != _b){

                    while (_a > _b) {
                        _a = _a - _b;
                    };
                    
                    while (_a < _b) {
                        _b = _b - _a;
                    }
                };

                if(_a == _b){
                    cout<<"NOK: " << (a * b) / _a <<endl;
                }

                // * Если не число, то выводит ошибку
            } else if (!cin && b<=0) {
                cout<<"Error, something is wrong"<<endl;
            }

        } else if (!cin && a<=0) {
            cout<<"Error, something is wrong"<<endl;
        }
    }

}