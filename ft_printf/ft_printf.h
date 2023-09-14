/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:14:35 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/13 20:07:18 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

//mandatory part 
int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_nbrlen(unsigned long int n);
int		ft_nbrun(unsigned int nbr);
int		ft_putlowhex(unsigned long int adress);
int		ft_putnbr_fd(int n, int fd);
int		ft_putuphex(unsigned long int adress);
int		ft_puthex_fd(unsigned long int adress);

#endif