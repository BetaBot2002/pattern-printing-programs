/*

E
D E
C D E
B C D E
A B C D E

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter:";
    cin >> n;
    char charToPrint='A'-1+n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << (char)(charToPrint-(i-j)) << " ";
        }
        cout << "\n";
    }
}