#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int x = 0;
    while(x>2 || x<1)
    {
    cout<<"MENU"<<endl;
    cout<<"1.Funkca liniowa"<<endl;
    cout<<"2.Funkcja kwadratowa"<<endl;
    cout<<"Wybieram : ";
    cin>>x;
    system("cls");
     }

    switch (x)
    {
       case 1:
            int z1 , z2 ,mscl;
    cout << "Program do obliczania miejsca zerowych funkcji liniowej." << endl;
    cout << "Podaj a:";
    cin >> z1;
    cout << "Podaj b: ";
    cin >> z2;
    mscl = (-z2)/z1;

    cout << "Miejsce zerowe jest rowne: " << mscl << endl;

              break;
       case 2:
            int a , b ,c ,msc1,msc0,delta;
    cout << "Program do obliczania miejsc zerowych funkcji kwadratowej." << endl;
    cout << "Podaj a:";
    cin >> a;
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
        cout << "Funkcja ma jedno miejsce zerowe jakim jest: " << -b/2*a << endl;

    }

    else
    {
        cout << "Miejsca zerowe funkcji to: " << msc0 << " ," << msc1;
    }

              break;
           }


    system("PAUSE");
    return EXIT_SUCCESS;




    return 0;
}
