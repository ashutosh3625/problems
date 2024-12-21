#include<iostream>
using namespace std;
int main(){
int n,freq=0;
cout<<"enter the size of array:";
cin>>n;
int arr[n];
cout<<"enter the elements of array:";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int x;
cout<<"enter the value of x:";
cin>>x;
for(int i=0;i<n;i++){
    if(x==arr[i]) freq++;
}
cout<<"frequency of x is :";
cout<<freq;



}