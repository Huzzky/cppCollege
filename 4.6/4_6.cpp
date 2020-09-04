#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <cmath>


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

    float E, sumEn, allSumE;
    float formSum = 0.0;
    int n, k;
    sumEn = 0.0;
    k=1;

    cout << "Hello, User\n" << "Enter the number n to calculate the sum of the first n terms of a given series" <<endl;
    cin >> n;

    while (k <= n){
        formSum = formSum + ( k + 1 ) / ( pow(k,2) * ( pow(k,2) + 2 ) );
        k++;
    }
    cout << formSum << endl;
    
    
}