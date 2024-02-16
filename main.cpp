#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float s = 0;
    float t = 0;
    float g = 0;
   
    cout << "Обчисліть пройдену відстань" << endl;
    cout << "Введіть швидкість метри на секунду та натисніть Enter" << endl;
    cin >> s;
    cout << "Введіть час в секундах та натисніть Enter" << endl;
    cin >> t;
    cout << "Введіть прискорення та натисніть Enter" << endl;
    cin >> g;
    double l = s*t+(g*t*t)/2;
    
    cout << "Пройдена відстань дорівнює - " << l <<"метрів" << endl;
    

    _getch();
    return 0;
}