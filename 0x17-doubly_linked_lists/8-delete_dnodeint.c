#include "lists.h"

/**
 * delete_dnodeint_at_index - Insert node at the index.
 * @head: Pointer at top of the nodes
 * @index: position to free
 * Return: On succes 1 otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;

	if (!*head)
		return (-1);

	current = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		if ((*head))
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current && --index)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	temp->next->prev = current;
	free(temp);
	return (1);
}
