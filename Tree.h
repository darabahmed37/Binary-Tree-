//
// Created by darab on 15/9/20.
//
#include <stack>
#include "iostream"
#include "Queue.h"
#include "Node.h"

#ifndef QUEUE_USING_LINKEDLIST_TREE_H
#define QUEUE_USING_LINKEDLIST_TREE_H
using namespace std;

class Tree {
private:

    Queue<Node *> queue;
    Node *root = nullptr, *temp = nullptr;

    template<typename DATA>
    DATA input() {
        DATA d;
        cin.clear();
        cin >> d;
        return d;
    }

public:
    Node *insert() {
        int x;
        cout << "Enter RooT value Cannot Be -1\n";
        cin >> x;
        root = new Node;
        root->setData(x);
        queue.enqueue(root);
        Node *temp = nullptr;
        while (!(queue.isEmpty())) {
            temp = queue.dequeue();
            cout << "Enter left child value of " << temp->getData() << " Or Press -1 if there is no child\n";
            cin >> x;
            if (x != -1) {
                temp->setLeft(new Node);
                queue.enqueue(temp->getLeft());
                temp->getLeft()->setData(x);
            }
            cout << "Enter Right child value Or " << temp->getData() << " Press -1 if there is no child\n";
            x = input<int>();
            if (x != -1) {
                temp->setRight(new Node);
                queue.enqueue(temp->getRight());
                temp->getRight()->setData(x);
            }
        }
        return root;
    }

    void display(Node *n) {
        stack<Node *> stack;
        while (n || !stack.empty()) {
            if (n) {
                cout << n->getData() << " ";
                stack.push(n);
                n = n->getLeft();
            } else {
                n = stack.top();
                stack.pop();
                n = n->getRight();
            }
        }
    }
};

#endif //QUEUE_USING_LINKEDLIST_TREE_H
