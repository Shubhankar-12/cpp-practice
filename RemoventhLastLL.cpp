#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *fs = head, *sl = head;
    for (int i = 0; i < n; i++)
    {
        fs = fs->next;
    }
    if (!fs)
        return head->next;
    while (fs->next)
    {
        fs = fs->next;
        sl = sl->next;
    }
    sl->next = sl->next->next;
    return head;
}

int main()
{

    return 0;
}