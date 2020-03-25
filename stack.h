#ifndef UNTITLED12_STACK_H
#define UNTITLED12_STACK_H


#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
//Stack class constructor and destructor
    Stack();
    ~Stack();

//Pushes values onto stack
    void push(int number);
//Removes Value from stack, Also returns value
    int pop();
//Returns reference to element at the top of the stack
    int top();

//Checks to see if stack is full
    bool isFull();
//Checks to see if stack is empty
    bool isEmpty();
//Variable used to keep track of calls to stack
    int getCount();

    void incrementCount();
//Prints contents of stack to console
    void print();

private:
//Counter variable used to keep track of calls to stack
    int count=0;
//Vector Container used to hold stack elements
    vector <int> data;
};


#endif //UNTITLED12_STACK_H