#include<iostream>
#include "HeightOfSubtree.h"
using namespace std;

void HeightOfSubtree::create(){
    int n,x;
    cout<<"enter the number of node-";
    cin>>n;
    for(int i=0;i<n;i++){
    newnode = new node;
    newnode->lc=NULL;
    newnode->rc=NULL;
    cout<<"enter the data of the "<<i<<"node-";
    cin>>x;
    newnode->data=x;
    insert (newnode);
    }
}
void HeightOfSubtree::insert(node *root){
    if(start==NULL){
        start=root;
        
    }
    else{
        int flag=0;
        node *par=start;
        while(flag==0){
            if(root->data<par->data){
                if(par->lc==NULL){
                    par->lc=root;
                    flag=1;
                }
                else
                    par=par->lc;
            }
            else{
                if(par->rc==NULL){
                    par->rc=root;
                    flag=1;
                }
                else
                    par=par->rc;
            }
        }
    }
    
}

void HeightOfSubtree::inorder(node *temp){

if(temp==NULL)
return;
inorder(temp->lc);
cout<<temp->data<<" " ;
inorder(temp->rc);
cout<<endl;
}


int max(int x,int y){

   if(x > y){
      cout<<"left subtree is heighted then right-"<<x<<endl;
      return x;
      }
   else{
   cout<<"right subtree is heighted then left-"<<y<<endl;
      return y;
      }
      
         
}

int HeightOfSubtree::height(node *temp){

   int lht,rht;
   if(temp != NULL)
   {
      lht = height(temp->lc);
      rht = height(temp->rc);
      return(max(lht,rht) + 1);
   }
   return 0;
}

void HeightOfSubtree:: heightofbst(){

   if(start == NULL)
      cout<<"\nBinary Search Tree is Empty, so height is 0\n";
   else
   { 
      int ht = height(start);
      cout<<"\nHeight of the BST is : "<<ht;
   }
}
