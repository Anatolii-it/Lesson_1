#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float l = 0;
    float t = 0;
    
    

    cout << "���������� �������� ���" << endl;
    cout << "������ ������� �������� (�����) = ";
    cin >> l;
    cout << "������ ��� (��,���) = ";
    cin >> t ;
    cout << " " << endl;
    int tm = t;
    int ts = (t - tm) * 100;
    float sek = (tm*60 + ts);
    double km = l / 1000;
    double h = (sek / 3600);
    double s = (km / h) ;
    cout << "ĳ�������: " << l << " �" <<endl;
    cout <<tm << " �� " << ts <<" ��� = " <<sek <<"���" <<endl;
    cout << "�� ���� �� �������� " << s << " ��/���" << endl;
    

    

    _getch();
    return 0;
}