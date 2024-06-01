// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
//  uncomment the following lines if you want to read/write from files
  ifstream cin("input.txt");
  ofstream cout("output.txt");
    int t;
    int a;
    int orelavoro;
    int rimasto;
    long long A, B, T;
    cin >> A >> B >> T;

    
    a=B-A;
    orelavoro=24-a;
    rimasto = T-(orelavoro*2);

   
    // insert your code here

    cout << rimasto << endl; // print the result

    return 0;
}
