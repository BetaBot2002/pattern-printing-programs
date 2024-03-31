/*

   A
  ABA
 ABCBA
ABCDCBA

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter:";
    cin >> n;
    char charToPrint='A'-1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= (n-i); j++){
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++){
            if(j>i) cout << (char)(charToPrint+(2*i)-j);
            else cout << (char)(charToPrint+j);
        }
        for (int j = 1; j <= (n-i); j++){
            cout << " ";
        }
        cout << "\n";
    }
}