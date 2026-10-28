#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
int main()
{
    node *first, *last, *temp;
    cout << "Enter no of element insert inside a list : ";
    int n;
    cin >> n;
    cout << "Enter Element of list 1 : ";
    first = new node;
    cin >> first->data;
    first->link = NULL;
    temp = first;
    for (int i = 2; i <= n; i++)
    {
        cout << "Enter Element of list " << i << " : ";
        last = new node;
        cin >> last->data;
        last->link = NULL;
        temp->link = last;
        temp = temp->link;
    }
    cout << "Traverse each and every element before deletion : ";
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->link != nullptr)
        {
            cout << "->";
        }
        temp = temp->link;
    }
    cout << "Enter which element you want to delete : ";
    int del;
    cin >> del;
    temp = first;
    while (temp != NULL)
    {
        if (temp->data == del)
        {
            node *temp2;
            temp->data = temp->link->data;
            temp->link = temp->link->link;
            temp2 = temp->link;
            delete temp2;
        }
        temp = temp->link;
    }
    cout << "\nTraverse each and every element after deletion : ";
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->link != nullptr)
        {
            cout << "->";
        }
        temp = temp->link;
    }
    return 0;
}