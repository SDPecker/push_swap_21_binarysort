#include <stdio.h>
#include "push_swap.h"

void	print_stack(stack st)
{
	int	i;

	i = 0;
	while (i < st.size)
		printf("%i ", st.array[i++]);
	printf("\nSize: %i\nMin_ind: %i\n", st.size, get_min_ind(st));
}
