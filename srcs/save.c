

void	check_args(t_stack **lst, int ac, char **av)
{
	int	i;
	long	tmp;
	char	**argv;

	i = 0;
	if (ac == 2)
	{
		argv = ft_split(av[1], ' ');
		if (!argv)
			return ;
	}
	else
	{
		i = 1;
		argv = av;
	}
	while (argv[i])
	{
		tmp = (long)ft_atoi(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
		//  (check_overflow(tmp))
			// ft_error("Error");
			ft_putendl_fd("Error", 1);
		if (check_num(av[i]))
			ft_putendl_fd("Error", 1);
			// ft_error("Error");
		if (check_doublon(av))
			ft_putendl_fd("Error", 1);
			// ft_error("Error");
		ft_lstadd_back(lst, tmp);
		i++;
	}
	if (ac == 2)
		free(argv);
	//	ft_free(argv);
}


int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	i = 2;
	if (ac < 2)
		return (0);
	if (!check_arg(av))
		ft_putendl_fd("Error", 1);
	stack_a = _lst();
	stack_a->nb = atoi(av[1]);
	stack_b = NULL;
	while (i < ac)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(atoi(av[i])));
		i++;
	}
	print_lst(stack_a);
	reverse_rotate(&stack_a);
	print_lst(stack_a);
}
