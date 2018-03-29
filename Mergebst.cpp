#include<iostream>
#include "MergeBst.h"
using namespace std;


void MergeBst::create(){
    int x;
    cout<<"enter the number of node-";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"enter the data of the "<<i<<"node-";
    cin>>x;
    
    insert (x);
    }
}
void MergeBst::insert(int x1){
    newnode = new node;
    newnode->data=x1;
    newnode->lc=NULL;
    newnode->rc=NULL;
    
    if(start==NULL){
        start=newnode;
        
    }
    else{
        int flag=0;
        node *par=start;
        while(flag==0){
            if(newnode->data<par->data){
                if(par->lc==NULL){
                    par->lc=newnode;
                    flag=1;
                }
                else
                    par=par->lc;
            }
            else{
                if(par->rc==NULL){
                    par->rc=newnode;
                    flag=1;
                }
                else
                    par=par->rc;
            }
        }
    }
    
}
void MergeBst :: inorder(node *temp)
{

 for(i=0;i<n;i++){      
   if(temp != NULL)
   {
      inorder(temp->lc);
      a[i]=temp->data;
      
      cout<<a[i]<<"  ";
      inorder(temp->rc);
   }
 }
} 

void MergeBst :: addarray(MergeBst m1,MergeBst m2){
int A[6],n,y,j;
j=0;
n=3;
y=3;
for(i=0;i<n;i++){ 
A[j++]=m1.a;
cout<<"yo-"<<a[j++]<<endl;
}
for(i=0;i<y;i++){ 
A[j++]=m2.a;
cout<<"hi-"<<a[j++];
}
for(j=0;j<6;j++){ 
cout<<A[j];
}

}
