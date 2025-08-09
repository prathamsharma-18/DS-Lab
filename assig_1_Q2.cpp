#include<iostream>
using namespace std;

int main() {
int i,j,k;
int n;
cout<<"enter the size of array: ";
cin>>n;
int arr[n];
cout<<"enter the elements of array: "<<endl;;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}



for (i=0; i<n; i++){
    for (j=i+1 ;j<n; j++){
        if(arr[i]==arr[j]){
            for(k=j; k<n-1; k++){
                arr[k]=arr[k+1];
            }
            j--;
            n--;
        }
    }
}






cout<<"the elements of array after deletion are: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}}