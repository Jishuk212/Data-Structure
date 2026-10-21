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
    cout << "Enter element to be insert at the last of the lenked list : ";
    last = new node;
    cin >> last->data;
    last->link = NULL;
    temp = first;
    while (temp != NULL)
    {
        if (temp->link == NULL)
        {
            temp->link = last;
            break;
        }
        temp = temp->link;
    }
    cout << "Traverse each and every element : ";
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->link != NULL)
        {
            cout << "->";
        }
        temp = temp->link;
    }
    return 0;
}