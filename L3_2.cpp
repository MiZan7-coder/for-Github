#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n=";
    cin >> n;
    if (n==1){
        cout << "0";
        return 0;
    }
    if (n==2){
        cout << "0" << endl << "01";
        return 0;
    }
    else{
        cout << "0" << endl << "01";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==1||i==2){
                continue;
            }
            if((j+i)%2!=0)
            cout << "0";
            else
            cout << "1";
        }
        if(i==1){
                continue;
            }
        cout << endl;
    }
    }
}