#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {} 
    ListNode(int x, ListNode* ptr) : val(x), next(ptr) {} 
};

ListNode* main(void)
{
    ListNode* head;
    ListNode* fast = head;
    ListNode* slow = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
        {
            ListNode* node1 = fast;
            ListNode* node2 = head;

            while (node1 != node2)
            {
                node1 = node1->next;
                node2 = node2->next;
            }

            return node1;
        }
    }

    return nullptr;
}