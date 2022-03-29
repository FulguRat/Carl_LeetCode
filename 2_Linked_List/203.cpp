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
    int val;

    while (head != nullptr && head->val == val)
    {
        ListNode* tmpNode = head;
        head = head->next;
        delete tmpNode;
    }

    ListNode* curNode = head;
    while (curNode != nullptr && curNode->next != nullptr)
    {
        if (curNode->next->val == val)
        {
            ListNode* tmpNode = curNode->next;
            curNode->next = curNode->next->next;
            delete tmpNode;
        }
        else
        {
            curNode = curNode->next;
        }
    }

    return 0;
}