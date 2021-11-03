#include <iostream>

using namespace std;

int main()
{
    int a , b  ,x,msc0;
    cout << "Program do obliczania miejsc zerowych funkcji liniowej." << endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    if (a==0&&b==0)
    {
        cout << "Funkcja ma nieskonczenie wiele  miejsc zerowych!" << endl;
    }
    if (a==0&&b>0)
    {
        cout << "Funkcja nie ma miejsca zerowego!" << endl;
    }
    msc0=(-b)/a;
    cout << "Miejsce zerowe funkci to: " << msc0;




    return 0;
}

