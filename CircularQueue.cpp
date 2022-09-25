#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue
{
public:
    MyCircularQueue(int k)
    {
        base.resize(k);
        head = 0, tail = 0;
        reset = true;
    }

    bool enQueue(int value)
    {
        if (isFull())
            return false;
        if (head == tail && reset)
            reset = false;
        base[tail] = value;
        tail = (tail + 1) % base.size();
        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;
        head = (head + 1) % base.size();
        if (head == tail && !reset)
            reset = true;
        return true;
    }

    int Front()
    {
        if (isEmpty())
            return -1;
        return base[head];
    }

    int Rear()
    {
        if (isEmpty())
            return -1;
        return base[(tail + base.size() - 1) % base.size()];
    }

    bool isEmpty()
    {
        if (tail == head && reset)
            return true;
        return false;
    }

    bool isFull()
    {
        if (tail == head && !reset)
            return true;
        return false;
    }

private:
    vector<int> base;
    int head;
    int tail;
    bool reset;
};

int main()
{

    return 0;
}