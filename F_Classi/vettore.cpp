/*
** Vettore.cpp
** Classe Vettore - Chen JinXin - 04/03/2024
*/
#include <iostream>
using namespace std;

class Vettore
{

protected:
    int dim, len;
    int *v; // Trova spazio per dim elementi e assegna a v.

public:
    Vettore(int d)
    {
        dim = d;
        len = 0;
        v = new int[dim];
    }

    void add(int n)
    {
        if (len == dim)
        {
            cout << "Il vettore è pieno" << endl;
            return;
        }
        v[len] = n;
        len++;
    }

    void print()
    {
        cout << "Contenuto del vettore: ";
        for (int i = 0; i < len; i++)
            cout << v[i] << " ";
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    Vettore vett(2);
    vett.add(33);
    vett.add(333);
    vett.print();

}

