/*
    source: 
      https://leetcode.com/problems/remove-duplicates-from-sorted-list
    
    Given a sorted linked list, delete all duplicates such that each element appear only once.

    Example 1:

    Input: 1->1->2
    Output: 1->2

    Example 2:

    Input: 1->1->2->3->3
    Output: 1->2->3


    
    result:
      Runtime: 16 ms, faster than 53.27% of C++ online submissions for Remove Duplicates from Sorted List.
      Memory Usage: 12 MB, less than 75.29% of C++ online submissions for Remove Duplicates from Sorted List.
      
      
*/

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
    
     ListNode* removeNode( ListNode *pPrevNode, ListNode* pNode)
    {
        /*
            head->next points to the second node
            second->next points to the third node
            
            to remove second
            
            head->next must point to the third node
            then remove the second node
        */
        
        if( pPrevNode == nullptr || pNode == nullptr )
        {
            return nullptr;
        }
        
        pPrevNode->next = pNode->next;
        
        delete pNode;
        
        return pPrevNode->next;
    }
    
    
    ListNode* deleteDuplicates(ListNode* pHead) {
        
        // empty list
        if( pHead == nullptr )
        {
            return nullptr;
        }
        
        // one size list
        if( pHead->next == nullptr )
        {
            return pHead;
        }
        
        ListNode *firstNode = pHead;
        ListNode *secondNode = pHead->next;
        
            
        while( secondNode != nullptr )
        {
            if( firstNode->val == secondNode->val )
            {
                secondNode = removeNode( firstNode, secondNode );
            }
            else
            {
                firstNode = secondNode;
                secondNode = secondNode->next;
            }
            
        }
        return pHead;
    }
};
