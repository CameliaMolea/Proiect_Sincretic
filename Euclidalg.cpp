#include<iostream>

using namespace std;


int cmmdc(int a, int b)
{
    if (b != 0)
        return cmmdc(b, a % b);
    else
        return a;
}


int main()
{
    int a, b;

    cout << "Introduceti primul numar intreg pozitiv: \n";
    cin >> a;
    cout << "Introduceti al doilea numar intreg pozitiv: \n";
    cin >> b;
    cout << "Cel mai mare divizor comun dintre " << a << " si " << b << " este: " << cmmdc(a, b) <<"\n";
    return 0;
}



