#include "sort.h"
/**
 *insertion_sort_list - sort a double linked list with  Insertion sort algorithm
 *@list: double pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *aux;
listint_t *auxOther = *list;
listint_t *i = *list;

if  (auxOther == NULL)
return;
auxOther = auxOther->next;
while (auxOther !=NULL)
{
i = auxOther;
auxOther = auxOther->next;
while (i->prev != NULL && i->n < i->prev->n)
{
if(i->next != NULL)
i->next->prev = i->prev;
if(i->prev->prev != NULL)
i->prev->prev->next = i;
else
*list = i;
i->prev->next = i->next;
i->next = i->prev;
aux = i->prev->prev;
i->prev->prev = i;
i->prev = aux;
print_list(*list);
}
}
}
