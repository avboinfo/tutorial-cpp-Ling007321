/*
** Vettore.cpp
** Classe Vettore - Chen JinXin - 04/03/2024
*/
#include <iostream>
using namespace std;

class Vettore
{

protected:
    int dim, len, delta;
    int *v; // Trova spazio per dim elementi e assegna a v.

public:
    Vettore(int dim,int delta )
    {
        this->dim = dim; //this èun puntatore a se stessi. utili quando devo chiamare l'attributo con lo stesso nome.
        this->delta = delta;
        len = 0;
        v = new int[dim];
    }

    void add(int n)
    {
        if (len == dim)
        {
            int *nuovov = new int[dim + delta];
            for (int i = 0; i < dim; i++)
                nuovov[i] = v[i];
            dim += delta;
            /*cout<<"Il vettore è pieno"<<endl;
            return;*/
            v = nuovov;
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
    Vettore vett(10,2); // ogni vett contiene un add. se metto 1 diventa full ,il 333 non entra.
    for (int i = 0; i < 100; i++)
        vett.add(i);

    vett.print();
}
