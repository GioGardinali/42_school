/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:30:42 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/09 03:30:49 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> //write, read
# include <stdlib.h> // malloc, free, size_t, NULL
# include <stdarg.h> //va_start, va_arg, va_copy, va_end
# include <stdint.h> //SIZE_MAX
# include <limits.h> //INT_MAX

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42 // gnl
# endif

typedef struct s_element
{
	void				*content;
	struct s_element	*prev;
	struct s_element	*next;
}	t_element;

typedef struct s_list
{
	t_element	*first;
	t_element	*last;
	size_t		size;
}	t_list;

//mandatory part 1
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_atoi(const char *nptr);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strdup(const char *s);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);

//mandatory part 2
void		ft_putchar_fd(char c, int fd);
int			ft_putchar_int_fd(char c, int fd);
char		*ft_itoa(int n);
void		ft_putendl_fd(char *s, int fd);
int			ft_putnbr_fd(int n, int fd);
int			ft_putstr_fd(char *s, int fd);
char		**ft_split(char const *s, char c);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_substr(const char *s, unsigned int start, size_t len);

//bonus libft
void		ft_lstadd_front(t_list *lst, t_element *element);
int			ft_lstsize(t_list *lst);
void		ft_lstadd_back(t_list *lst, t_element *element);
void		ft_lstdelone(t_list *lst, t_element *element, void (*del)(void*));
void		ft_lstclear(t_list *lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_element	*ft_lstnew_element(void *content);
void		ft_lstadd_before(t_list *lst, t_element *ref, t_element *element);
void		ft_lstadd_after(t_list *lst, t_element *ref, t_element *element);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//gnl
char		*get_next_line(int fd);

//printf and new functions
int			ft_printf(const char *str, ...);
int			ft_nbrun(unsigned int nbr);
int			ft_nbrlen(unsigned long int n);
int			ft_puthex_fd(unsigned long int adress);
int			ft_putlowhex(unsigned long int adress);
int			ft_putuphex(unsigned long int adress);

//new functions
int			ft_isstringdigit(char *string);

#endif