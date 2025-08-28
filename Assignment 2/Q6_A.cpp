// Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// Transpose of a matrix.
#include <iostream>
using namespace std;

int main(){

    int i,j;
    int m,n;
    int size=0;

    cout<<"enter the dimensions : (row),(column)";
    cin>>m>>n;

    int a[m][n];
    cout<<"enter the elements :"<<endl;

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin>>a[i][j];
            if (a[i][j]!=0) size++;

        }
    }
    int sp[size+1][3];
    sp[0][0]=m;
    sp[0][1]=n;
    sp[0][2]=size;

    int row=1;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if (a[i][j]!=0){
                sp[row][0]=i;
                sp[row][1]=j;
                sp[row][2]=a[i][j];
                row++;
            }
        }
    }

    cout<<"the original sparse matrix is : "<<endl;
    for(i=0; i<size+1; i++){
        for(j=0; j<3; j++){
            cout<<sp[i][j]<<" ";
        }
        cout<<endl;
    }

    //transpose of sparse matrix::::
    cout<<"transpose of sparse matrix:";

    int res[size+1][3];
    res[0][0]=n;
    res[0][1]=m;
    res[0][2]=size;

    int count=0;
    for(j=0; j<n; j++){
        for(i=1; i<=size; i++){
            if(sp[i][1]==j){
                res[++count][0]=j;
                res[count][1]=sp[i][0];
                res[count][2]=sp[i][2];
            }
        }
    }

    for(i=0; i<size+1; i++){
        for(j=0; j<3; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

}
