#include <iostream>
using namespace std;

//Node class representing a single node in the linked listr
class Node
{
public:
int data;
Node *next;

Node()
{
    next = NULL;
}
};

//stack class
class stack
{
    private:
    Node *top; //pointer to the top node of the stack

    public:
    stack()
    {
        top = NULL; //initialize the stack with a null top pointer
    }

    //push operation: insert an element onto the top of the stack
    int push (int value)
    {
        Node *newNode = new Node();//1. alocate memory for the new node
        newNode->data = value; // 2.assign value
        newNode->next = top; // 3. set the next pointer of the new node to the current top
        top = newNode; // 4. update the top pointer to the new node
        cout << "Push value:" << value << endl;
        return value;
    }
    //isEmpty operation: check if yhe stack is empty
    bool isEmpty()
    {
        return top == NULL; // return true if the top pointer is NULL
    }

    //pop operation : remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return; // if the stack is emptu, print a message and return
        }
        cout << "popped value:" << top->data << endl;
        top = top->next;// update the top pointer to the next node
    }

    //peek/top operation: retrieve the value of the topmost element without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "lis is empty" << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }// return the value of the top node
    }
};

