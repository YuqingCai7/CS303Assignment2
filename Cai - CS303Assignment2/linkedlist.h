#pragma once
#include <string>
#include <iostream>
using namespace std;

template<typename T>
struct Node {
    T data;
    Node* nextPtr;
};

template<typename T>
class singlyLL {
private:
    Node<T>* head;
    Node<T>* tail;
    size_t num_items;

public:
    singlyLL();
    ~singlyLL();
    void push_front(T item);
    void push_back(T item);
    void pop_front();
    void pop_back();
    T front();
    T back();
    bool empty();
    void insert(size_t index, const T& item);
    bool remove(size_t index);
    size_t find(const T& item);
    void printList() const;
};

template<typename T> 
singlyLL<T>::singlyLL() {
    head = nullptr;
    tail = nullptr;
    num_items = 0;
}

template<typename T>
singlyLL<T>::~singlyLL() {
    Node<T>* temp = head;
    while (head != nullptr) {
        head = head->nextPtr;
        delete temp;
        temp = head;
    }
    tail = nullptr;
    num_items = 0;
}


template<typename T>
bool singlyLL<T>::empty() {
    return head == nullptr;
}

template<typename T>
void singlyLL<T>::push_front(T item) {
    Node<T>* newNode = new Node<T>;
    newNode->data = item;
    newNode->nextPtr = head;
    if (empty()) {
        tail = newNode; 
    }
    head = newNode;
    num_items++;
}


template<typename T>
void singlyLL<T>::push_back(T item) {
    Node<T>* newNode = new Node<T>;
    newNode->data = item;
    newNode->nextPtr = nullptr;
    if (empty()) {
        head = newNode;
    }
    else {
        tail->nextPtr = newNode;
    }
    tail = newNode;
    num_items++;
}



template<typename T>
void singlyLL<T>::pop_front() {
    if (empty()) {
        return;
    }
    Node<T>* temp = head;
    head = head->nextPtr;
    delete temp;
    num_items--;
}

template<typename T>
void singlyLL<T>::pop_back() {
    if (empty()) {
        return;
    }
    if (head == tail) {
        delete tail;
        head = nullptr;
        tail = nullptr;
        num_items--;
        return;
    }
    Node<T>* temp = head;
    while (temp->nextPtr != tail) {
        temp = temp->nextPtr;
    }
    delete tail;
    temp->nextPtr = nullptr;
    tail = temp;
    num_items--;
}

template<typename T>
T singlyLL<T>::front() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    return head->data;
}

template<typename T>
T singlyLL<T>::back() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    return tail->data;
}

template<typename T>
size_t singlyLL<T>::find(const T& item) {
    size_t index = 0;
    Node<T>* current = head;
    while (current != nullptr) {
        if (current->data == item) {
            return index; 
        }
        current = current->nextPtr;
        index++;
    }
    return numeric_limits<size_t>::max();
}




template<typename T>
void singlyLL<T>::insert(size_t index, const T& item) {
    if (index > num_items) {
        push_back(item);
        return;
    }
    if (index == 0) {
        push_front(item);
        return;
    }
    Node<T>* newNode = new Node<T>;
    newNode->data = item;
    Node<T>* current = head;
    for (size_t i = 0; i < index - 1; ++i) {
        current = current->nextPtr;
    }
    newNode->nextPtr = current->nextPtr;
    current->nextPtr = newNode;
    num_items++;
}

template<typename T>
bool singlyLL<T>::remove(size_t index) {
    if (index >= num_items || empty()) {
        return false;
    }
    if (index == 0) {
        pop_front();
        return true;
    }
    Node<T>* current = head;
    for (size_t i = 0; i < index - 1; ++i) {
        current = current->nextPtr;
    }
    Node<T>* temp = current->nextPtr;
    current->nextPtr = temp->nextPtr;
    delete temp;
    num_items--;
    return true;
}

template<typename T>
void singlyLL<T>::printList() const {
    Node<T>* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->nextPtr;
    }
    cout << endl;
}

