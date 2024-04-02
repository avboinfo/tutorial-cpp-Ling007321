/*
**Esercizio per casa pag A257 N16 per 03/04/2024
**3°CIN
**Chen Jin Xin
*/

include<iostream> using namespace std;

/*int ricorsione(int v[], int a)
{
    int r;
    r = v[a] + a;
    if (r == 0)
        return a;
    else
        return ricorsione(a, r)
}
*/
int ricors(int n)
{
    if (n == 1)
        return n;
    else
        return (n + ricors(n - 1));
}
int main(int argc, char const *argv[])
{
    cout << ricorsione;
    return 0;
}
