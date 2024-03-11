/*
** Pila.cpp
** Classe Vettore - Chen JinXin - 11/03/2024
*/
#include <iostream>
using namespace std;

class Pila // Nel vettore aggiunge in fila, nell'ordine. Invece la pila può avere push e pop.Struttura dati come una pila di documento sulla scrivania.
{
    // due delle 3 grandi linguaggi caratteristiche,delle ogenti deviniti classi,information hiding.
    // classe:un insieme di grupetti di metodi e attributi.
    // private:usati solo nella classe
    // public:possono essere chiamati anche nell'esterno della classe
    // possonoessere accedute dalle classe o sottoclasse.
private: // modificatori e disibilità
    int size, len, delta;
    int *v; // Trova spazio per size elementi e assegna a v.

public:
    Pila(int size, int delta)
    {
        this->size = size; // this èun puntatore a se stessi. utili quando devo chiamare l'attributo con lo stesso nome.
        this->delta = delta;
        len = 0;
        v = new int[size];
    }

    void push(int n)
    {
        if (len == size)
        {
            int *nuovov = new int[size + delta];
            for (int i = 0; i < size; i++)
                nuovov[i] = v[i];
            size += delta;
            /*cout<<"Il vettore è pieno"<<endl;
            return;*/
            delete[]v;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }
    int pop(){
        if(len==0){ cout <<"\nERRORE Pila Vuota \n"; return 0;}
        return v[--len];
    }
    
    int getElement(int index)
    {
        return v[index];
    }
    int setElement(int index, int newvalue)
    { // prendi il decimo elemento e sostituisce
        v[index] = newvalue;
    }
    void print()
    {
        cout << "Contenuto del Pila: ";
        for (int i = 0; i < len; i++)
            cout << v[i] << " ";
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    Pila vett(10, 10); // ogni vett contiene un add. se metto 1 diventa full ,il 333 non entra.
    for (int i = 0; i < 100; i++)
        vett.push(i);
    for (int i = 0; i < 110; i++)
    {
        cout<<vett.pop()<<" ";
    }
    //vett.print();//toglie gli ultimi 10 elementi;
    
}
