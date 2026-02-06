

#include<iostream>
#include "stack.hpp"

int main(){

    Stack<int> stack; 
    
    stack.Push(10);
    stack.Push(20);
    stack.Push(40);
    stack.Push(60);


    std::cout<<stack.GetTopNode()->value<<"\n";

    


    //std::cout<<stack.GetTopNode()->value<<"\n";


    


    return 0; 
}