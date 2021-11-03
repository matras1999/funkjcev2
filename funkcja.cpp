#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a , b ,c ,msc1,msc0,delta;
    cout << "Program do obliczania miejsc zerowych funkcji kwadratowej." << endl;
    cout << "Podaj a:";
    cin >> a;
    if (a==0)
    {
        cout << "a nie moze byc 0!";
        return 0;
    }
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >>c;
    delta = (b*b)-4*a*c;
    msc0=(-b-sqrt(delta))/2*a;
    msc1=(-b+sqrt(delta))/2*a;
    if(delta<0)
    {
        cout << "Brak miejsc zerowych!";
        return 0;
    }
    if (delta==0)
    {
        cout << "Funkca ma jedno miejsce zerowe jakim jest: " << -b/2*a << endl;

    }

    else
    {
        cout << "Miejsca zerowe funkcji to: " << msc0 << " ," << msc1;
    }




    return 0;
}
