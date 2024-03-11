/*
** Vettore.cpp
** Classe Vettore - Chen JinXin - 04/03/2024
*/
#include <iostream>
using namespace std;

class Vettore
{
//due delle 3 grandi linguaggi caratteristiche,delle ogenti deviniti classi,information hiding.
//classe:un insieme di grupetti di metodi e attributi.
//private:usati solo nella classe
//public:possono essere chiamati anche nell'esterno della classe
//possonoessere accedute dalle classe o sottoclasse.
private: // modificatori e disibilità
    int size, len, delta;
    int *v; // Trova spazio per size elementi e assegna a v.

public:
    Vettore(int size,int delta )
    {
        this->size = size; //this èun puntatore a se stessi. utili quando devo chiamare l'attributo con lo stesso nome.
        this->delta = delta;
        len = 0;
        v = new int[size];
    }

    void add(int n)
    {
        if (len == size)
        {
            int *nuovov = new int[size + delta];
            for (int i = 0; i < size; i++)
                nuovov[i] = v[i];
            size += delta;
            /*cout<<"Il vettore è pieno"<<endl;
            return;*/
            v = nuovov;
        }
        v[len] = n;
        len++;
    }
    int getElement(int index){
        return v[index];
    }
    int setElement(int index,int newvalue){// prendi il decimo elemento e sostituisce
        v[index] = newvalue;
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
    Vettore vett(10,10); // ogni vett contiene un add. se metto 1 diventa full ,il 333 non entra.
    for (int i = 0; i < 100; i++)
        vett.add(i);

    cout<<vett.getElement(10)<<endl; //stampare il decimo elemento
    vett.setElement(10,333);//nel decimo elemento mette 333

    vett.print();
}
