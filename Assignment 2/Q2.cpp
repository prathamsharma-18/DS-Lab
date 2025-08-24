// 2) Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping 
// the adjacent elements if they are in wrong order. Code the Bubble sort with the 
// following elements: 
//                          64 34 25 12 22 11 90 
#include<iostream>
using namespace std;

class Bubble{
    int n=7;
    int A[7]={64,34,25,12,22,11,90};
    public:
        void swap(int &i, int &j){
            int temp= i;
            i=j;
            j=temp;
        }

        void sort (){
            for(int i = 0; i < 7; i++){
                 for(int j = 0; j < 7-1-i; j++){
                    if(A[j] > A[j+1]) swap(A[j], A[j+1]);
    }
}

            } 

        void display(){
            for (int i=0; i<7; i++){
                cout<<A[i]<<" ";
            }
        }
        };
int main(){
    Bubble b;
    b.sort();
    b.display();

}