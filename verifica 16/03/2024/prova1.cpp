/*
**Verifica su c++
**16/03/2024
**3°CIN
**Chen JinXin
**Prova 1
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void genera(int griglia[10][10])
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            num = rand() % 100;
            griglia[i][j] = num;
        }
    }
}
void stampa(int griglia[10][10])
{

    for (int i = 0; i < 10; i++)
    {
        cout << "\n";
        for (int j = 0; j < 10; j++)
        {
            cout << griglia[i][j] << " "
                 << "\t";
        }
    }
}

/*void controlla_colonna(int griglia[10][10],int col)
{
    int n = 0;
    int k = 0;
    cout << "Inserisci un numero  tra 0 e 100: " << endl;
    cin >> n;
    for (int i = 0; i < 100; i++)
    {
        int cella = griglia[i][col];
        if (cella == 1)
            k++;
    }
    cout<<"Il tuo numero preferito nelle colonne sono "<<k<<"Volte"<<endl;
}
*/


void controlla_griglia(int griglia[10][10],int i,int j)
{
    int n = 0;
    int k = 0;
    cout << "Inserisci un numero a piacere tra 0 e 100: " << endl;
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            
        
        
        int cella = griglia[i][j];
        if (cella == n)
        {
            k++;
        }
        }
    }
    cout << "Il tuo numero preferito ci sono : " << k << "volte" << endl;
}
void controlla_diagonale(int griglia[10][10])
{
    int n;
    int j = 0;
    cout << "Inserisci un numero a piacere tra 0 e 100: " << endl;
    cin >> n;

    for (int i = 0; i < 10; i++)
    {
        int cella = griglia[i][i];

        if (cella == n)
        {
            j++;
        }
    }
    cout << "Il tuo numero in diagonale ci sono : " << j << "volte" << endl;
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int griglia[10][10];
    genera(griglia);
    stampa(griglia);
    controlla_griglia(griglia, 10, 10);
   
    //for(int i=0;i<10;i++) controlla_colonna(griglia,i);   
        
    controlla_diagonale(griglia);

    return 0;
}
