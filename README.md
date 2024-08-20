# LockQueue
LockQueue is a std::queue which can be used int multi-thread enviroment.

# Usage
在C++中我们常用std::queue作为消息的缓存队列，但是在设计程序时往往会涉及生产者-消费者模型，而原始的std::queue并不是线程安全的。
这里实现的LockQueue通过锁的方式，保证了线程安全。

只需要包含头文件，就可以使用。