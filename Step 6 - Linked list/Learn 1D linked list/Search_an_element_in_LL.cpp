#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int solution(struct node *ptr, int key)
{
    while (ptr != NULL)
    {
        if(ptr->data == key) return true; //don't forget to use the comparison operator to check
        ptr = ptr->next;
    }
    return false;
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

    cout << solution(head, 2) << endl;
    return 0;
}