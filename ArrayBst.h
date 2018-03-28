/* 
 * File:   ArrayBst.h
 * Author: shivam
 *
 * Created on 28 March, 2018, 1:11 PM
 */

#ifndef ARRAYBST_H
#define	ARRAYBST_H

class ArrayBst{
private:int i,n,a[10];
public:
    ArrayBst();
    void createtree();
    void inordertree(int i);
    void displaytree();
    void inserttree(int x);
};


#endif	/* ARRAYBST_H */

