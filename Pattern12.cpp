/*

1      1
12    21
123  321
12344321

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter:";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=i; j++){
            cout << j;
        }
        for (int j = 1; j <=2*(n-i); j++){
            cout << " ";
        }
        for (int j = i; j >=1; j--){
            cout << j;
        }
        cout << "\n";
    }
}