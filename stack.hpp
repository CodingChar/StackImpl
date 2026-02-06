


//#include<cstdlib>


template <typename T>
class Stack{
    private:
    
        //Node Struct 
        struct mNode {T value; mNode *nextNode;};

        //Pointer to the node at the top of the stack
        mNode *mTop = nullptr;
        mNode *mAuxNode  = nullptr;


        void mClearStackMemory(){
            mNode *curr = mTop;
            while(curr != nullptr){
                curr = mTop;
                Pop();
            }
        }
        

    public:

        //Returns the node at the stock of the stack 
        mNode* GetTopNode() const { return mTop; };

        //Pushes an element to the top of the stack
        void Push(T value){
            mNode* newNode = new mNode;

            newNode->value = value;
            newNode->nextNode = mTop;

            mTop = newNode;
        }


        void ClearStack(){
            mClearStackMemory();
        }


        //Pops/Deletes the element 
        void Pop(){
            

            mAuxNode = mTop->nextNode;

            delete mTop;

            mTop = mAuxNode;

            mAuxNode = nullptr;

        }

        ~Stack(){
            mClearStackMemory();
        }

};

