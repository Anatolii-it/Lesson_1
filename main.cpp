#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float L = 0;
    cout << "������ ����� ��������� 14,25" << endl;
    cin >> L;
    float x = L * 100;
    int grn = L;
    int kop = (x-grn*100);
    cout <<grn<<" ��� " <<kop<<" ��� " << endl;

    _getch();
    return 0;
}