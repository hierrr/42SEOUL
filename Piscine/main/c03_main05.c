#include <stdio.h>
#include <string.h>
#define L_MAX 100
#define N_TESTS 12
int ft_strlne35(char *str);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
  char *p_strs[N_TESTS];
  p_strs[0] = "Hello, World!";
  p_strs[1] = "HELLO";
  p_strs[2] = "c Is tHE bEst";
  p_strs[3] = "salut, comment tu vas ? 42mots quarante-deux; ";
  p_strs[4] = "\0empty?\0";
  p_strs[5] = "before\0after";
  p_strs[6] = "";
  p_strs[7] = "empty";
  p_strs[8] = ", Wo";
  p_strs[9] = "vas ?";
  p_strs[10] = "ore\0af";
  p_strs[11] = " ";
  char strs[N_TESTS][L_MAX];
  for (int i = 0; i < N_TESTS; i++)
    strcpy(strs[i], p_strs[i]);
  char dest[2][L_MAX];
  int n_tests = 0, n_success = 0;
  printf("\nTest 05                           ft_strlcat\n\n");
  n_tests = 0, n_success = 0;
  for (int i = 0; i < N_TESTS; i++)
  {
    for (int j = 0; j < N_TESTS; j++)
    {
      size_t i_len = strlen(strs[i]);
      size_t j_len = strlen(strs[j]);
      size_t max_len = (i_len > j_len) ? i_len : j_len;
      for (size_t lim = 0; lim < max_len; lim++)
      {
        unsigned int ref, cus;
        strncpy(dest[0], strs[i], sizeof(dest[0]) / sizeof(dest[0][0]));
        strncpy(dest[1], strs[i], sizeof(dest[1]) / sizeof(dest[1][0]));
        n_tests++;
        ref = strlcat(dest[0], strs[j], lim);
        cus = ft_strlcat(dest[1], strs[j], lim);
#ifdef VERBOSE
        printf("ref %u vs cus %u\n", ref, cus);
        printf("ref %s vs cus %s\n", dest[0], dest[1]);
#endif
        if (strncmp(dest[0], dest[1], L_MAX * sizeof(char)) == 0 && ref == cus)
        {
#ifdef VERBOSE
          printf("SUCCESS\n");
          printf("while strlcat:%s:%s:%zu\n", strs[i], strs[j], lim);
          printf("len(dst)=%lu, len(src)=%lu\n", strlen(strs[i]), strlen(strs[j]));
          printf("Reference:%u:%s\n", ref, dest[0]);
          printf("Custom  :%u:%s\n", cus, dest[1]);
#endif
          n_success++;
        }
        else
        {
          printf("FAILURE while strlcat:%s:%s:%zu\n", strs[i], strs[j], lim);
          printf("len(dst)=%lu, len(src)=%lu\n", strlen(strs[i]), strlen(strs[j]));
          printf("Reference:%u:%s\n", ref, dest[0]);
          printf("Custom  :%u:%s\n", cus, dest[1]);
        }
      }
    }
  }
  printf("==> Success %d, Failure %d, Total %d\n", n_success, n_tests - n_success, n_tests);
  return 0;
}
