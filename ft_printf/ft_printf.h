/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 00:34:33 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/25 11:43:40 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <stddef.h>
# include <stdarg.h>
# include "../libft/libft.h"

int			ft_isalpha(int arg);
int			ft_isdigit(int arg);
int			ft_isalnum(int arg);
int			ft_isascii(int arg);
int			ft_isprint(int arg);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_itoa(int n);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
char		*ft_strrchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
void		ft_putchar(char c);
void		*ft_memset(void *str, int c, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_bzero(void *str, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		*ft_memcpy(void *dst, const void *src, size_t n);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));

int			ft_putnbr(int nb);
void		ft_putstr(char *str);
void		ft_putchar(char c);
int			ft_printf(char const *format, ...);
int			ft_printf_c(char c);
int			ft_printf_s(char *str);
int			ft_printf_p(void *ptr);
int			ft_printf_u(unsigned int nb);
int			ft_printf_x(unsigned int nb, int uppercase);

#endif
