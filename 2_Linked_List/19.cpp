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
    int n;

    ListNode* dummyHead = new ListNode(0, head);
    ListNode* fast = dummyHead;
    ListNode* slow = dummyHead;

    while (n--) { fast = fast->next; }

    while (fast->next != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode* tmpNode = slow->next;
    slow->next = tmpNode->next;
    delete tmpNode;

    return dummyHead->next;
}