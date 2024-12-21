#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of array:";
cin>>n;
int oldArr[n];
cout<<"enter the elements of array:";
for(int i=0;i<n;i++){
cin>>oldArr[i];
}
int NewArr[n];
for(int i=0;i<n;i++){
NewArr[i]=oldArr[n-i-1];
}
cout<<"reverse array is:";
for(int i=0;i<n;i++){
cout<<NewArr[i];
cout<<" ";
}
return 0;


}
