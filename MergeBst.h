/* 
 * File:   MergeBst.h
 * Author: shivam
 *
 * Created on 28 March, 2018, 10:10 PM
 */

#ifndef MERGEBST_H
#define	MERGEBST_H

class MergeBst{
private:
    struct node{
        int data;
        node *lc, *rc;
    }*newnode, *start;
    int i,n,a[10];
public:
    MergeBst(){
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
    void addarray(MergeBst m1,MergeBst m2);

};

#endif	/* MERGEBST_H */

