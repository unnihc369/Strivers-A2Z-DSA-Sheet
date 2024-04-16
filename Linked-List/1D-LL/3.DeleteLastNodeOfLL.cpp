//Problem statement
  
//You are given the head of a linked list ‘list’ of size ‘N’.
//Your task is to delete the linked list 's last node and return the linked list' s head.

Node *deleteLast(Node *list)
{
    Node *head = list;

    while (head->next->next != nullptr)
    {
        head = head->next;
    }
    delete head->next;
    head->next = nullptr;
    return list;
}

/*
Java

public class Solution {
    public static Node deleteLast(Node list){
        Node head = list;

        while (head.next != null && head.next.next != null)
        {
            head = head.next;
        }

        head.next = null;
        return list;
    }
}

*/

/*
Python

def deleteLast(list: Node) -> Node:
    head = list
    while head.next.next != None:
        head = head.next

    head.next = None
    return list

*/