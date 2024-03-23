#include "Master.cpp"

using namespace std;
int main(int argc, char const *argv[])
{
    mastermind prova = mastermind();

    std::cout<<"Benvenuto al gioco mastermind!"<<std::endl;
    
    prova.nuova_giocata();
    prova.risultato_mossa();
    
    do{
        prova.nuova_giocata();
        prova.risultato_mossa();
    }while (prova.puoi_continuare());
    prova.situazione_finale();

    return 0;
}
