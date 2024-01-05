#include "lists.h"
/**
 * is_palindrome - function that checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *slow, *fast = *head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	slow = reverse(slow);
	fast = *head;

	while (slow != NULL)
	{
		if (slow->data != fast->data)
			return (0);

		slow = slow->next;
		fast = fast->next;
	}
	return (1);
}
