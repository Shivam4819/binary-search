/* 
 * File:   BstKeyInRange.h
 * Author: shivam
 *
 * Created on 29 March, 2018, 10:23 PM
 */

#ifndef BSTKEYINRANGE_H
#define	BSTKEYINRANGE_H


class BstKeyInRange{
private:
    struct node{
        int data;
        node *lc, *rc;
    }*newnode, *start;
    int i,n,a[10];
public:
    BstKeyInRange(){
        start=NULL;
    }
    void create();
    void insert(int x);
    void inorder(node *);
    void display();
    node *getroot()
    {
       return start;
    }
};
#endif	/* BSTKEYINRANGE_H */

