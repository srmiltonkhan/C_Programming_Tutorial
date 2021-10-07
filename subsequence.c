#include <stdio.h>
#include <string.h>

int check_subsequence(char[], char[]);

int main(){
	int flag;
	
	char s1[50], s2[50];
	
	printf("Input The First String: \n");
	gets(s1);
	
	printf("Input The Second String: \n");
	gets(s2);
	
	if (strlen(s1) < strlen(s2))
      flag = check_subsequence(s1, s2);
   else
      flag = check_subsequence(s2, s1);

   (flag)?printf("YES\n"):printf("NO\n");
	
	return 0;
}
