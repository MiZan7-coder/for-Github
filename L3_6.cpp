#include<iostream>
using namespace std;
int main(){
    int start, end,prime=0;
    cout << "Starting: ";
    cin >> start;
    cout << "Ending: ";
    cin >> end;
    for(int i=start ; i<=end; i++){
        int flag =1;
     for (int j=2; j<i; j++){
        if(i%j==0){
            flag=0;
            
        }
        
     }
     if(flag==1){
        if(i==1)
        continue;
            prime++;
            cout<< i<< " ";
        }
    }
    cout <<endl<<"prime: "<< prime;
}