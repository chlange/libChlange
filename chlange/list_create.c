#include <chlange/linkedList.h>
#include <errno.h>

LinkedList *list_create(void) {
    LinkedList *list = (LinkedList *)malloc(sizeof(*list));
    if(list == NULL) {
        errno = ENOMEM;
    } else {
        list->head = NULL;
        list->tail = NULL;
        list->size = 0;
    }
    return list;
}
