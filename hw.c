#include<stdio.h>
#include<string.h>

int main()
{
 char s1[10], s2[10], s3[10];
  printf("Enter the values of s1 :");
  gets(s1);

  printf("Enter the values of s2 :");
  gets(s2);

  if (strcmp(s1, s2) != 0 )
    strcat(s1, s2);

  strcpy(s3, s1);

  printf("\n String S1 : %s , Length :%ld", s1, strlen(s1));
   printf("\n String S2 : %s , Length :%ld", s2, strlen(s2));
    printf("\n String S3 : %s , Length :%ld", s3, strlen(s3));
}
