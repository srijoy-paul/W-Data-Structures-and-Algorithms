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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp = head;
        vector<int> vec;
        while (temp != NULL)
        {
            vec.emplace_back(temp->val);
            if (temp->next != NULL)
                temp = temp->next->next;
            else
                break;
        }

        temp = head->next;
        while (temp != NULL)
        {
            vec.emplace_back(temp->val);
            if (temp->next != NULL)
                temp = temp->next->next;
            else
                break;
        }

        int i = 0;
        temp = head;
        while (temp != NULL)
        {
            temp->val = vec[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};

// Another appraoch
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenHead = head->next;
        while (even != NULL && even->next != NULL)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};