/*
** EPITECH PROJECT, 2024
** my_Linked_list
** File description:
** main
*/

#include "list.h"
#include <stdio.h>

int main(void)
{
    char str[] = "test";
    char tst[] = "coucou maxou";
    list_t *list;

    list = create_list();
    pushback(list, str);
    pushfront(list, tst);
    printf("head = %s\n", (char *) list->head->data);
    printf("tail = %s\n", (char *) list->tail->data);
    return 0;
}
