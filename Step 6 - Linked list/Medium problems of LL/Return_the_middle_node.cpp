#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int solution(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    // return slow;
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