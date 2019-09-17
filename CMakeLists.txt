cmake_minimum_required(VERSION 3.14)
project(GNL C)

set(CMAKE_C_STANDARD 11)

add_executable(GNL libft/libft.h libft/ft_strlen.c libft/ft_strcpy.c
        libft/ft_strcat.c libft/ft_strjoin.c
        libft/ft_strdup.c libft/ft_strsub.c libft/ft_putendl.c
        libft/ft_putstr.c libft/ft_putchar.c libft/ft_putchar_fd.c
        libft/ft_putstr_fd.c libft/ft_bzero.c libft/ft_memset.c libft/ft_strchr.c
        libft/ft_strdel.c libft/ft_strnew.c libft/ft_memalloc.c
        get_next_line.c get_next_line.h main.c)