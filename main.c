/*
** main.c for main in /home/amstut_a/rendu/Piscine-C-eval_expr
** 
** Made by amstut_a
** Login   <amstut_a@epitech.net>
** 
** Started on  Wed Oct 23 21:45:40 2013 amstut_a
** Last update Wed Oct 23 21:47:19 2013 amstut_a
*/

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      my_put_nbr(eval_expr(av[1]));
      my_putchar('\n');
    }
  return (0);
}
