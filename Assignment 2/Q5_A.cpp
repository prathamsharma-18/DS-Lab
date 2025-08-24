// 5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 
// C𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices, 
// implement an efficient way that reduces the space requirement. 
//                              (a) Diagonal Matrix.
#include<iostream>
using namespace std;

class Diagonal{
    int n;
    int *A;
public:
     Diagonal(int n){
        this->n= n;
        A= new int[n];}   

    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    
    ~Diagonal(){
        delete []A;
    }
};

void Diagonal:: set(int i, int j,int x){
        if (i==j) 
            A[i]=x;
        }

int Diagonal:: get(int i, int j) {
    if (i==j)
        return A[i];
    return 0;}

void Diagonal::display(){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==j) cout <<A[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main(){
    Diagonal d(3);
    d.set(1,1,9);
    d.set(2,2,8);
    d.set(3,3,7);
    d.display();

}