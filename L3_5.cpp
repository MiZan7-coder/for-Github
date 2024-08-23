#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int arr[7];
    for(int i=0; i<7; i++){
        cin >> arr[i];
    }
    cout << "sum: ";
    int s,s2=0;
    cin >> s;
    for(int i=0; i<7; i++){
        if(s2+arr[i]<=s){
            s2=s2+arr[i];
            v.push_back(arr[i]);
        }
        
    }
    //cout << s2 << endl;
    if(s==s2){
        cout << "True"<< endl;
        cout << "Subset: ";
        for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    }
    else
    cout << "False" <<endl;
}