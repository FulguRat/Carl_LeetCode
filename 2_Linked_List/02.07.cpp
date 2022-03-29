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
    ListNode* headA;
    ListNode* headB;
    ListNode* curA = headA;
    ListNode* curB = headB;
    
    int lenA = 0;
    int lenB = 0;

    while (curA != nullptr) { curA = curA->next; lenA++; }
    while (curB != nullptr) { curB = curB->next; lenB++; }

    curA = headA;
    curB = headB;

    if (lenB > lenA)
    {
        swap(curA, curB);
        swap(lenA, lenB);
    }

    int offset = lenA - lenB;
    while (offset--)
    {
        curA = curA->next;
    }

    while (curA != nullptr)
    {
        if (curA == curB) { return curA; }

        curA = curA->next;
        curB = curB->next;
    }

    return nullptr;
}