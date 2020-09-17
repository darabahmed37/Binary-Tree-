//
// Created by darab on 15/9/20.
//

#ifndef QUEUE_USING_LINKEDLIST_QUEUE_H
#define QUEUE_USING_LINKEDLIST_QUEUE_H

#include <iostream>

template<class T>
class Queue {
private:

    class Node {
        Node *next = nullptr;
        T data;
    public:


        void setEx(Node *ex) {
        }

        Node *getNext() const {
            return next;
        }

        void setNext(Node *next) {
            Node::next = next;
        }

        T getData() const {
            return data;
        }

        void setData(T data) {
            Node::data = data;
        }
    };

    Node *first = nullptr, *last = nullptr;
public:
    bool isEmpty() {
        if (first == nullptr&&last== nullptr)
            return true;
        return false;
    }

    void enqueue(T data) {
        if (first == nullptr && last == nullptr) {
            first = new Node;
            last = first;
            first->setData(data);
            return;
        }
        last->setNext(new Node);
        last = last->getNext();
        last->setData(data);
        last->setNext(nullptr);
    }

    T dequeue() {
        if (first != nullptr ) {
          if(first==last){
              T d=first->getData();
              first=first->getNext();
              last=last->getNext();
              first=last= nullptr;
              return d;
          }
            Node *temp;
            T data = first->getData();
            temp = first;
            first = first->getNext();
            delete temp;
            return data;
        }
        if (first == last) {

            std::cerr << "\nNot more items avalible" << std::endl;

            return nullptr;
        }
    }
};

#endif //QUEUE_USING_LINKEDLIST_QUEUE_H
