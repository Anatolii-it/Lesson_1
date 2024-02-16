#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int s = 0;
    

    cout << "¬вед≥ть секунди та натисн≥ть Enter " << endl;
    cin >> s;
    int g = s / 3600;
    int m = (s % 3600) / 60;
    int sec = s % 60;
    cout << " в " << s << " секундах ";
    cout << g << " год " << m <<" хв " << sec <<" сек" << endl;
    

    _getch();
    return 0;
}