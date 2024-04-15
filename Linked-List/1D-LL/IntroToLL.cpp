// Problem statement

// You are given an array ‘Arr’ of size ‘N’ consisting of positive integers.
// Make a linked list from the array and return the head of the linked list.
// The head of the linked list is the first element of the array,and the tail of the linked list is the last element.

Node *constructLL(vector<int> &arr)
{
    Node *head = new Node();
    Node *temp = head;

    for (int i = 0; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = temp->next;
    }

    return head->next;
}

/*
Java

public class Solution {
    public static Node constructLL(int []arr) {
        int n = arr.length;

        Node head = new Node(arr[0]);
        Node temp = head;

        for(int i = 1; i < n; ++i) {
            Node curNode = new Node(arr[i]);
            temp.next = curNode;
            temp = temp.next;
        }

        return head;
    }
}

*/

/*
Python

def constructLL(arr: [int]) -> Node:
    n = len(arr)

    head = Node(arr[0])
    temp = head

    for i in range(1, n):
        curNode = Node(arr[i])
        temp.next = curNode
        temp = temp.next

    return head

*/