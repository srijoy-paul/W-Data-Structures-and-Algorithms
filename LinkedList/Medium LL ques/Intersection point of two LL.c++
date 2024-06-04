/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// optimized solution
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp = headA;
        ListNode *temp2 = headB;
        while (temp != temp2)
        {
            temp = temp->next;
            temp2 = temp2->next;

            if (temp == temp2)
                break;

            if (temp == NULL)
                temp = headB;
            if (temp2 == NULL)
                temp2 = headA;
        }
        return temp;
    }
};

// Better solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{

private:
    ListNode *findIntersectionPoint(ListNode *t1, ListNode *t2, int d)
    {
        while (d)
        {
            d--;
            t2 = t2->next;
        }
        while (t1 != t2)
        {
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
    }

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp = headA;
        int cntL1 = 0, cntL2 = 0;
        while (temp != NULL)
        {
            cntL1++;
            temp = temp->next;
        }
        temp = headB;
        while (temp != NULL)
        {
            cntL2++;
            temp = temp->next;
        }

        if (cntL1 < cntL2)
        {
            return findIntersectionPoint(headA, headB, cntL2 - cntL1);
        }
        else
        {
            return findIntersectionPoint(headB, headA, cntL1 - cntL2);
        }
    }
};

// Niave or hashmap solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        map<ListNode *, int> mpp;
        ListNode *temp = headA;
        while (temp != NULL)
        {
            mpp[temp] = 1;
            temp = temp->next;
        }
        temp = headB;
        while (temp != NULL)
        {
            if (mpp.find(temp) != mpp.end())
            {
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
};