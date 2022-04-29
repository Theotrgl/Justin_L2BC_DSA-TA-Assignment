#include <iostream>
#include ".\TAWeek8.hpp"

int main(){
    Stack<int> s1;

    s1.push(213);
    s1.push(121);
    s1.push(51);
    s1.push(31);
    s1.push(3);
    s1.push(12);
    s1.push(21);
    s1.push(125);
    s1.push(51);
    s1.push(19);

    s1.print();
    cout<<"\n"<<endl;

    cout<<"Element on top of stack is: ";
    cout<<s1.peek()<<endl;
    cout<<"\n"<<endl;

    s1.push(1);
    s1.push(5);
    s1.push(3);
    s1.push(2);
    s1.push(10);
    s1.push(7);
    s1.push(9);
    s1.push(6);
    s1.push(4);
    s1.push(8);
    
    cout<<"Before Pop and Sort: "<<"\n"<<endl;
    s1.print();
    cout<<"\n"<<endl;

    cout<<"After Popping once: "<<"\n"<<endl;
    s1.pop();

    s1.print();
    cout<<"\n"<<endl;

    cout<<"After Sorting"<<"\n"<<endl;
    s1.sort();
    s1.print();
    cout<<"\n"<<endl;

    cout<<"Search for Number 5"<<endl;
    cout<<"Number 5 found at position: ";
    cout<<s1.binarySearch(7)<<endl;
}
