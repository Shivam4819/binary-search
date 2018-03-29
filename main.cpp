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
using namespace std;


int main() {
    int k1,k2;
    
    MinimumValue m;
    m.create();
    m.display();
    
    ArrayBst a;
    a.createtree();
    a.displaytree();
    
    MergeBst m1,m2,m3;
    cout<<"first bst";
    m1.create();
    m1.inorder(m1.getroot());
    cout<<"second bst";
    m2.create();
    m2.inorder(m2.getroot());
    
    BstKeyInRange b;
    b.create();
    b.inorder(b.getroot()); 
    
    cout<<"enter the keys value-";
    cin>>k1>>k2;
    cout<<"k1-"<<k2<<"\t\t"<<"k2-"<<k2<<endl;

    b.display(b.getroot(),k1,k2);
    
    
    return 0;
}