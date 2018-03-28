#include<iostream>
#include "MinimumValue.h"
using namespace std;


void MinimumValue::create(){
    int n,x;
    cout<<"enter the number of node-";
    cin>>n;
    for(int i=0;i<=n;i++){
    newnode = new node;
    newnode->lc=NULL;
    newnode->rc=NULL;
    cout<<"enter the data of the "<<i<<"node-";
    cin>>x;
    newnode->data=x;
    insert (newnode);
    }
}
void MinimumValue::insert(node *root){
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
void MinimumValue::display(){
    temp=start;
    while(temp->lc!=NULL){
        temp=temp->lc;
    }
    cout<<"smallest data is-"<<temp->data;
}
