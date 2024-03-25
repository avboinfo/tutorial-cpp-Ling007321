/*25/03/2024
**Chen JinXin
**3°CIN
**ES N°15 P
*/
#include <iostream>

using namespace std;

int sommaN(int n, int n1)
{
    int somma = 0;
    int som = 0;
    for (int i = n; i <= n1; i++)
    {

        somma = somma + i;
    }

    return somma;
}

int main(int argc, char const *argv[])
{
    int n,n1;
    cout<<"Inserisci il primo num: "<<endl;
    cin>>n;
    cout<<"Sec: "<<endl;
    cin>>n1;
    int somma = sommaN(n, n1);
    cout << somma;

    return 0;
}
