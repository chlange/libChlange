#include <chlange/linkedList.h>
#include <errno.h>

Node *list_append(LinkedList *list, void *data) {
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

    if(list->size == 0) {
        list->head = node;
        list->tail = node;
    } else if (list->size >= 1) {
        node->prev = list->tail;
        list->tail->next = node;
        list->tail = node;
    }

    list->size++;

    return node;
}
