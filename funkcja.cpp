#include <iostream>

using namespace std;

int main()
{
    int a , b  ,x,msc0;
    cout << "Program do obliczania miejsc zerowych funkcji liniowej." << endl;
    cout << "Podaj a:";
    cin >> a;
    if (a==0)
    {
        cout << "a nie moze byc zerem!";
        return 0;
    }
    cout << "Podaj b: ";
    cin >> b;

    msc0=(-b)/a;
    cout << "Miejsce zerowe funkci to: " << msc0;




    return 0;
}
