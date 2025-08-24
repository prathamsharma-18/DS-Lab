// 3) Given an array of n-1 distinct integers in the range of 1 to n, find the missing number 
// in it in a Sorted Array 
// (a) Linear time 
// (b) Using binary search. 
#include<iostream>
using namespace std;

class Missing{
    int n,i,j,k;
    int *A;
    public:
    
    Missing (int a[],int size){

        A= a;
        this->n= size;

        cout<<"Given array:"<<endl;
        for(int i=0;i<size-1;i++){
            cout<<A[i]<<" ";
        }
    cout<<endl;
}

        void Linear (){
            int add=0;
            int sum=0;
        for (int i=0; i<n-1; i++){
                sum=sum+A[i];
        }
        add=(n*(n+1))/2;

        cout<<"the missing number is "<<add-sum;
    }
         
        void Binary(){
            int h=n-1, l=0, m=(h+l)/2;
            while (h>=l){
                m=(h+l)/2;
                if (A[m]-m == A[0]) {
                        l=m+1; }

                else {
                    h=m-1; }
                }
                
                cout<<"missing number is : "<<l+A[0]<<endl;
                
            
        }




    void choice (){
        cout<<"Enter 1 for linear and 2 for Binary Search:  ";
        cin>>k;

        if (k==1) Linear();
        else   Binary();}
    
 
    
};
int main(){
    int r;
    cout<<"enter the range :";
    cin>>r;
    int a[r]={0};
    cout<<"enter the elements :"<<endl;

    for(int i=0; i<r-1; i++){
        cin>>a[i];
        cout<<endl;
    }
    Missing m(a,r);
    m.choice();
}