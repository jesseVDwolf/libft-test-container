#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void test_lstnew(void)
{
	t_list *n1;
	t_list *n2;
    int     a[2] = {5, 10};
	char	b[] = "jesse";

	/*
	** case 1: create node with int data
	** case 2: create node with char data
	** case 3: check next member
	*/
	printf("Testing ft_lstnew():\nTest1...");
    n1 = ft_lstnew(a);
	if (*(((int*)n1->content) + 0) == 5 && *(((int*)n1->content) + 1) == 10)
    	printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	n2 = ft_lstnew(b);
	if (*(((char*)n2->content) + 0) == 'j' && *(((char*)n2->content) + 4) == 'e')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (n1->next == NULL && n2->next == NULL)
		printf("passed");
	else	printf("FAILED");
	free(n1);
	free(n2);
	printf("\n\n");
}

void test_lstadd_front(void)
{
	int		idx = 0;
	int		a[2] = {5, 10};
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("jesse");
	t_list	*node2 = ft_lstnew("vera");
	t_list	*node3 = ft_lstnew(a);
	int		c1_passed = 1;
	/*
	** case 1: check if added to front
	*/

	printf("Testing ft_lstadd_front():\nTest1...");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	for (t_list *cur = head;cur != NULL; cur = cur->next)
	{
		if (idx == 0)
		{
			if (*((int*)cur->content) != 5 || *(((int*)cur->content) + 1) != 10)
				c1_passed = 0;
			
		}
		else if (idx == 1)
		{
			if (*((char*)cur->content) != 'v' || *(((char*)cur->content) + 3) != 'a')
				c1_passed = 0;
		}
		else
		{
			if (*((char*)cur->content) != 'j' || *(((char*)cur->content) + 4) != 'e')
				c1_passed = 0;
		}
		idx++;
	}
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	free(node1);
	free(node2);
	free(node3);
	printf("\n\n");
}

void	test_lstsize(void)
{
	int		a[2] = {5, 10};
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("jesse");
	t_list	*node2 = ft_lstnew("vera");
	t_list	*node3 = ft_lstnew(a);
	/*
	** case 1: no nodes added
	** case 2: three nodes added
	*/

	printf("Testing ft_lstsize():\nTest1...");
    if (ft_lstsize(head) == 0)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	if (ft_lstsize(head) == 3)
		printf("passed");
	else	printf("FAILED");
	free(node1);
	free(node2);
	free(node3);
	printf("\n\n");
}

void	test_lstlast(void)
{
	int		a[2] = {5, 10};
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("jesse");
	t_list	*node2 = ft_lstnew("vera");
	t_list	*node3 = ft_lstnew(a);
	/*
	** case 1: no nodes added
	** case 2: three nodes added
	*/

	printf("Testing ft_lstlast():\nTest1...");
	if (ft_lstlast(head) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	if (*((char*)ft_lstlast(head)->content) == 'j' && *(((char*)ft_lstlast(head)->content) + 4) == 'e')
		printf("passed");
	else	printf("FAILED");
	free(node1);
	free(node2);
	free(node3);
	printf("\n\n");
}

void	test_lstadd_back(void)
{
	int		idx = 0;
	int		a[2] = {5, 10};
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("jesse");
	t_list	*node2 = ft_lstnew("vera");
	t_list	*node3 = ft_lstnew(a);
	t_list	*node4 = ft_lstnew("bennie");
	int		c1_passed = 1;
	/*
	** case 1: check four nodes if added to back
	*/

	printf("Testing ft_lstadd_back:\nTest1...");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	for (t_list *cur = head;cur != NULL; cur = cur->next)
	{
		if (idx == 0)
		{
			if (*((char*)cur->content) != 'j' || *(((char*)cur->content) + 4) != 'e')
				c1_passed = 0;	
		}
		else if (idx == 1)
		{
			if (*((char*)cur->content) != 'v' || *(((char*)cur->content) + 3) != 'a')
				c1_passed = 0;
		}
		else if (idx == 2)
		{
			if (*((int*)cur->content) != 5 || *(((int*)cur->content) + 1) != 10)
				c1_passed = 0;
		}
		else
		{
			if (*((char*)cur->content) != 'b' || *(((char*)cur->content) + 5) != 'e')
				c1_passed = 0;
		}
		idx++;
	}
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	printf("\n\n");
}

void	c_toupper1(void *content)
{
	char	*s;

	s = content;
	while (*s != '\0')
	{
		*s = ft_toupper(*s);
		s++;
	}
	return ;
}

void	test_lstiter(void)
{
	int		idx = 0;
	int		a[2] = {5, 10};
	char	b[] = "jesse";
	char	c[] = "vera";
	char	d[] = "bennie";
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(b);
	t_list	*node2 = ft_lstnew(c);
	t_list	*node3 = ft_lstnew(d);
	int		c1_passed = 1;
	/*
	** case 1: check if function has been applied to all nodes
	*/

	printf("Testing ft_lstiter():\nTest1...");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstiter(head, &c_toupper1);
	for (t_list *cur=head; cur != NULL; cur=cur->next)
	{
		if (idx == 0)
		{
			if (*((char*)cur->content) != 'J')
				c1_passed = 0;
		}	
		else if (idx == 1)
		{
			if (*((char*)cur->content) != 'V')
				c1_passed = 0;
		}	
		else
		{
			if (*((char*)cur->content) != 'B')
				c1_passed = 0;
		}
		idx++;
	}
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	free(node1);
	free(node2);
	free(node3);
	printf("\n\n");
}

void	*c_toupper2(void *content)
{
	char	*s;
	int		idx;

	idx = 0;
	s = ft_strdup((char*)content);
	if (s == NULL)
		return (NULL);
	while (s[idx] != '\0')
	{
		s[idx] = ft_toupper(s[idx]);
		idx++;
	}
	return (s);
}

void	test_lstmap(void)
{
	int		idx = 0;
	char	a[] = "jesse";
	char	b[] = "vera";
	char	c[] = "bennie";
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(a);
	t_list	*node2 = ft_lstnew(b);
	t_list	*node3 = ft_lstnew(c);
	int		c1_passed = 1;
	/*
	** case 1: check four nodes if added to back
	*/

	printf("Testing ft_lstmap():\nTest1...");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	head = ft_lstmap(head, &c_toupper2, &free);
	for (t_list *cur=head; cur != NULL; cur = cur->next)
	{
		if (idx == 0)
		{
			if (*((char*)cur->content) != 'J' || *(((char*)cur->content) + 4) != 'E')
				c1_passed = 0;
		}
		else if (idx == 1)
		{
			if (*((char*)cur->content) != 'V' || *(((char*)cur->content) + 3) != 'A')
				c1_passed = 0;
		}
		else
		{
			if (*((char*)cur->content) != 'B' || *(((char*)cur->content) + 5) != 'E')
				c1_passed = 0;
		}
		idx++;
	}
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	free(node1);
	free(node2);
	free(node3);
	ft_lstclear(&head, &free);
	printf("\n\n");
}

int		main(void)
{
	test_lstnew();
	test_lstadd_front();
	test_lstsize();
	test_lstlast();
	test_lstadd_back();
	test_lstiter();
	test_lstmap();
	return (0);
}