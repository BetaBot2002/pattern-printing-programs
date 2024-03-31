/*

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter:";
    cin >> n;
    int valToPrint=1;
    for (int i = 1; i <= n; i++){
        valToPrint=!(i%2==0);
        for (int j = 1; j <=i; j++){
            cout << valToPrint << " ";
            valToPrint=!valToPrint;
        }
        cout << "\n";
    }
}