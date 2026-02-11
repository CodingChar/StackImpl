
#pragma once 

template <typename T>
class Stack
{
private:
    // Node Struct
    struct mNode
    {
        T value;
        mNode *nextNode;
    };

    // Pointer to the node at the top of the stack
    mNode *mTop = nullptr;

public: 

    inline T& GetTop() const {return mTop->value;};

    
    inline bool isEmpty() const {return mTop == nullptr; };


    void Push(T value);

    void Pop(); 
    
    void Clear();



    ~Stack(){
        Clear();
    }
};

#include "Stack.tpp"