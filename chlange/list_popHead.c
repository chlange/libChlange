#include <chlange/linkedList.h>
#include <errno.h>

Node *list_popHead(LinkedList *list) {
    if(list == NULL) {
        errno = EINVAL;
        return NULL;
    }

    if(list->size <= 0 || list->head == NULL) {
        errno = 0;
        return NULL;
    }

    Node *deprecatedNode = list->head;
    list->head = list->head->next;

    if(list->size == 1)
        list->tail = NULL;
    else if(list->size >= 2)
        list->head->prev = NULL;

    list->size--;

    return deprecatedNode;
}
