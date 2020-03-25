#include <iostream>
#include "Stack.h"
#include "queue.h"
#include <random>
using namespace std;

int main() {

//Instantiation of Stack and Queue objects
    Stack Bigmac;
    Queue Lilmac;

//Random Device Generator
   std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> uni(1, 2);
    std::uniform_int_distribution<int> uni2(1, 9);

//Calls to the STACK class
    cout << "100 Calls to the STACK" << endl << endl;
    for(int index = 0; index <= 100; index++)
    {

        int rand1 = (uni(generator));
        int rand2  = (uni2(generator));

        if(rand1 == 1)
        {
            Bigmac.push(rand2);
        }
       else
        {
            cout << "pop "  << Bigmac.pop() << " : "; Bigmac.print(); cout << endl;
        }
    }


    cout << "Stack Contents = "; Bigmac.print(); cout << endl;
    cout << "Push Count: " << Bigmac.getCount() << endl;
    cout << "Pop Count: " << 100-Bigmac.getCount() << endl;
    cout << endl;







//Calls to the Queue class
cout << "100 Call to the QUEUE" << endl;
for(int counter = 0; counter <= 100; counter++)
{
    int rand4 = (uni(generator));
    int rand3 = (uni2(generator));

    if(rand4 == 1)
    {
        Lilmac.insert(rand3);
    }
    else
    {
        cout << "remove "  << Lilmac.remove() << " : "; Lilmac.print(); cout << endl;
    }
}

    cout << "Stack Contents = "; Lilmac.print(); cout << endl;
    cout << "Push Count: " << Lilmac.getCount() << endl;
    cout << "Pop Count: " << 100-Lilmac.getCount() << endl;






    return 0;
}