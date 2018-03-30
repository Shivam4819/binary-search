#include<iostream>
#include "MergeBst.h"
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

vector<int> v;
vector<int >::iterator it;

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

       
   if(temp != NULL)
   {
      inorder(temp->lc);
      v.push_back(temp->data);
      inorder(temp->rc);
   }
 
} 

void MergeBst :: inordertravsersal(node *temp)
{

       
   if(temp != NULL)
   {
      inordertravsersal(temp->lc);
      cout<<temp->data;
      inordertravsersal(temp->rc);
   }
 
} 
void MergeBst :: addarray(int x){
int m,flag;
flag=x;

    sort(v.begin(),v.end());

    m=v.size();
    int arr[m],info;
    for(i=0;i<m;i++){
    arr[i]=v[i];
    }

if(flag==1){
    cout<<"content of merged tree->";
    start=NULL;
    for(i=0;i<m;i++){
    info=arr[i];
    insert(info);
    }
    inordertravsersal(start);
  }
}
