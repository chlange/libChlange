#include <chlange/linkedList.h>
#include <errno.h>

Node *list_getNodeAtPosition(LinkedList *list, size_t position) {
    if(list == NULL || position > list->size) {
        errno = EINVAL;
        return NULL;
    }

    Node *node = list->head;

    while(position--) {
        if(node == NULL) {
            /* Less nodes in list than in size variable */
            errno = EFAULT;
            return NULL;
        }
        node = node->next;
    }

    return node;
}
