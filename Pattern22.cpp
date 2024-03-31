/*

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter:";
    cin >> n;
    int counter;
    int valToPrint;
    for (int i = 1; i <= n; i++){
        counter=i-1;
        valToPrint=n;
        for (int j = 1; j <= (2*n-1); j++){
            cout << valToPrint << " ";
            if((2*n-1)-j <= (i-1)){
                valToPrint++;
            }else if(counter>0){
                valToPrint--;
                counter--;
            }
        }
        cout << "\n";
    }
    for (int i = n-1; i >=1; i--){
        counter=i-1;
        valToPrint=n;
        for (int j = 1; j <= (2*n-1); j++){
            cout << valToPrint << " ";
            if((2*n-1)-j <= (i-1)){
                valToPrint++;
            }else if(counter>0){
                valToPrint--;
                counter--;
            }
        }
        cout << "\n";
    }
}