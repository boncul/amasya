/*
** Program STR_SORT.C
**
** Illustrates how to sort a string.
**
** Peter H. Anderson, MSU, Feb 24, '97
**
*/

#include <stdio.h>

int string_length(char str[]);
void string_sort(char s[]);

void main(void)
{
   char s1[80], s2[80], s3[80];
   int length;
   strcpy(s1, "#@12cba");
   strcpy(s2, "Welcome to Morgan State University");
   strcpy(s3, "Ali Burak Öncül");

   printf("Orig: %s\n", s1);
   string_sort(s1);
   printf("Sorted: %s\n", s1);

   printf("Orig: %s\n", s2);
   string_sort(s2);
   printf("Sorted: %s\n", s2);

   printf("Orig: %s\n", s3);
   string_sort(s3);
   printf("Sorted: %s\n", s3);

}

void string_sort(char s[])
{
  char tmp;
  int i, j, length;
  length=string_length(s);
  for(i=0; i<length-1; i++)
  {
	for (j=i+1; j<length; j++)
	{
	   if (s[i] > s[j])
	   {
		 tmp=s[i];
		 s[i]=s[j];
		 s[j]=tmp;
	   }
	}
  }
}


int string_length(char str[])
{
   int i;
   for(i=0; i<80; i++)
   {
	 if(str[i]=='\0')
	 {
	    return(i);
	 }
   }
}
