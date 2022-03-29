#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {} 
};

int main(void)
{
    ListNode* head;

    ListNode* dummyHead = new ListNode();
    dummyHead->next = head;

    ListNode* cur = dummyHead;
    while (cur->next != nullptr && cur->next->next != nullptr)
    {
        ListNode* node1 = cur->next;
        ListNode* node2 = cur->next->next;
        ListNode* node3 = cur->next->next->next;

        cur->next = node2;
        cur->next->next = node1;
        cur->next->next->next = node3;

        cur = cur->next->next;
    }

    return 0;
}