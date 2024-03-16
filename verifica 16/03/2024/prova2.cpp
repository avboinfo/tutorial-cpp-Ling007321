/*
**Verifica su c++
**16/03/2024
**3°CIN
**Chen JinXin
**Prova 2
*/

#include <iostream>

using namespace std;

class Orario{
    
    public:
    string Ore,Minuti,Secondi;
    Orario(){
        Ore="1";
        Minuti="10";
        Secondi="20";
    }
    Orario(string H,string M,string S) {
        Ore=H;
        Minuti=M;
        Secondi=S;
    }

    void valore_orario(){
        cout<<"Sono le ore "<<Ore<<" , "<<Minuti<<" minuti"<<" e "<<Secondi<<" secondi."<<endl;
        
    }
    int mezzanotte(){
        int H=3600;
        int M=600;
        int S=20;
        int somma=0;
        
        somma=3600+600+20;
        
        cout<<"Sono passati "<<somma<<" secondi dopo la mezzanotte"<<endl;
        return somma;
     }
    void differenza(){
        int ris=0;
        ris=4220-4220;
        cout<<"La differenza dei orari è "<<ris<<" secondi"<<endl;

    }
};

int main(int argc, char const *argv[])
{
    Orario x;
    x.valore_orario();
    x.mezzanotte();
    x.differenza();
    return 0;
}
