#include <stdio.h>

int	top;

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;




int main()
{
	t_list	*ptr;
	top = 0;

	push(7);
	print();
	push(4);
	print();
	push(5);
	print();
	pop();
	print();
}
