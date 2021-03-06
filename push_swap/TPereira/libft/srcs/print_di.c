/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:40:17 by tpereira          #+#    #+#             */
/*   Updated: 2022/02/20 18:11:44 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	manage_di_precision(t_arg *arg_struct)
{
	int		len;

	if (arg_struct->precision > -1)
	{
		len = arg_struct->precision - ft_strlen(arg_struct->str);
		if (arg_struct->precision == 0 && arg_struct->str[0] == '0')
			arg_struct->str[0] = '\0';
		else if (len > 0 && arg_struct->is_negative)
		{
			ft_addnfix(&(arg_struct->str), '0', len, 1);
			ft_addnfix(&(arg_struct->str), '-', 1, 1);
		}
		else if (len > 0 && arg_struct->flags->has_plusflag)
		{
			ft_addnfix(&(arg_struct->str), '0', len, 1);
			ft_addnfix(&(arg_struct->str), '+', len, 1);
		}
		else if (len > 0)
			ft_addnfix(&(arg_struct->str), '0', len, 1);
		else if (len <= 0 && arg_struct->is_negative)
			ft_addnfix(&(arg_struct->str), '-', 1, 1);
		else
			arg_struct->str = ft_memmove(arg_struct->str,
					arg_struct->str, arg_struct->precision);
	}
}

int	get_zero_field_len(t_arg *arg_struct)
{
	int	len;

	len = arg_struct->fieldwidth - ft_strlen(arg_struct->str);
	if (arg_struct->flags->has_spaceflag || arg_struct->flags->has_plusflag
		|| arg_struct->is_negative)
		len = len - 1;
	if (arg_struct->flags->has_hashflag && arg_struct->base == 8)
		len = len - 2;
	if (arg_struct->flags->has_hashflag && arg_struct->base == 16)
		len = len - 2;
	return (len);
}

void	manage_zeros_width(t_arg *arg_struct)
{
	int	len;

	if (arg_struct->fieldwidth != -1 && arg_struct->flags->has_zeroflag)
	{
		len = get_zero_field_len(arg_struct);
		if (len > 0)
			ft_addnfix(&(arg_struct->str), '0', len, 1);
	}
	if (arg_struct->is_negative && arg_struct->str[0] != '-')
		ft_addnfix(&(arg_struct->str), '-', 1, 1);
	if (arg_struct->flags->has_plusflag && arg_struct->str[0] != '+')
		ft_addnfix(&(arg_struct->str), '+', 1, 1);
	if (arg_struct->flags->has_spaceflag && arg_struct->str[0] != '+'
		&& arg_struct->str[0] != '-')
		ft_addnfix(&(arg_struct->str), ' ', 1, 1);
}

int	manage_di_width(t_arg *arg_struct)
{
	int	len;
	int	str_size;

	len = 0;
	str_size = 0;
	if (arg_struct->fieldwidth != -1)
	{
		if (arg_struct->str)
			len = arg_struct->fieldwidth - ft_strlen(arg_struct->str);
		if (len > 0)
		{
			if (arg_struct->flags->has_minusflag)
				ft_addnfix(&(arg_struct->str), ' ', len, 2);
			else if (arg_struct->flags->has_starflag)
				ft_addnfix(&(arg_struct->str), ' ', len, 1);
			else
				ft_addnfix(&(arg_struct->str), ' ', len, 1);
		}
	}
	str_size = ft_strlen(arg_struct->str);
	return (str_size);
}

int	print_di(t_arg *arg_struct)
{
	int	len;
	int	str_size;

	len = 0;
	str_size = 0;
	manage_di_precision(arg_struct);
	manage_zeros_width(arg_struct);
	str_size += manage_di_width(arg_struct);
	ft_putstr(arg_struct->str);
	if (arg_struct->fieldwidth < 0)
	{
		len = (arg_struct->fieldwidth * (-1)) - str_size;
		while (len > 0)
		{
			str_size += ft_putchar(' ');
			len--;
		}
	}	
	return (str_size);
}
