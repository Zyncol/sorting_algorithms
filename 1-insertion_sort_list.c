#include "sort.h"

/**
 *len_list - returns the length of a linked list
 *@h: pointer to the list
 *Return: length of list
 **/
int lits_lika(listint_t *h)
{
int kuta = 0;
while (h != NULL)
{
kuta++;
h = h->next;
}
return (kuta);
}
/**
 * insertion_sort_list - uses an insertion alorithm
 * @list: a pointer to the list
 **/
void insertion_sort_list(listint_t **list)
{
listint_t *pano = NULL, *fst = NULL;
listint_t *scnd = NULL;
listint_t *ird = NULL;
listint_t *rt = NULL;
if (!list || !(*list) || lits_lika(*list) < 2)
return;
pano = *list;
while (pano != NULL)
{
if (pano->prev && pano->n < pano->prev->n)
{
fst = pano->prev->prev;
scnd = pano->prev;
ird = pano;
rt = pano->next;
scnd->next = rt;
if (rt)
rt->prev = scnd;
ird->next = scnd;
ird->prev = fst;
if (fst)
fst->next = ird;
else
*list = ird;
scnd->prev = ird;
pano = *list;
print_list(*list);
continue;
}
else
pano = pano->next;
}
}
