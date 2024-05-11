
#include <vector>
using namespace std;

int trova_massimo(int N, vector<int> V)
{
    int max=V[0];
    for(int item:V){//for(int i=0;i<i;i++) int max=v[i];
        if(item>max)
        max=item;
    }
  

    // Inserisci il tuo codice qui

    return max;
}
