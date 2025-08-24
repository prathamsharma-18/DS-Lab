// 5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 
// C𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices, 
// implement an efficient way that reduces the space requirement. 
//                      b) Tri-diagonal Matrix. 


#include<iostream>
using namespace std;

class Tri_Diag{
    int n;
    int *A;
    public:
        Tri_Diag(int n){
            this->n=n;
            A= new int [3*n-2];
        }

        void set (int i, int j, int x){
            if (i-j==1) A[i-2]=x;
            else if(i==j) A[n-1+i-1]=x;
            else if(j-i==1) A[n-1 +n +j]=x;
        }

        void display(){
            for (int i=1; i<=n; i++){
                for (int j=1; j<=n; j++){

                    if (i-j==1) cout<<A[i-2]<<" ";

                    else if(i==j) cout<<A[n-1+i-1]<<" ";

                    else if(j-i==1) cout<<A[n-1 +n +j]<<" ";

                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }
        ~Tri_Diag(){
            delete []A;
        }
};
int main(){
    Tri_Diag t(5);

    // lower diagonal
    t.set(2,1,1);
    t.set(3,2,2);
    t.set(4,3,3);
    t.set(5,4,4);
    // main diagonal
    t.set(1,1,1);
    t.set(2,2,2);
    t.set(3,3,3);
    t.set(4,4,4);
    t.set(5,5,5);
    // upper diagonal
    t.set(1,2,1);
    t.set(2,3,2);
    t.set(3,4,3);
    t.set(4,5,4);

    t.display();
    return 0;
}