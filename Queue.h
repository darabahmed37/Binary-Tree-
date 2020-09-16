//
// Created by darab on 15/9/20.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include <iostream>

template<class Data_Type_of_Queue>
class Queue {
private:
    int index = -1, size;

    Data_Type_of_Queue *array;
public:
    explicit Queue(int size) {
        array = new Data_Type_of_Queue[size];
        Queue<Data_Type_of_Queue>::size = size;
    }

    void enqueue(Data_Type_of_Queue D) {
        array[++index] = D;

    }

    bool isFull() {
        if (size - 1 == index) {
            return true;
        }
        return false;
    }

    Data_Type_of_Queue dequeue() {
        if (index >= 0) {
            index--;
            return array[index + 1];
        }
        std::cerr << "QueueUsingArray is empty Now " << std::endl;
        return NULL;
    }

    Data_Type_of_Queue first() {
        if (!isEmpty())
            return array[0];
        else return NULL;
    }

    Data_Type_of_Queue last() {
        if (!isEmpty())

            return array[index];
        else return NULL;
    }

    bool isEmpty() {
        if (index == -1) {
            return true;

        }
        return false;
    }

    ~Queue() {
        delete[]array;
    }
};

#endif //QUEUE_QUEUE_H
