

template <typename T>
void Stack<T>::Push(T value)
{
    mNode *pNewNode = new mNode;

    pNewNode->value = value;
    pNewNode->nextNode = mTop;

    mTop = pNewNode;
}

template <typename T>
void Stack<T>::Pop()
{

    mNode *pAuxNode = nullptr;

    if (mTop == nullptr)
        return;

    pAuxNode = mTop->nextNode;

    delete mTop;

    mTop = pAuxNode;

}

template <typename T>
void Stack<T>::Clear(){
    while(mTop != nullptr){
        Pop();
    }
}


