#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float l = 0;
    float t = 0;
    
    

    cout << "Обчислення швидкості бігу" << endl;
    cout << "Введіть довжину дістанції (метрів) = ";
    cin >> l;
    cout << "Введіть час (мін,сек) = ";
    cin >> t ;
    cout << " " << endl;
    int tm = t;
    int ts = (t - tm) * 100;
    float sek = (tm*60 + ts);
    double km = l / 1000;
    double h = (sek / 3600);
    double s = (km / h) ;
    cout << "Дістанція: " << l << " м" <<endl;
    cout <<tm << " хв " << ts <<" сек = " <<sek <<"сек" <<endl;
    cout << "Ви бігли зи швидкістю " << s << " км/год" << endl;
    

    

    _getch();
    return 0;
}