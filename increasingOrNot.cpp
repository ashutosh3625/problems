#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of array size:";
cin>>n;
int arr[n];
cout<<"enter the elements of array:";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int nun=arr[0];
for(int i=0;i<n;i++){
if(nun<=arr[i]) nun=arr[i];
else {
    cout<<"array is not increasing.";
    break;
}
}
if(nun==arr[n-1]) cout<<"array is increasing order";
return 0;

}