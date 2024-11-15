#include "libft.h"
#include <stdio.h>
#include <string.h>

void	print_list(t_list *lst);

void	del(void *content);

void	rot1(void *content);

void	*rot2(void *content);

int		main(void)
{
	t_list **head = (t_list **) malloc(sizeof(t_list *));
	if (!head)
		return (0);

	char buf[20];
	char option;
	while (1)
	{
		option = 0;
		printf("1: Add front\n");
		printf("2: Add back\n");
		printf("3: Clear list\n");
		printf("4: HAXOR\n");
		printf("5: LSTMAP TEST\n\n");

		printf("p: Print list\n");
		printf("q: Quit\n");

		option = fgetc(stdin);
		printf("%c\n", option);
		fgetc(stdin);
		if (option == '1')
		{
			printf("- Enter content: ");
			fgets(buf, 20, stdin);
			size_t len = strlen(buf);
			char *new = (char *) malloc(len * sizeof(char));
			if (!new)
				return (0);
			memcpy(new, buf, len);
			new[len] = 0;
			ft_lstadd_front(head, ft_lstnew(new));
		}
		else if (option == '2')
		{
			printf("- Enter content: ");
			fgets(buf, 20, stdin);
			size_t len = strlen(buf);
			char *new = (char *) malloc(len * sizeof(char));
			if (!new)
				return (0);
			memcpy(new, buf, len);
			new[len] = 0;
			ft_lstadd_back(head, ft_lstnew(new));
		}
		else if (option == '3')
		{
			printf("- Clearing ...\n");
			ft_lstclear(head, del);
		}
		else if (option == '4')
		{
			printf("- Rotating ...\n");
			ft_lstiter(*head, rot1);
		}
		else if (option == '5')
		{
			printf("- Cloning and rot2'ing ...\n");
			t_list **clone = (t_list **) malloc(sizeof(t_list *));
			*clone = ft_lstmap(*head, rot2, del);
			ft_lstlast(*head)->next = *clone;
		}
		else if (option == 'p')
			print_list(*head);
		else
			break;
	}
	ft_lstclear(head, del);
	free(head);
	printf("Good bye, Dave . . .\n");
	return (0);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("\t - %s\n", (char *) lst->content);
		lst = lst->next;
	}	
}

void	del(void *content)
{
	free(content);
	content = NULL;
}

void	rot1(void *content)
{
	char *s = (char *) content;
	for (int i = 0; s[i]; i++)
		s[i] = s[i] + 1;
}

void	*rot2(void *content)
{
	char *s = (char *) content;
	for (int i = 0; s[i]; i++)
		s[i] = s[i] + 1;
	return (s);
}
