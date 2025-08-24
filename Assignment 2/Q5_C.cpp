// 5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 
// C𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices, 
// implement an efficient way that reduces the space requirement.
//                      c) Lower triangular Matrix.  
#include<iostream>
using namespace std;

class Lower{
   int n;
   int *A;
   public:
    Lower(int n){
        this->n= n;
        A = new int[((n*n+1)/2)];}

    void set(int i, int j, int x);
    void display();

    ~Lower(){
        delete []A;
    }
};
void Lower:: set (int i, int j, int x){
    if (j<=i) A[((i*(i-1))/2)+j-1]=x;
}

void Lower:: display(){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (j<=i) cout<<A[((i*(i-1))/2)+j-1]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

int main(){
    Lower l(3);
    l.set(1,1,1);
    l.set(2,1,4);
    l.set(2,2,2);
    l.set(3,1,5);
    l.set(3,2,6);
    l.set(3,3,3);
    l.display();
}