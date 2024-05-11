// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i)
        cin >> P[i];

    int K = 0;
    for(int j=0;j<N;j++){
        if(P[j]>P[j+1]){
        P[j]=P[j+N];
        K++;

    }


    }
    
    // INSERT YOUR CODE HERE


    cout << K << endl;

    return 0;
}
