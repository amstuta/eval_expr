/*
** lib.c for lib in /home/amstuta/rendu/tmp/eval_expr
**
** Made by arthur
** Login   <amstuta@epitech.net>
**
** Started on  Fri Mar 27 12:40:00 2015 arthur
** Last update Fri Mar 27 12:47:09 2015 arthur
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}

void	my_put_nbr(int nbr)
{
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  if (nbr > 9)
    {
      my_put_nbr(nbr / 10);
      my_put_nbr(nbr % 10);
    }
  else
    my_putchar(nbr + 48);
}
