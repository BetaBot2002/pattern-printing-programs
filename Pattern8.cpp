/*

*********
 *******
  *****
   ***
    *

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter:";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=i-1; j++){
            cout << " ";
        }
        for (int j = 1; j <=2*(n-i+1)-1; j++){
            cout << "*";
        }
        for (int j = 1; j <=i-1; j++){
            cout << " ";
        }
        cout << "\n";
    }
}