/*
**BattleShip.cpp una classe per giocare a battaglia navale
**Chen JinXin _20/04/2024
*/

//Statico: Esiste da sempre ,come il sole. per tutti o non solo
#include "BattleShip.cpp"
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Gioco della battaglia navale_buon divertimento"<<endl;
    BattleShip gioco=BattleShip();
    gioco.play();
    cout<<"Game over"<<endl;
    return 0;
}

