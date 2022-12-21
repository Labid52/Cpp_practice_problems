#include <iostream>
#include <conio.h>
#include<stdlib.h>>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = new Node;
Node *first = new Node;
Node *second = new Node;
void ins()
{
    int k, pos, ch;
    cout << "\nEnter an Element:";
    cin >> k;
    Node *temp1 = new Node;
    temp1->data = k;
    temp1->next = NULL;
    cout << "\nINSERT AS\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout << "\nEnter Your Choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
        temp1->next = head;
        head = temp1;
        cout << "Element Successfully Inserted";
        break;
    case 2:
        second->next = temp1;
        cout << "Element Successfully Inserted";
        break;
    case 3:
        cout << "\nEnter the Position to Insert:";
        cin >> pos;
        Node *prev, *cur;
        prev = NULL;
        cur = head;
        int count = 1;
        while (count != pos)
        {
            prev = cur;
            cur = cur->next;
            count++;
        }
        if (count == pos)
        {
            prev->next = temp1;
            temp1->next = cur;  // head -> first ->     ..... -> new .......->second , 
        }
        else
            cout << "\nNot Able to Insert";
        break;
    }
}
void del()
{
    Node *prev, *cur;
    int count = 1, pos, ch;
    cout << "\nDELETE\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout << "\nEnter Your Choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
        if (head != NULL)
        {
            cout << "\nDeleted Element is " << head->data;
            head = head->next;  // 1 2 3 , head -> 1 , head 2
        }
        else
            cout << "\nNot Able to Delete";
        break;
    case 2:
        if (head == NULL)
        {
            cout << "List is Already Empty";
        }
        else
        {
            cur = head;
            prev = head;
            /* Traverse to the last node of the list */
            while (cur->next != NULL)
            {
                prev = cur;
                cur = cur->next;
            }
            if (cur == head)
            {
                head = NULL;
            }
            else
            {
                prev->next = NULL;
            }
            // 1  2 3 , 1 2 ->null
            /* Delete the last node */
            free(cur);
            cout << "Node Successfully Deleted";
        }
        break;
    case 3:
        cout << "\nEnter the Position of Deletion:";
        cin >> pos;
        while (count != pos)
        {
            prev = cur;
            cur = cur->next;
            count++;
        }
        if (count == pos)
        {
            cout << "\nDeleted Element is: " << cur->data;
            prev->next = cur->next;
        }
        else
            cout << "\nNot Able to Delete";
        break;
    }
}

int main()
{
    int n;
    head->data = 1; // head = data + address
    head->next = first; // head -> first -> second
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = NULL;
    Node *temp = new Node;
    temp = head;
    cout << "Current Linked List is:";
    while (temp != NULL)
    {
        cout << "\n"<< temp->data << endl;
        temp = temp->next;
    }
label:
    cout << "Select the Operation You Want To Do:\n1:Insert a Element\n2:Delete a Element\n";
    cin >> n;
    switch (n)
    {
    case 1:
        ins();
        goto label;
        break;
    case 2:
        del();
        
      	break;
    default:
        cout << "Invalid Entry.Try Again";
        break;
       
    }
    cout << "\nElements of Linked List are :\n";
        Node *temp1 = new Node;
        temp1 = head;
        cout << "\nNew Linked List is:";
        while (temp1 != NULL)
        {
            cout << "\n"<< temp1->data << endl;
            temp1 = temp1->next;
        }
}
