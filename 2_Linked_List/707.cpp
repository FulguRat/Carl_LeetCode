#include <bits/stdc++.h>

using namespace std;

class MyLinkedList {
public:
    struct ListNode
    {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
    };

    MyLinkedList()
    {
        _dummyNode = new ListNode();
        _size = 0;
    }
    
    int get(int index) 
    {
        ListNode* head = _dummyNode->next;
        if (index > _size - 1 || index < 0) { return -1; }

        while (index--)
        {
            head = head->next;
        }

        return head->val;
    }
    
    void addAtHead(int val) 
    {
        ListNode* newNode = new ListNode(val);
        newNode->next = _dummyNode->next;
        _dummyNode->next = newNode;
        _size++;
    }
    
    void addAtTail(int val) 
    {
        ListNode* newNode = new ListNode(val);
        ListNode* head = _dummyNode;

        while (head->next != nullptr)
        {
            head = head->next;
        }
        head->next = newNode;
        _size++;
    }
    
    void addAtIndex(int index, int val) 
    {
        ListNode* newNode = new ListNode(val);
        ListNode* head = _dummyNode;

        if (index > _size) { return; }

        while (index--)
        {
            head = head->next;
        }
        newNode->next = head->next;
        head->next = newNode;
        _size++;
    }
    
    void deleteAtIndex(int index) 
    {
        ListNode* head = _dummyNode;
        ListNode* tmpNode;

        if (index >= _size) { return; }

        while (index--)
        {
            head = head->next;
        }
        tmpNode = head->next;
        head->next = tmpNode->next;
        delete tmpNode;
        _size--;
    }
    
private:
    ListNode* _dummyNode;
    int _size;
};

int main(void)
{
    MyLinkedList* linkedList = new MyLinkedList();
    linkedList->addAtHead(1);
    linkedList->addAtTail(3);
    linkedList->addAtIndex(1,2);   //链表变为1-> 2-> 3
    linkedList->get(1);            //返回2
    linkedList->deleteAtIndex(1);  //现在链表是1-> 3
    linkedList->get(1);            //返回3

    return 0;
}