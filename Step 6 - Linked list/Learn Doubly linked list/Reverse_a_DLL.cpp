#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void solution(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        //commenting the below line will let the compiler traverse DLL in the opposite direction
        // ptr = ptr->next; //Doubly linked list can travel both ways
        ptr = ptr->prev; //Doubly linked list can travel both ways
    }
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
    head->prev = NULL;

    second->data = 2;
    second->next = third;
    second->prev = head;

    third->data = 3;
    third->next = NULL;
    third->prev = second;

    solution(third);
    return 0;
}