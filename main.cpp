#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float x = 0;
    cout << "������ �� - ";
    cin >> x;
    int t = x / 7;
    int d = (x  - t * 7);
    cout <<t << " ����  " << d << " ��";



    _getch();
    return 0;
}