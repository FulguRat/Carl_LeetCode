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
    vector<int> listArray = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int num = listArray.size();

    // New RAM
    vector<ListNode*> nodes;
    for (int i = 0; i < num; i++)
    {
        ListNode* node = new ListNode();
        nodes.push_back(node);
    }

    // Construct linked list
    for (int i = 0; i < num ; i++)
    {
        nodes[i]->val = listArray[i];
        if (i + 1 < num) { nodes[i]->next = nodes[i + 1]; }
    }

    // Output
    ListNode* dummyHead = new ListNode();
    dummyHead->next = nodes.front();

    ListNode* cur = dummyHead;
    while (cur->next != nullptr) {
        cout << cur->next->val << " ";
        cur = cur->next;
    }
    cout << endl;

    return 0;
}