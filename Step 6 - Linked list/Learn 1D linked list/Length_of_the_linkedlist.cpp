#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int count_node(struct node *ptr)
{
    int count = 0;
    while(ptr != NULL){
        count ++;
        ptr = ptr->next;
    }
    return count;
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

    cout << count_node(head) << endl;
    return 0;
}