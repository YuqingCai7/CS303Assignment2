#include "stack.h"
#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
    singlyLL<int> myList;

    myList.push_front(3);
    myList.push_front(2);
    myList.push_front(1);
    myList.printList();


    myList.push_back(4);
    myList.push_back(5);
    myList.push_back(6);
    myList.printList();

    myList.pop_front();
    myList.printList();

    myList.pop_back();
    myList.printList();

    cout << "Front Element: " << myList.front() << endl;
    cout << "Back Element: " << myList.back() << endl;

    myList.insert(0, 10);  
    myList.insert(1, 20);  
    myList.insert(2, 30);  
    myList.printList(); 

    myList.remove(2); 
    myList.printList();

    int itemToFind = 20;
    size_t foundIndex = myList.find(itemToFind);

 
    if (foundIndex != numeric_limits<size_t>::max()) {
        cout << "The item " << itemToFind << " was found at index: " << foundIndex << endl;
    }
    else {
        cout << "The item " << itemToFind << " was not found in the list." << endl;
    }

    stack bigmac;
    if (bigmac.empty()) {
        cout << "The stack is empty." << endl;
    }
    else {
        cout << "The stack is not empty." << endl;
    }
    bigmac.push(100);

    cout << bigmac.top() << " was added to the top of the stack." << endl;

    bigmac.push(90);

    cout << bigmac.top() << " was added to the top of the stack." << endl;

    bigmac.push(50);

    cout << bigmac.top() << " was added to the top of the stack." << endl;

    bigmac.pop();

    cout << "The new top of the stack is " << bigmac.top() << endl;
    cout << "The average value of the stack is " << bigmac.average() << endl;

    return 0;
}


