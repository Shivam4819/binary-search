/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HeightOfSubtree.h
 * Author: shivam
 *
 * Created on 30 March, 2018, 9:21 PM
 */

#ifndef HEIGHTOFSUBTREE_H
#define HEIGHTOFSUBTREE_H

class HeightOfSubtree{
private:
    struct node{
        int data;
        node *lc, *rc;
    }*newnode, *start;
public:
    HeightOfSubtree(){
        start=NULL;
    }
    void create();
    void insert(node *root);
    void inorder(node *temp);
    int height(node *temp);
    void heightofbst();
    node *getroot(){
    return start;
    }
};


#endif /* HEIGHTOFSUBTREE_H */

