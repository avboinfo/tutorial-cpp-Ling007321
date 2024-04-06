/*
**Es 16 sul libro
**Chen JinXin
**3°CIN
**06/04/2024
*/

#include<iostream>


#include"coda.cpp"

using namespace std;

class ufficio_postale{
    public:
    int spedizione,ricezione,finanziario,cliente;
    Coda S=Coda(1000);
    Coda R=Coda(1000);
    Coda F=Coda(1000);
   
    
    void sportelli(){
        int n;
        cout<<"Buongiorno,benvenuto alla posta italiana, premere 1 per la spedizione,2 per la ricezione,3 per finanziario : "<<endl;
        cin>>n;
        
        if (n==1){
            Coda S=Coda(1000);
            S.stampa();
            S.enter(100);
            S.enter(1);
            S.enter(2);
            S.exit();
            S.enter(3);
            S.stampa();

        }
        else if (n==2){
            Coda R=Coda(1000);
            R.stampa();
            R.enter(100);
            R.enter(101);
            R.enter(102);
            R.exit();
            R.enter(103);
            R.stampa();
           
        }else if (n==3){
            int p;
            cout<<"Possiedi la carta PostePay?,1 per si,2 per no"<<endl;
            cin>>p;
            if (p==1){
            Coda F=Coda(1000);
            F.stampa();
            F.enter(100);
            F.enter(201);
            F.enter(202);
            F.exit();
            F.enter(203);
            F.stampa();
            }else{
                cout<<"Per fare il finanziario hai bisogno della carta PostePay. "<<endl;
                return ;
            }
            
        }
        }
    

    
};



int main(int argc, char const *argv[])
{
    ufficio_postale x;
    x.sportelli();
   


    return 0;
}






