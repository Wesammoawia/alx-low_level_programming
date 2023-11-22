#include "lists.h"

/**
* find_listint_loop - finds the loop contained in
* a listint_t linked list
* @head: a pointer to the head of the listint_t list
* Return: if there is no loop - NULL
* otherwise - the address of the node where the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tor, *hare;
if (head == NULL || head->next == NULL)
return (NULL);
tor = head->next;
hare = (head->next)->next;
while (hare)
{
if (tor == hare)
{
tor = head;
while (tor != hare)
{
tor = tor->next;
hare = hare->next;
}
return (tor);
}
tor = tor->next;
hare = (hare->next)->next;
}
return (NULL);
}
