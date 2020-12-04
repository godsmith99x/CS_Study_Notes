#include <random>


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

    ListNode *list {nullptr};
    int listLength {0};
    
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode *head) 
    {
        list = head;
        
        while (head != NULL)
        {
            head = head -> next;
            ++listLength;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() 
    {
        std::random_device seed;
        std::mt19937 seeded_eng(seed());
        std::uniform_int_distribution<> distribution(0, listLength);
        
        ListNode *head = list;
        
        int randomNode = distribution(seeded_eng);
        
        while(--randomNode > 0)
        {
            head = head -> next;
        }
        
        return head -> val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */