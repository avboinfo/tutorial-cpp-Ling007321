/*
** prova_struct.cpp
** Author: IAV 3CIN
** 28/02/2021
*/

#include <iostream>

using namespace std;

/* Il tipo di dato "struct" serve per memorizzare dati di tipi uguali o diversi
** nella stessa struttura, per poter accedere a ciascuno dei membri 
** attraverso il nome unico della struttura.
*/

struct persona
{
    string nome;
    int eta;
    int data;
};

typedef struct { int uno; int due;} COPPIA;
//typedef int numeroanni;
typedef struct {int tre;int quattro;}DATA;


int main()
{
  //numeroanni piccolo=6; // soppranome a un tipo particolare
  struct persona gigi,gigietto;
  COPPIA coppia_eta;
  DATA coppia_data;
  coppia_data.tre = 2007;
  coppia_data.quattro = 20017;

  coppia_eta.uno = 17;
  coppia_eta.due = 7;
  gigi.nome = "Luigi";
  gigi.eta= coppia_eta.uno;
  gigietto.nome = "Luigino";
  gigi.data = coppia_data.tre;
  gigietto.data=coppia_data.quattro;
  gigietto.eta= coppia_eta.due;
  cout <<  "Gigi si chiama "<<gigi.nome <<" , ha "<<gigi.eta<<" anni "<<" ed è nato nel "<<gigi.data<<endl;
  
  cout <<  "Gigietto si chiama "<<gigietto.nome <<" , ha "<<gigietto.eta<<" anni "" anni "<<" ed è nato nel "<<gigietto.data<<endl;
  return 0;
}
