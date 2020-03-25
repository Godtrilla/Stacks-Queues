#ifndef UNTITLED12_QUEUE_H
#define UNTITLED12_QUEUE_H


#include <iostream>
#include <vector>
#include <queue>
#include <iterator>

using namespace std;

class Queue
{
public:
//Queue class constructor and destructor
    Queue();
    ~Queue();

//Inserts elemment into Queue
    void insert(int number);
//Removes next element in the Queue
    int remove();
//Checks to see if the Queue if full
    bool isFull();
//Checks to see if Queue is empty
    bool isEmpty();
//Returns value of count variable
    int getCount();
//Prints all contents of the Queue
    void print();

private:
//Variable used to for size of container
    int size = 5;
//Variable used to keep track of calls to Queue
    int count;
//Variable used to keep track of front of queue
    int front;
//Variable used to keep track of back of queue
    int back;
//Container used to hold Queue elements
    vector <int> data;
};


#endif //UNTITLED12_QUEUE_H
