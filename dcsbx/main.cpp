#include <iostream>

using namespace std;
class pentagon
{
public:
    string F_33;
    pentagon(string f="jawny")
    {
        F_33=f;
        cout << "wartoœæ " << F_33;
    }

    friend class bialy_dom;
    void wyswietl()
    {
        cout << "wartosc f_35 wynosi: " << F_33;
    }
};

class bialy_dom
{
public:
    void zmien(pentagon p)
    {
        cout << " dostaliœmy od klasy wartoœæ: " << p.F_33;


        p.F_33=" tajny";
    }

};

int main()

{
    setlocale(LC_ALL, "");

pentagon P1;
    bialy_dom B1;
    B1.zmien(P1);
    P1.wyswietl();


    return 0;
}
