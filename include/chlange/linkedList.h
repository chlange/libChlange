#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <sys/cdefs.h>
#include <assert.h>
#include <stddef.h>
#include <errno.h>
#include <stdlib.h>

__BEGIN_DECLS

typedef struct _Node {
    struct _Node *prev;
	struct _Node *next;
	void *data;
} Node;

typedef struct {
	Node *head;
	Node *tail;
	size_t size;
} LinkedList;

/* 
 * Creates and returns a new list or NULL on error. 
 */
LinkedList *ll_createNew(void);

/* 
 * Appends a new node with attached data to list.
 * 
 * Returns (non-NULL) pointer to attached node.
 */
Node *ll_append(LinkedList *list, void *data);

/* 
 * Prepends a new node with attached data to list.
 * 
 * Returns (non-NULL) pointer to attached node.
 */
Node *ll_prepend(LinkedList *list, void *data);

/* 
 * Removes head of list.
 * 
 * Returns a pointer to deprecated head on success or NULL on error.
 * If list has no members NULL is returned, too, but errno is set to NOERROR!
 */
Node *ll_remHead(LinkedList *list);

/* 
 * Removes tail of list.
 * 
 * Returns a pointer to deprecated tail on success or NULL on error.
 * If list has no members NULL is returned, too, but errno is set to NOERROR!
 */
Node *ll_remTail(LinkedList *list);

/* 
 * Adds a new node with attached data after node in list.
 * 
 * Returns (non-NULL) pointer to added node.
 */
Node *ll_addAfter(LinkedList *list, Node *node, void *data);

/* 
 * Adds a new node with attached data before node in list.
 * 
 * Returns (non-NULL) pointer to added node.
 */
Node *ll_addBefore(LinkedList *list, Node *node, void *data);

/* 
 * Removes node from list. 
 * 
 * Returns (non-NULL) pointer to removed node.
 */
Node *ll_remNode(LinkedList *list, Node *node);

/*
 * Returns (non-NULL) pointer to node on position.
 * Position starts by 1!
 */
Node *ll_getNodeAtPosition(LinkedList *list, size_t position);

__END_DECLS

#endif
