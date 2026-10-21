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
    temp = first;
    int target;
    cout << "Enter element to be searched in linked list : ";
    cin >> target;
    bool flag = false;
    while (temp != nullptr)
    {
        if (temp->data == target)
        {
            flag = true;
            break;
        }
        temp = temp->link;
    }
    cout << (flag ? "Element Found" : "Element not found");
    return 0;
}