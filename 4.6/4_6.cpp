#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>


/* 
    * Общая: По заданной формуле члена ряда с номером k составить две программы:
    * а) программу вычисления суммы первых n членов заданного ряда;
    * б) программу вычисления всех членов ряда, по модулю не меньших заданного
    * числа E.
    * 
    * формула ряда суммы - ( k + 1 ) / ( k^2 * ( k^2 + 2 ) )
*/
using namespace std;

int main() {

    long double E;
    long double formSum;
    int n, k, choiceUser;


    cout << "Choose a variant of the problem in numbers: " << endl;
    cout << "1. Program for calculating the sum of the first n terms of a given series" << endl;
    cout << "2. The program for calculating all terms of the series, modulo not less than a given number E" << endl;
    cin >> choiceUser;

    if (cin && choiceUser==1){
        cout << "Hello, User\n" << "Enter the number n to calculate the sum of the first n terms of a given series" <<endl;
        cin >> n;

        // * а)
        k=1;
        formSum = 0.0;

        if (n==0) {
            cout << "Ты ввел 0,а так не надо" << endl;
        } else if (n==k) {
            cout << setprecision(15) << ( k + 1 ) / ( pow(k,2) * ( pow(k,2) + 2 ) ) << endl;
        } else if (cin && n>1){
            while (k <= n){
                formSum = formSum + ( k + 1 ) / ( pow(k,2) * ( pow(k,2) + 2 ) );
                k++;   
            }
            cout << setprecision(15) << formSum << endl;
        } 
    } else if (cin && choiceUser==2) {
        // * б)
        formSum = 0.0;
        k = 1;
        cout << "Ok, now enter E from 0.000001 to 0.87: ";
        cin >> E;
    
        if (E < 0.87 && E > 0.000001 && cin) {
            while (formSum < E) {
                formSum = formSum + ( k + 1 ) / ( pow(k,2) * ( pow(k,2) + 2 ) );
                k++;
            }
            cout << formSum << " Sum of the whole series" << endl;
        } else if (E > 0.87 || E < 0.000001) {
            cout << "Invalid number entered" << endl;
        }
        else {
            cout << "something is wrong" << endl;
        }
    } else {
        cout << "I only asked to enter 1 or 2" << endl;
    }
    

    system("pause>nul");
    
}