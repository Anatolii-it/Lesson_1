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
   
    cout << "�������� �������� �������" << endl;
    cout << "������ �������� ����� �� ������� �� �������� Enter" << endl;
    cin >> s;
    cout << "������ ��� � �������� �� �������� Enter" << endl;
    cin >> t;
    cout << "������ ����������� �� �������� Enter" << endl;
    cin >> g;
    double l = s*t+(g*t*t)/2;
    
    cout << "�������� ������� ������� - " << l <<"�����" << endl;
    

    _getch();
    return 0;
}