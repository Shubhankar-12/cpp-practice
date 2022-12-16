#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    MyQueue()
    {
    }

    stack<int> s, s1;

    void push(int x)
    {
        while (!s.empty())
        {
            s1.push(s.top());
            s.pop();
        }
        s.push(x);

        while (!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
        }
    }

    int pop()
    {
        int x = s.top();
        s.pop();
        return x;
    }

    int peek()
    {
        return s.top();
    }

    bool empty()
    {
        return s.empty();
    }
};
