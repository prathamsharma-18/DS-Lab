#include<iostream>
using namespace std;

int main() {
    int i, j;
    int m, n;
    cout << "Enter the dimensions :: " << endl;
    cin >> m >> n;

    int A[m][n];
    int size = 0;

    cout << "Enter the elements: " << endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> A[i][j];
            if (A[i][j] != 0)
                size++;
        }
    }

    int sp[size + 1][3]; 
    sp[0][0] = m;       
    sp[0][1] = n;         
    sp[0][2] = size;      

    int row = 1; 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != 0) {
                sp[row][0] = i;
                sp[row][1] = j;
                sp[row][2] = A[i][j];
                row++;
            }
        }
    }

    cout << "Sparse matrix: " << endl;
    for (i = 0; i <= size; i++) {  
        for (j = 0; j < 3; j++) {
            cout << sp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
