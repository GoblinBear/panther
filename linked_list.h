#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

void print_test();

class Node {
private:
    int data_;
    Node *next_;
public:
    Node(): data_(0), next_(nullptr) {};
    Node(int data): data_(data), next_(nullptr) {};

    friend class LinkedList;
};

class LinkedList {
private:
    Node *head_;
public:
    LinkedList(): head_(0) {
        Node *sentinel = new Node();
        head_ = sentinel;
    };
    void PrintList();
    void PushFront(int x);
    void PushBack(int x);
    void Delete(int x);
    void DeleteList();
};

#endif
