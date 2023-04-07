#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
int solution(struct node *head)
{
    struct node *ptr;
    head = ptr;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);
    // return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;
    head->prev = NULL;

    second->data = 2;
    second->prev = head;

    third->data = 3;
    third->next = NULL;
    third->prev = second;

    solution(head);
    return 0;
}