#include<queue>
#include<mutex>
using namespace std;

/*
    This is FIFO queue
 */
template <typename T>
class LockQueue {
    public:
        // insert a new element at the end of queue
        void push(const T& val)
        {
            std::lock_guard<std::mutex> lock(mtx);
            q.push(val);
        }
        // remove the oldest element
        void pop()
        {
            std::lock_guard<std::mutex> lock(mtx);
            q.pop();
        }
        // return the oldest element
        T& front()
        {
            std::lock_guard<std::mutex> lock(mtx);
            return q.front();
        }
        bool empty()
        {
            std::lock_guard<std::mutex> lock(mtx);
            return q.empty();
        }
        size_t size()
        {
            std::lock_guard<std::mutex> lock(mtx);
            return q.size();
        }
    private:
        std::queue<T> q;
        std::mutex mtx;

};
