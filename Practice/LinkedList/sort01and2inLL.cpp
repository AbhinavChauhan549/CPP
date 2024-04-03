#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next;
        }
    }
};

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
//---------------------------------------------------------------------------------------------------------------------------

// Approach 1 is basic Brute force Approach there is a data replacement in this approach
node *sort01and2(node *&head)
{
    int countOne = 0;
    int countZero = 0;
    int countTwo = 0;

    if (head == NULL)
    {
        return NULL;
    }
    node *temp = head;
    while (temp != NULL)
    {
        int value = temp->data;
        if (value == 0)
        {
            countZero++;
        }
        else if (value == 1)
        {
            countOne++;
        }
        else
        {
            countTwo++;
        }
        temp = temp->next;
    }

    node *tem = head;
    while (countZero != 0)
    {
        tem->data = 0;
        countZero--;
        tem = tem->next;
    }
    while (countOne != 0)
    {
        tem->data = 1;
        countOne--;
        tem = tem->next;
    }
    while (countTwo != 0)
    {
        tem->data = 2;
        countTwo--;
        tem = tem->next;
    }

    return head;
}
//======================================================================================================================================

// Approach 2 is without datd replacement

void populate(node *&tail, node *&curr)
{
    tail->next = curr;
    tail = curr;
}
node *sort(node *&head)
{

    // We will create three seprate LL for one zero and two

    node *zeroHead = new node(-1);
    node *zeroTail = zeroHead;
    node *oneHead = new node(-1);
    node *oneTail = oneHead;
    node *twoHead = new node(-1);
    node *twoTail = twoHead;

    node *curr = head;
    // Create a seprate three LL for 0 , 1 and 2
    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            populate(zeroHead, curr);
        }
        else if (value == 1)
        {
            populate(oneHead, curr);
        }
        else
        {
            populate(twoHead, curr);
        }
        curr = curr->next;
    }

    // Merge all three LL together
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    zeroTail->next = oneHead->next;
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // twoTail->next=NULL;
    // oneTail->next=twoHead->next;
    // zeroTail->next=oneHead->next;

    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}
//===============================================================================================================
int main()
{
    node *first = new node(2);
    node *head = first;
    node *tail = first;
    insertAtTail(tail, 0);
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);
    insertAtTail(tail, 0);
    insertAtTail(tail, 1);
    insertAtTail(tail, 1);
    print(head);
    cout << "\nAfter Sorting the Linked List : " << endl;
    node *result = sort01and2(head);
    print(result);
    node *ans = sort(head);
    cout << "\nAfter Sorting the Linked List : " << endl;
    print(ans);
    return 0;
}