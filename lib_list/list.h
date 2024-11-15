/*
** EPITECH PROJECT, 2024
** list.h
** File description:
** .h for my linked list library
*/

#ifndef LIST_H_
    #define LIST_H_

typedef struct node_s {
    void *data;
    struct node_s *prev;
    struct node_s *next;
} node_t;

    typedef struct list_s {
        node_t *head;
        node_t *tail;
        int size;
    } list_t;

list_t *create_list(void);
void pushback(list_t *list, void *data);
void pushfront(list_t *list, void *data);
void popfront(list_t *list);
void popback(list_t *list);
#endif /* !LIST_H_ */
