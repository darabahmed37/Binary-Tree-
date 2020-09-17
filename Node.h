//
// Created by darab on 17/9/20.
//

#ifndef QUEUE_USING_LINKEDLIST_NODE_H
#define QUEUE_USING_LINKEDLIST_NODE_H
class Node {
    int data;
    Node *left = nullptr, *right = nullptr;
public:
    int getData() const {
        return data;
    }

    void setData(int data) {
        Node::data = data;
    }

    Node *getLeft() const {
        return left;
    }

    void setLeft(Node *left) {
        Node::left = left;
    }

    Node *getRight() const {
        return right;
    }

    void setRight(Node *right) {
        Node::right = right;
    }
};
#endif //QUEUE_USING_LINKEDLIST_NODE_H
