//	 https://leetcode.com/problems/middle-of-the-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode* middleNode(ListNode* head)
    {   
        ListNode *ptr = head;
        short int size = 1;
        while(ptr->next)
        {
            ptr = ptr->next;
            size++;
        }
        
        short int middle = (size / 2) + 1;

        cout << size << endl;
        cout << middle << endl;
        
        ptr = head;
        for(int i = 1; i < middle; i++)
            ptr = ptr->next;
        
        return (ptr);
    }
};
