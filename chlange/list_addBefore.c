#include <chlange/linkedList.h>
#include <errno.h>

Node *list_addBefore(LinkedList *list, Node *node, void *data) {
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

    if(node->prev == NULL) {
        /* Add as head */
        newNode->next = node;
        newNode->prev = NULL;
        node->prev = newNode;
        list->head = newNode;
    } else {
        /* Between two nodes */
        newNode->next = node;
        newNode->prev = node->prev;
        node->prev->next = newNode;
        node->prev = newNode;
    }

    list->size++;

    return newNode;
}
