#include<iostream>
#include "BstKeyInRange.h"
using namespace std;


void BstKeyInRange::create(){
    int x;
    cout<<"enter the number of node-";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"enter the data of the "<<i<<"node-";
    cin>>x;
    
    insert (x);
    }
}
void BstKeyInRange::insert(int x1){
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
void BstKeyInRange :: inorder(node *temp)
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
void BstKeyInRange::display(node *temp, int k1 ,int k2){
    if ( start==NULL )
      return;
    temp=start;
   if ( k1 < temp->data )
     display(temp->lc, k1, k2);
 
   if ( k1 <= temp->data && k2 >= temp->data )
     cout<< temp->data;
 
   if ( k2 > temp->data )
     display(temp->rc, k1, k2);
    
}



