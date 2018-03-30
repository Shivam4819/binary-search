/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InorderSuccessor.h
 * Author: shivam
 *
 * Created on 30 March, 2018, 9:15 PM
 */

#ifndef INORDERSUCCESSOR_H
#define INORDERSUCCESSOR_H

class Successor{
private:
    struct node{
        int data;
        node *lc, *rc;
    }*newnode, *start;
    int i,n,a[10];
public:
    Successor(){
        start=NULL;
    }
    void create();
    void insert(int x);
    void inorder(node *);
    void successorofnode( );
    node *getroot(){
    return start;
    }
};

#endif /* INORDERSUCCESSOR_H */

