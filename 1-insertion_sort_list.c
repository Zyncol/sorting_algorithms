#include "sort.h"
/**
* list_leng - returns the length of array
* @pd: pointer's head
* Return: the length
**/
int list_leng(listint_t *pd)
{
int s;
s = 0;
while (pd != NULL)
{
s++;
pd = pd->next;
}
return (s);
}
/**
* insertion_sort_list - sortin array using insertion
* @list: a pointer to the array
**/
void insertion_sort_list(listint_t **list)
{
listint_t *liv = NULL, *fst = NULL;
listint_t *scnd = NULL, *trd = NULL, *frth = NULL;
if (!(*list) || !list || list_leng(*list) < 2)
return;
liv = *list;
while (liv != NULL)
{
if (liv->prev && liv->n < liv->prev->n)
{
fst = liv->prev->prev;
scnd = liv->prev;
trd = liv;
frth = liv->next;
scnd->next = frth;
if (frth != NULL)
frth->prev = scnd;
trd->next = scnd;
trd->prev = fst;
if (fst != NULL)
fst->next = trd;
else
*list = trd;
scnd->prev = trd;
liv = *list;
print_list(*list);
continue;
}
else
liv = liv->next;
}
}
