#ifndef FT_HEADER_H
#define FT_HEADER_H
void	ft_putchar(char c);
int	ft_input_test(int argc, char *input);
void	ft_swap(int *a, int *b);
void	ft_swap_arr(int **a, int **b);
void	ft_make_line_arr(int n, int *num_arr, int **line_arr);
void	ft_make_matrix_arr(int l, int **line_arr, int ***matrix_arr);
void	ft_put_matrix(int ***matrix_arr);
void	ft_make_input(int **matrix, char *make_input);
void	col_up(int **matrix, char *make_input, int row, int col);
void	col_down(int **matrix, char *make_input, int row, int col);
void	row_left(int **matrix, char *make_input, int row, int col);
void	row_right(int **matrix, char *make_input, int row, int col);
int	ft_pow(int base, int exp);
int	ft_matrix_test_inrow(int **matrix);
int	ft_matrix_test_incol(int **matrix);
int	ft_matrix_test(int **matrix);
int	ft_cmp_input(char *make_input, char *input);
#endif
