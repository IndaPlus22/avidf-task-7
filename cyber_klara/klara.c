#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);
  char names[n * 2][50];

  for (int i = 0; i < n * 2; i++)
  {
    char name[50];
    scanf("%s", name);
    strcpy(names[i], name);
  }

  char all_names[n][50];

  for (int i = 0; i < n; i++)
  {
    char full_name[50];
    strcpy(full_name, names[i]);
    strcat(full_name, " ");
    strcat(full_name, names[i + n]);
    strcpy(all_names[i], full_name);
  }

  qsort(all_names, n, 50, strcmp);
  int count = 0;
  
  for (int i = 0; i < n; i++)
  {
    if (strcmp(all_names[i], all_names[i + 1]) != 0)
      count++;
  }

  printf("%d\n", count);
}