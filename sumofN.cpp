#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of array:";
cin>>n;  
int arr[n];
cout<<"enter the elements of array:";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int sum=0;
for(int j=0;j<n;j++){
    sum+=arr[j];
}
cout<<"sum of n elements is :";
cout<< sum << endl;


}