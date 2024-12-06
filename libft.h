/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:25:28 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/14 09:34:23 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Defines buffer size for LIBGNL
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

/* STANDARD LIBRARIES */
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h> 
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>

/* TYPEDEF */
	// Used by liblist
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/* LIBCTYPE */
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_ispunct(int c);
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *nptr);

/* LIBSTRING */
size_t		ft_strlen(const char *s);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
void		ft_strdel(char **as);
char		*ft_strdup(const char *s);
char		*ft_strrev(char *str);

/* LIBSTDLIB */
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_memdel(void **ap);

/* LIBUTILS */
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/* LIBLIST */
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));

/* LIBPRINTF */
int			ft_printf(const char *fmt, ...);
// Managing conversion specificators
const char	*ft_spec_conv(const char *fmt, va_list args, size_t *b_writ);
void		conv_num(const char *fmt, va_list args, char *flg, size_t *b_writ);
void		conv_hex(const char *fmt, va_list args, char *flg, size_t *b_writ);
void		conv_txt(const char *fmt, va_list args, size_t *b_writ);
// Conversion to hexadecimal
char		*ft_itohex(char *dest, unsigned long nb, char style);
void		hex_set_case(char style, ivent *case_var);
char		*hex_handle_zero(char *hex_value, char style);
char		*hex_format_string(int i, char *hex_value, char style);
// For outputing and counting written bytes
size_t		ft_putchar_fd_count(char c, int fd);
size_t		ft_putstr_fd_count(char *s, int fd);
size_t		ft_putnbr_fd_count(int n, int fd);
size_t		ft_put_ui_fd_count(unsigned int n, int fd);

/* LIBGNL - Get Next Line */
char		*ft_gnl(int fd);
char		*read_and_stash(int fd, char **buf, char **stash, char **cursor);
char		*stash_manager(char *stash, char *buf, size_t b_read);
char		*seize_line(char **stash, char *cursor);
char		*seize_eof(char **next_line, char **stash);
void		clean_stash(char **stash);

#endif
