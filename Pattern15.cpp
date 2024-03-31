/*

A B C D E
A B C D
A B C
A B
A

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter:";
    cin >> n;
    char charToPrint='A'-1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= (n-i+1); j++){
            cout << (char)(charToPrint+j) << " ";
        }
        cout << "\n";
    }
}