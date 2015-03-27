/*
** do-op.c for do op in /home/amstut_a/rendu/Piscine-C-eval_expr
** 
** Made by amstut_a
** Login   <amstut_a@epitech.net>
** 
** Started on  Wed Oct 23 21:36:32 2013 amstut_a
** Last update Fri Oct 25 10:34:29 2013 amstut_a
*/

int     do_op(int lhs, int rhs, char op)
{
  if (op == '+')
    return (lhs + rhs);
  else if (op == '-')
    return (lhs - rhs);
  else if (op == '*')
    return (lhs * rhs);
  else if (op == '/')
    return (lhs / rhs);
  else if (op == '%')
    return (lhs % rhs);
  else
    return (0);
}
