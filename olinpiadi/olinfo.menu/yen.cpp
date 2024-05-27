#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <vector>

using namespace std;
// dichiara i vettori e le variabili che servono per il nostro problema e li inizializza con i dati del file
int B, N;
vector<int> P(1);

vector<int> allyoucaneat()
{
    vector<int> R(1);

    vector<vector<int>> plates;
    for (int i = 0; i < P.size(); i++)
    {
        if (P[i] > B)
            continue;
            int remain=B;
        vector<int> current;
        current.push_back(P[i]);
        remain -=P(i);  
        for(int j=i+1;j<P.size();j++){
            if(P[j]>remain)continue;
            current.push_back(P[j]);

            remain -=P[j];

        }
        if(remain==0) return current;
        plates.push_back(current);
    }
    for (int i = 0; i < P.size; i++)
        cout << p[i] << " ";
    cout << endl;
    return R;
}

int main()
{
    // apre il file di input e output
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    // carica dalla prima riga del input i valori di alcune variabili
    fin >> N >> B;
    P.resize(N);
    // CARICA DALLE ALTRE RIGHE DDEL FILE DI INPUT IL VETTORE DEI PREZZI
    for (int i = 0; i < N; i++)
    {
        fin >> P(i);
    }

    vector<int> R = allyoucaneat();
    // salva sul file di output i valori calcolati con la funzione
    for (int i = 0; i < R.size(); i++)
    {
        fout << R[i];
    }
    fin.close();
    fout.close();
}