/*
**BattleShip.cpp una classe per giocare a battaglia navale
**Chen JinXin _20/04/2024
*/

#include <iostream>
#include "BattleField.cpp"
using namespace std;
// DIM,SHIP,MISS,HIT,VOID
class BattleShip
{
private:
    BattleField mappa;
    BattleField campo;

public:
    BattleShip()
    {
        mappa = BattleField(VOID);
        campo = BattleField(VOID);

        srand(time(NULL));

        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }
    void play()
    {

        while (true)
        {
            mappa.stampa();
            if (!playHand())
                break; //!=not playHand== if playHand ==False
        }

        /* for (int i = 0; i < 20; i++)
         {
             int x = rand() % DIM;
             int y = rand() % DIM;
             if (campo.get(x, y) == HIT)
                 continue;
             if (campo.get(x, y) == SHIP)
             {
                 mappa.put(x, y, HIT);
                 campo.put(x, y, HIT);
             }
             else
                 mappa.put(x, y, MISS);
         }
         */
        mappa.stampa();

        playHand();

        mappa.stampa();
        campo.stampa();
    }

    bool playHand()
    {
        cout << "Inserisci le coordinate di  riga e colonna tra (1 -" << DIM << ") in cui sganciare la bomba:  (0 per terminare): " << endl;
        int x, y;
        cin >> x;

        if (x <= 0||x>DIM)
            return false;
        else
            x--;
        cin >> y;

        if (y <= 0||x>DIM)
            return false;
        else
            y--;
        if (campo.get(x, y) == SHIP)
        {
            mappa.put(x, y, HIT);
            campo.put(x, y, HIT);
        }
        else
            mappa.put(x, y, MISS);
            return true;
    }
    
    bool gameOver(){
        
        for(int i=0;i<DIM;i++){
            for(int j=0;j<DIM;j++){
                if(campo.get(i,j)==SHIP){
                    
                    return false;
                }
            }
        }
        return true;
    }

};
