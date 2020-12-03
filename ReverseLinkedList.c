#include <stdlib.h>
#include "ReverseLinkedList.h"

Node* ReverseLinkedList(Node* node) {
    Node* cur = node;
    Node* pre = NULL;
    Node* temp = NULL;

    while(cur) {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }

    return pre;
}

Node* CreateLinkedList(int* array, int length) {
    int i = 0;
    Node* cur = NULL;
    Node* temp = NULL;
    Node* head = NULL;

    for(i = 0; i < length; i++) {
        temp = malloc(sizeof(Node));
        if (temp == NULL) {
            DestoryLinkedList(head);
            return NULL;
        }
        temp->val = array[i];
        temp->next = NULL;

        if(cur)
            cur->next = temp;
        else
            head = temp;
        
        cur = temp;
    }

    return head;
}

void DestoryLinkedList(Node* node) {
    Node* cur = node;
    Node* temp = NULL;

    while(cur) {
        temp = cur->next;
        free(cur);
        cur = temp;
    }

    return;
}
