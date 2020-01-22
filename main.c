#include "./ex00/ft_create_elem.c"
#include "./ex01/ft_list_push_back.c"
#include "./ex02/ft_list_push_front.c"
#include <stdio.h>
#include "./ex00/ft_list.h"

int		main()
{
	char c1 = 'a';
	char c2 = 'b';
	char c3 = 'c';
	char c0 = '1';

	t_list *head;
	t_list *curr;

	head = ft_create_elem(&c1);
	ft_list_push_back(&head, &c2);
	ft_list_push_back(&head, &c3);
	ft_list_push_front(&head, &c0);

	//print list
	curr = head;
	while (curr)
	{
		char *ptr = curr->data;
		printf("%c\n", *ptr);
		curr = curr->next;
	}
		return (0);
}
