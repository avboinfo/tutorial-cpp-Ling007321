// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // uncomment the two following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i)
        cin >> P[i];
        
  int min_idx=0;
    // INSERT YOUR CODE HERE
    for (int i = 0; i < N; i++)
    {
        if (P[i] < P[min_idx])
            min_idx = i;
    }
    int idx, idx_next;
    for (int i = 0; i < N - 1; i++)
    {
        idx = (i + min_idx) % N;
        idx_next = (i + min_idx + 1) % N;
        if (P[idx] > P[idx_next])
        {
            cout << -1 << endl;
            return 0;
        }
        /* code */
    }
    if(min_idx==0){
            cout<<0<<endl;
            return 0;
        }
      

    cout << N - min_idx  << endl;

    return 0;
}
