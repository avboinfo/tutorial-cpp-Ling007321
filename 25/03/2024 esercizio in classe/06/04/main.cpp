/*
**Es 16 sul libro
**Chen JinXin
**3°CIN
**08/04/2024
*/

#include <iostream>
#include "Coda.cpp"
#include "2024_es_16.cpp"
using namespace std;

int main()
{

    ufficio_postale up = ufficio_postale("Saliceto");
    up.nuovoCliente('r');
    up.nuovoCliente('r');
    up.nuovoCliente('r');
    up.nuovoCliente('r');
    up.chiamaCliente('s');
    up.nuovoCliente('r');
    up.nuovoCliente('r');
    up.nuovoCliente('r');
    up.chiamaCliente('f');
    up.stampaTabellone();
}