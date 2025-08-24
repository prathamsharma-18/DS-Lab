// 5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 
// C𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices, 
// implement an efficient way that reduces the space requirement.
//(d) Upper triangular Matrix.  
#include<iostream>
using namespace std;

class Upper{
   int n,p;
   int *A;
   public:
    Upper(int n){
        this->n= n;
        p=((n*(n+1))/2);
        A = new int[p];}

    void set(int i, int j, int x);
    void display();

    ~Upper(){
        delete []A;
    }
};
void Upper:: set (int i, int j, int x){
    if (j>=i) A[(n*(i-2))-((i-1)*(i-2))/2  +j-i]=x;
}

void Upper:: display(){
   

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (j>=i) cout<<A[(n*(i-2))-((i-1)*(i-2))/2 +j-i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

int main(){
    Upper l(3);
    l.set(1,1,1);
    l.set(1,2,4);
    l.set(1,3,5);
    l.set(2,2,2);
    l.set(2,3,6);
    l.set(3,3,3);
    l.display();
}