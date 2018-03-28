#include<iostream>
#include<math.h>
#include "ArrayBst.h"
using namespace std;

ArrayBst::ArrayBst(){
        cout<<"enter the length-";
        cin>>n;
        for(i=0;i<n;i++){
            a[i]=0;
        }
    }

void ArrayBst::inserttree(int x){
    int data;
    i=1;
    char ans;
    if(a[1]==0)
        a[1]=data;
    else{
        int flag=0;
        while(flag==0){
        cout<<"where to enter l/r-";
        cin>>ans;
        if(ans=='l'){
            i=2*i;
            if(a[i]==0){
                a[i]=data;
                flag=1;
            }
        }
        else{
            i=2*i+1;
            if(a[i]==0){
                a[i]=data;
                flag=1;
            }
        }
      }
    }
}
void ArrayBst::createtree(){
    int x;
    for(i = 1; i<= n;i++)
   {
      cout<<"\nEnter the data of node "<<i<<" : ";
      cin>>x;
      insert(x);
   }
}
void ArrayBst :: inordertree(int i)
{
   if(i <= pow(2,n)-1 && a[i] != '\0' )
   {
      inorder(2*i);
      cout<<a[i]<<" ";
      inorder(2*i+1);
   }
}
void ArrayBst::displaytree(){
    inorder(1);
}