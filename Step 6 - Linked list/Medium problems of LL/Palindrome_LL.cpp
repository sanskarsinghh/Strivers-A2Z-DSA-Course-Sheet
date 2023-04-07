// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode *slow = head, *fast = head, *prev, *temp;
//         while (fast && fast->next)
//             slow = slow->next, fast = fast->next->next;
//         prev = slow, slow = slow->next, prev->next = NULL;
//         while (slow)
//             temp = slow->next, slow->next = prev, prev = slow, slow = temp;
//         fast = head, slow = prev;
//         while (slow)
//             if (fast->val != slow->val) return false;
//             else fast = fast->next, slow = slow->next;
//         return true;
//     }
// };

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

bool solution(struct node *head)
{
    struct node *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow)
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev;
        while (slow)
            if (fast->data != slow->data) return false;
            else fast = fast->next, slow = slow->next;
        return true;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    cout << solution(head) << endl;
    return 0;
}