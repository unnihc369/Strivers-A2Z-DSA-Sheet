//Problem statement
//Given the head of a singly linked list of integers,find and return its length.

int length(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

/*
Java

public
class Solution
{
public
    static int length(Node head)
    {
        // Your code goes here
        if (head == null)
            return 0;
        int len = 1;
        while (head.next != null)
        {
            head = head.next;
            len++;
        }

        return len;
    }
}

*/

/*
Python

def length(head) :
    count = 0
    temp = head
    while temp is not None :
        count += 1
        temp = temp.next
    return count

*/