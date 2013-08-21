#include <chlange/linkedList.h>
#include <errno.h>

Node *list_prepend(LinkedList *list, void *data) {
    if(list == NULL) {
        errno = EINVAL;
        return NULL;
    }

    Node *node = (Node *)malloc(sizeof(*node));
    if(node == NULL) {
        errno = ENOMEM;
        return NULL;
    }

    node->data = data;
    node->prev = NULL;

    if(list->size == 0) {
        list->head = node;
        list->tail = node;
    } else {
        node->next = list->head;
        list->head->prev = node;
        list->head = node;
    }

    list->size++;

    return node;
}
