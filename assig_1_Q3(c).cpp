#include<iostream>
using namespace std;    


int main(){
    int r,c,i,j,k;

    cout<<":::::::::::  Matrix 1  :::::::::;"<<endl;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    int a1[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> a1[i][j];
        }
    }

    cout << "The elements of the matrix are: "<<endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout<<":::::::::::  Transpose of Matrix is :::::::::;"<<endl;
    for(j = 0; j < c; j++) {
        for(i = 0; i < r; i++) {
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }}