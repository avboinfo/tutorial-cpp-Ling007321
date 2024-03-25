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
    int somma = sommaN(10, 15);
    cout << somma;

    return 0;
}
