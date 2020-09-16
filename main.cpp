#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue<int> queue(10);
    for (int i = 0; i <10 ; ++i) {
        queue.enqueue(i);
    }

    cout<<queue.last();
}
