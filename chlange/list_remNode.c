#include <chlange/linkedList.h>
#include <errno.h>

Node *list_remNode(LinkedList *list, Node *node) {
    if(list == NULL || node == NULL) {
        errno = EINVAL;
        return NULL;
    }

    if(node->prev == NULL && node->next == NULL) {
        /* Head and tail */
        list->tail = NULL;
        list->head = NULL;
    } else if(node->prev == NULL && node->next != NULL) {
        /* Head with at least one node more */
        node->next->prev = NULL;
        list->head = node->next;
    } else if(node->prev != NULL && node->next != NULL) {
        /* Between two elements */
        node->prev->next = node->next;
        node->next->prev = node->prev;
    } else {
        /* Tail with at least one node more */
        node->prev->next = NULL;
        list->tail = node->prev;
    }

    list->size--;

    return node;
}
