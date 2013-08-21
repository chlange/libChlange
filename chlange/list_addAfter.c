#include <chlange/linkedList.h>
#include <errno.h>

Node *list_addAfter(LinkedList *list, Node *node, void *data) {
    if(list == NULL || node == NULL) {
        errno = EINVAL;
        return NULL;
    }

    Node *newNode = (Node *)malloc(sizeof(*newNode));
    if(newNode == NULL) {
        errno = ENOMEM;
        return NULL;
    }

    newNode->data = data;

    if(node->next == NULL) {
        /* Add as tail */
        node->next = newNode;
        newNode->prev = node;
        newNode->next = NULL;
        list->tail = newNode;
    } else {
        /* Between two nodes */
        node->next->prev = newNode;
        newNode->next = node->next;
        newNode->prev = node;
        node->next = newNode;
    }

    list->size++;

    return newNode;
}
