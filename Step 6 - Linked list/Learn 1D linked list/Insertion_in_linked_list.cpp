#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
    while(ptr!=NULL){
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int insertion_at_begin(struct node *head, int k){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = k; 
    ptr->next = head;
    head = ptr;
    // return head;
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

    traversal(head);
    return 0;
}