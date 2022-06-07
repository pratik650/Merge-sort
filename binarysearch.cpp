#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Myfunction(int a[],int N,int beg,int end,int size){
 
 while(beg<=end){
     int mid= (beg+end)/2;
     if(a[mid]==N) {
     return mid+1;
     }
     else if(a[mid]>=N){
        end=mid-1;
     }
     else if(a[mid]<=N){
        beg=mid+1;
     }
 }

 return 0;
}

int main(){
    cout<<"The elements of an array in which we have to find an element: "<<endl;
    int a[10]={10,20,25,29,30,37,40,45,48,50};
    int n;
    cout<<"Enter the element to search from a given list of array: ";
    cin>>n;
    int beg=0,end=10-1,size=10;
    int x= Myfunction(a,n,beg,end,size);
    cout<<"The unknown element: "<<x; 
}

