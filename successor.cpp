#include<iostream>
#include<stack>
#include "Successor.h"
using namespace std;

stack<int> s;
void Successor::create(){
    int x;
    cout<<"enter the number of node-";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"enter the data of the "<<i<<"node-";
    cin>>x;
    
    insert (x);
    }
}
void Successor::insert(int x1){
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
void Successor :: inorder(node *temp)
{
int first;
      
   if(temp != NULL)
   {
      inorder(temp->lc);
      s.push(temp->data);
      
      cout<<temp->data<<"  ";
      inorder(temp->rc);
   }
   
   
} 

void Successor ::successorofnode(){
int first[10],succ;
while(!s.empty()){
for(i=0;i<n;i++){
     first[i]=s.top();
     s.pop();
   }
}
cout<<endl;
cout<<"content of array-";
for(i=0;i<n;i++){
 cout<<first[i]<<" ";
}
cout<<endl;
cout<<"enter the number to know its successor- ";
cin>>succ;
for(i=0;i<n;i++){
if(first[i]==succ){
cout<<"the successor of "<<first[i]<<"is->"<<first[i+1]<<endl;
}
}

}
