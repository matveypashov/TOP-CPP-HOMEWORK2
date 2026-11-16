#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int emkost[2]{ 300, 1000 };
    int nomer;
    int rastAB;
    int rastBC;
    int ves;

    cout << "Vvedite nomer samoleta: ";
    cin >> nomer;
    if (nomer != 1 && nomer !=2)
    {
        cout << "Net takogo samoleta! (Napishite 1 or 2)";
        return 0;
    }
    
    cout << "Vvedite rastouanie ot A do B: ";
    cin >> rastAB;
    cout << "Vvedite rastouanie ot B do C: ";
    cin >> rastBC;
    cout << "Vvedite ves gryza: ";
    cin >> ves;
    int rashod = 0;
    if (nomer == 1)
    {
        if (ves <= 750) {
            rashod = 1;
        }
        else if (ves <= 1500) {
            rashod = 4;
        }
        else if (ves <= 2000) {
            rashod = 7;
        }
        else {
            cout << "Samolet ne podnimaet bolshe 2000 kg";
            return 0;
        }
    }
    if (nomer == 2)
    {
        if (ves <= 1000) {
            rashod = 2;
        }
        else if (ves <= 2000) {
            rashod = 4;
        }
        else if (ves <= 3000) {
            rashod = 6;
        }
        else {
            cout << "Samolet ne podnimaet bolshe 3000 kg";
            return 0;
        }
    }
    int bak = emkost[nomer - 1];
    int foulAB = 0;
    int foulBC = 0;
    foulAB = rastAB * rashod;
    foulBC = rastBC * rashod;
    if (foulAB > bak || foulBC > bak)
    {
        cout << "Polet ne vozmozen! Ne Xvatit topleva";
        return 0;
    }
    int ostatok = 0;
    ostatok = bak - foulAB;
    if (ostatok >= foulBC)
    {
        cout << "0 litrov dozapravki";
    }
    else 
    {
      cout << "Nyzno dozapravit: " <<  foulBC - ostatok << " litrov";
    }

}
