// 1) Implement the Binary search algorithm regarded as a fast search algorithm with 
// run-time complexity of Ο(log n) in comparison to the Linear Search.
#include<iostream>
using namespace std;

class binary{
    int h,m,l,n,ele;
    int *arr;
    public:
            binary(){
                
                cout<<"enter the size of sorted array:";
                cin>>n;
                 arr = new int [n];
            }


          
        void input (){
           
            for(int i=0; i<n; i++)
            {
             cout<<"enter the element at "<<i+1<<" :";
             cin>>arr[i];
             cout<<endl;
            }
        }

        void get (){
            cout<<"enter the element to be searched :";
            cin>>ele;
            cout<<endl;
            
        }

        void display(){
            l=0;
            h=n-1;
            m=(l+h)/2;

            while(h>=l){
                m=(l+h)/2;
                if (arr[m]>ele)    h=m-1;

                else if (arr[m]==ele){
                     cout<<"element found at  position :"<<m+1;
                     break;}

                else l=m+1;

                
            }
            if (l>h){
                cout<<"X element not found X";
            }
        }
        ~binary(){
    delete[] arr;}

};
int main(){
    binary b;
    b.input();
    b.get();
    b.display();
}
