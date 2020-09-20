#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>

/* 
    * 5.6. 1. Отредактировать данное предложение, удаляя из него слова, которые
        * встречаются в нём заданное число раз.
        
        
        * One can become a policeman only if he is a brave one

    * 5.6. 2. Написать программу, которая перемещает по указанной строке экрана один заданный
        * символ. Символ должен перемещаться до тех пор, пока не нажата какая-либо клавиша. После
        * полного прохода цвет символа должен измениться. Весь предыдущий текст на экране не должен
        * исчезать!
*/


using namespace std;


void main() {
    // string test = "One can become a policeman only if he is a brave one";
    char testText[] = "One one";

    // TODO которые встречаются в нём заданное число раз
    // TODO Удаление слов

    cout << testText << "\n" << "How many words to remove: ";

    int countDeleteWord;
    cin >> countDeleteWord;

    if (cin && countDeleteWord>0) {

        if (countDeleteWord==0) {
            cout << "You haven't deleted anything" << endl;
            cout << testText << endl;
        } else {
            int lengthText = strlen(testText);
            
            
        }

    } else {
        cout << "Something went wrong";
    }

    system("pause>nul");
}