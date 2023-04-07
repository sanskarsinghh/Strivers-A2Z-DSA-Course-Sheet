#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int solution(struct node *head)
{
    
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << solution(head) << endl;
    return 0;
}