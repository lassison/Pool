void ft_sort_int_tab(int *tab, int size)
{
	int sorted = 0;
	while ( !sorted )
	{
		sorted = 1;
		for(int i = 0; i < size; i++)
		{
			if(tab[i] > tab[i+1])
			{
				int temp;

				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = temp;
				sorted = 0;
			}
		}
	}
}
