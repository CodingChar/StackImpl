
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
    s mNode *mAuxNode = nullptr;

    //unsigned long mNodeByteSize = sizeof(mNode);

public:
    // Returns the node at the stock of the stack
    mNode *GetTopNode() const { return mTop; };

    // Pushes an element to the top of the stack
    void Push(T value)
    {
        mNode *pNewNode = new mNode;

        pNewNode->value = value;
        pNewNode->nextNode = mTop;

        mTop = pNewNode;
    }

    void Clear()
    {
        mNode *curr = mTop;
        while (curr != nullptr)
        {
            curr = mTop;
            Pop();
        }
    }



    // Pops/Deletes the element
    void Pop()
    {

        mAuxNode = mTop->nextNode;

        delete mTop;

        mTop = mAuxNode;

        mAuxNode = nullptr;
    }

    ~Stack()
    {
        ClearStack();
    }
};
