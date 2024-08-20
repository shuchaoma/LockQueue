#include "LockQueue.h"
#include <map>
#include <string>
#include <iostream>
using namespace std;
struct Message
{
    int a;
    int b ;
    void print(){
        cout<<"\t: a=" << a <<"\t" << "b= " << b << std::endl;
    }
};

int main(void) {
    LockQueue<Message> msg_queue;
    Message msg1 = {1, 2};
    Message msg2 = {3, 4};
    Message msg3 = {5, 6};
    Message msg4 = {7, 8};
    msg_queue.push(msg1);
    msg_queue.push(msg2);
    msg_queue.push(msg3);
    msg_queue.push(msg4);
    cout << "queue.size: "<< msg_queue.size() << std::endl;

    Message msg = msg_queue.front();
    msg.print();

    msg_queue.pop();
    msg_queue.front().print();
    cout << "queue.size: "<< msg_queue.size() << std::endl;

    msg_queue.pop();
    msg_queue.front().print();
    cout << "queue.size: "<< msg_queue.size() << std::endl;

    msg_queue.pop();
    msg_queue.front().print();
    cout << "queue.size: "<< msg_queue.size() << std::endl;

    msg_queue.pop();
    msg_queue.front().print();
    cout << "queue.size: "<< msg_queue.size() << std::endl;




    if (msg_queue.empty()) {
        cout << "queue is empty" << std::endl;
    }
    msg_queue.pop();
    msg_queue.pop();
    msg_queue.pop();
    msg_queue.pop();
}