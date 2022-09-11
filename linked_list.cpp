#include <iostream>
#include <ostream>

#include "linked_list.h"

using namespace std;

void print_test()
{
    cout << "Testing!" << endl;
}

void LinkedList::PrintList() {
    Node *current = head_->next_;
    while (current) {
        cout << current->data_ << " ";
        current = current->next_;
    }
    cout << endl;
}

void LinkedList::PushFront(int x) {
    Node *new_node = new Node(x);
    new_node->next_ = head_->next_;
    head_->next_ = new_node;
}

void LinkedList::PushBack(int x) {
    Node *new_node = new Node(x);
    Node *current = head_->next_;
    while (current->next_) {
        current = current->next_;
    }

    current->next_ = new_node;
}

void LinkedList::Delete(int x) {
    Node *current = head_;
    if (!current->next_) {
        return;
    }
    
    while (current->next_->data_ != x) {
        current = current->next_;
    }

    Node *next = current->next_->next_;
    delete current->next_;
    current->next_ = next;
}

void LinkedList::DeleteList() {
    Node *current = nullptr;
    while (head_->next_) {
        current = head_->next_;
        head_->next_ = head_->next_->next_;
        delete current;
    }
}
