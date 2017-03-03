#include <stdio.h>
#include <string.h>
max(int x[], int);
 
int main()
{
   char inputstring[100];
   int s = 0, m;
   int count[26]={0};
 
   printf("Enter a string \n");
   gets(inputstring);
 
   while (inputstring[s] != '\0')
   {
      if (inputstring[s] >= 'a' && inputstring[s] <= 'z') 
         count[inputstring[s]-'a']++;
 
      s++;
   }
 
         m=max(count, 26);
         printf("%d", m);
   
 
   return 0;
    
}

max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}