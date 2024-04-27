/*
**27/04/2023
**3CIN
**Chen JinXin
**Olinpiadi-Filmati e Canzoni
*/

#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int T, t;
    cout<<"Inserisci il numero di hard disk : "<<endl;
    cin >> T;

    for (t = 1; t <= T; t++)
    {
        int N, F, C;

        // scrivi in queste variabili la risposta
        int nf, nc;
        cout<<"Inserisci la grandezza dell'hard disk: "<<endl;
        cin >> N ;
        cout<<"Grandezza Film: "<<endl;
        cin>>F;
        cout<<"Grandezza Canzone:  "<<endl;
        cin>>C;

       
        nf=N/F;
       
        nc=(N-(nf*F))/C;
        nc=N%F/C;
       
     

            // RISOLVI QUI IL PROBLEMA!!

            cout << "Case #" << t << ": " << nf << " " << nc << endl;
        }
    }