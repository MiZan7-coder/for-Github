#include<iostream>
using namespace std;
void pass(int x, int y){
    
    int mat[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>> mat[i][j];
        }
    }

     for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<< mat[i][j]<< " ";
        }
        cout << endl;}
}

int main(){
int m,n;
    cout << "Enter row and colum: ";
    cin >> m >> n;
    pass(m,n);
    
}
    
    