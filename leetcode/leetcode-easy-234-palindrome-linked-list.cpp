//https://leetcode.com/problems/palindrome-linked-list/

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

class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        int i = 0;
        vector<int> vec;
        ListNode *ptr = head;
        
        ptr = head;
        while(ptr)
        {
            vec.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        ptr = head;
        while(ptr)
        {
            if (ptr->val != vec.back())
                return (0);
            vec.pop_back();
            ptr = ptr->next;
        }
        
    return (1);
    }
};
