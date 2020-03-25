#include "queue.h"
Queue::Queue()
{
    front = -1;
    back = -1;
    count = 0;
    data[size];
}
Queue::~Queue(){}

void Queue::insert(int number)
{

    count++;
    if(isFull())
    {
        data.resize(size +1);
        data.pop_back();
        size++;
    }

    if(front == -1)
    {front = 0;}

    back = (back + 1) % size;
   // data.insert(data.begin() + back, number);
    data.push_back(number);
    cout << endl << "push " << number << " : ";
    print();

}

int Queue::remove()
{
    int next;
    if(isEmpty())
    {
        cout << "Queue is empty" << endl;
        return(-1);
    }
    else
    {
        next = data[front];
        if(front == back)
        {
            front = -1;
            back = -1;
        }
        else
        {
            front=(front+1) % size;
        }

        data.erase(data.begin());
        return(next);
    }

}

bool Queue::isFull()
{
    if(front == 0 && back == size - 1){
        return true;
    }
    return front == back + 1;

}

bool Queue::isEmpty()
{
    if(front == -1)
    {
        return true;
    }

}

int Queue::getCount()
{
    return count;
}

void Queue::print()
{
    for(auto item : data)
    {
        cout << item << " ";
    }
    cout << endl;
}
