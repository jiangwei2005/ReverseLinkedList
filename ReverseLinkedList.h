#ifndef _REVERSE_LINKED_LIST_H_
#define _REVERSE_LINKED_LIST_H_

typedef struct LinkedNode {
    int val;
    struct LinkedNode * next;
} Node;

Node* CreateLinkedList(int* array, int length);
Node* ReverseLinkedList(Node* node);
void DestoryLinkedList(Node* node);

#endif
