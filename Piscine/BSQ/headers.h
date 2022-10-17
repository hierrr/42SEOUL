#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_info
{
	int		line;
	char	mty;
	char	obs;
	char	full;
}	t_info;

typedef struct  s_point
{
    int             y;
    int             x;
    char            stat;
    int             count;
}   t_point;

#endif
