#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int solution(struct node *head, int c)
{
    struct node *slow = head;
    struct node *fast = head;
    int count = 1;

    while(fast->next != NULL && fast->next->next != NULL && fast != slow){
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = fast->next;
    while(fast != slow){
        count++;
        fast = fast->next;
    }
    return count;
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

    cout << solution(head, 2) << endl;
    return 0;
}