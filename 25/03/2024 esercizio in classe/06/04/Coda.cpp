/*
** Coda.cpp
**  - Chen JinXin - 06/04/2024
**3°CIN
*/

#include <iostream>
using namespace std;

class Coda
{

private:
    string nome;
    int size, start, stop;
    int *v; // Trova spazio per size elementi e assegna a v.

public:
    Coda(string nome, int size)
    {
        this->nome = nome;
        this->size = size; // this èun puntatore a se stessi. utili quando devo chiamare l'attributo con lo stesso nome.
        v = new int[size];
        start = stop = 0;
    }

    void enter(int val)
    {
        if (stop >= size)
        {
            cout << "Coda piena!";
            return;
        }
        v[stop] = val;
        stop++;
    }

    int exit()
    {
        if (start >= stop)
        {
            cout << "Coda vuota!";
            return 0;
        }
        int val = v[start];
        start = start + 1;
        return val;
    }

    void stampa()
    {
        cout << "Numeri in coda: " << nome << " ; ";
        for (int i = start; i < stop; i++)
            cout << v[i] << endl;
        cout << endl;
    }
};