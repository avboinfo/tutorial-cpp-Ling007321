/*
**Matrice.cpp una classe definita da noi che spupazza le matrice come nessuno mai
**Chen JinXin _13/04/2024
*/

#include<iostream>
using namespace std;

class Matrice
{
private:
    int m[10][10];

public:
    Matrice(int n)
    {
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                m[i][j] = n;
    }

    void stampa()
    {
        cout << endl
             << "----------------------------" << endl;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << m[i][j] << "\t";
            }
            cout << endl
                 << "----------------------------"<<endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Matrice m1=Matrice(5);
    m1.stampa();
    return 0;
}
