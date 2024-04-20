/*
**BattleShip.cpp una classe per giocare a battaglia navale
**Chen JinXin _20/04/2024
*/

#include <iostream>
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
        for (int i = 0; i < 20; i++)
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
        mappa.stampa();
        campo.stampa();
    }

    return 0;
};
