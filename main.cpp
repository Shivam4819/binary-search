/* 
 * File:   main.cpp
 * Author: shivam
 *
 * Created on 28 March, 2018, 11:57 AM
 */
#include <iostream>
#include "../q-set4/MinimumValue.h"
#include "../q-set4/ArrayBst.h"
#include "../q-set4/MergeBst.h"
#include "BstKeyInRange.h"
#include"Successor.h"
using namespace std;


int main() {
    int k1,k2;
    /*minimum value of in a tree*/    
    
    MinimumValue m;
    m.create();
    m.display();
    
    /*creating bst with array*/
    ArrayBst a;
    a.createtree();
    a.displaytree();
    
    /*merge two bst*/
    
    MergeBst m1,m2;
    cout<<"first bst"<<endl;
    m1.create();
    cout<<"content of inordertraversal-";
    m1.inordertravsersal(m1.getroot());
    cout<<endl;
    m1.inorder(m1.getroot());
    m1.addarray(0);
    
    cout<<"second bst"<<endl;
    m2.create();
    cout<<"content of inordertraversal-";
    m2.inordertravsersal(m2.getroot());
    cout<<endl;
    m2.inorder(m2.getroot());
    m2.addarray(1);
    
    /*print all value between keys k1 and k2*/
    
    BstKeyInRange b;
    b.create();
    b.inorder(b.getroot()); 
    cout<<"enter the keys value-";
    cin>>k1>>k2;
    cout<<"k1-"<<k2<<"\t\t"<<"k2-"<<k2<<endl;
    b.display(b.getroot(),k1,k2);
    
    /*find the successor of a particular number*/
    
    Successor s;
    s.create();
    cout<<"inorder traversal-";
    s.inorder(i.getroot());
    s.successorofnode();
    
    /*find which subtree is maximum*/
    
    HeightOfSubtree h;
    h.create();
    cout<<"inorder traversal-";
    h.inorder(h.getroot());
    h.heightofbst();
    
    
    return 0;
}