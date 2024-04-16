//Problem statement
//You are given a Singly Linked List of integers with a head pointer.Every node of the Linked List has a value written on it.

int searchInLinkedList(Node<int> *head, int k){
    if (head->data == k)
        return 1;
    while (head != nullptr)
    {
        if (head->data == k)
        {
            return 1;
        }
        head = head->next;
    }
    return 0;
}

/*
Java

public class Solution
{
    public static int searchInLinkedList(Node head, int k)
    {
        if (head == null) {
            return 0;
        }

        Node ptr = head;

        while (ptr != null) {
            if (ptr.data == k) {
                return 1;
            }
            ptr = ptr.next;
        }
        return 0;
    }
}

*/

/*
Python

def searchInLinkedList(head, k):
    if head is None:
        return 0;

    ptr = head
    while ptr != None:
        if ptr.data == k:
            return 1

        ptr = ptr.next
    return 0

*/