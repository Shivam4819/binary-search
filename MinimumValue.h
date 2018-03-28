/* 
 * File:   MinimumValue.h
 * Author: shivam
 *
 * Created on 28 March, 2018, 12:45 PM
 */

#ifndef MINIMUMVALUE_H
#define	MINIMUMVALUE_H


class MinimumValue{
private:
    struct node{
        int data;
        node *lc, *rc;
    }*newnode, *start, *temp;
public:
    MinimumValue(){
        start=NULL;
    }
    void create();
    void insert(node *root);
    void display();
};

#endif	/* MINIMUMVALUE_H */

