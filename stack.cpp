#include "stack.h"

Stack::Stack()
{}

Stack::~Stack()
{}


void Stack::push(int number)
{
    incrementCount();
    data.emplace(data.begin(), number);
    cout << "push " << number << " : ";
    print();
    cout << endl;

}

int Stack::pop()
{
    if(isEmpty())
    {
        cout << "Array empty" << endl;
        return -1;
    }
    else {

        int value = top();
        data.erase(data.begin());
        return value;

    }
}

int Stack::top()
{
    return data.front();
}

bool Stack::isFull()
{
    return  !data.empty();
}

bool Stack::isEmpty()
{
    return data.empty();
}

int Stack::getCount()
{
    return count;
}

void Stack::print()
{

        for (int index : data) {
            cout << index << " ";
        }
}
void Stack::incrementCount()
{
    count++;
}
