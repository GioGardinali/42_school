/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:28:39 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/23 18:38:33 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

/* 
Declarando uma lista encadeada para usar na GNL
Ela vai armazenar caractere por caractere e apontar
para o pronimo nó da lista pelo *next.
 */

typedef struct s_char
{
	char			*one_char;
	struct s_char	*next;
}	t_char;

//mandatory part 
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);

//bonus

#endif