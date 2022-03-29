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
    ListNode* head = new ListNode();

    ListNode* tmp;
    ListNode* cur = head;
    ListNode* pre = nullptr; // 统一反转后所有的next

    while (cur != nullptr)
    {
        tmp = cur->next;
        cur->next = pre;

        pre = cur;
        cur = tmp;
    }

    return 0;
}