#include <chlange/linkedList.h>
#include <errno.h>

Node *list_remTail(LinkedList *list) {
    if(list == NULL) {
        errno = EINVAL;
        return NULL;
    }

    if(list->size == 0) {
        errno = NOERROR;
        return NULL;
    }

    Node *deprecatedNode = list->tail;

    if(list->size == 1) {
        list->head = NULL;
        list->tail = NULL;
    } else if(list->size >= 2) {
        list->tail->prev->next = NULL;
        list->tail = list->tail->prev;
    }

    list->size--;

    return deprecatedNode;
}
