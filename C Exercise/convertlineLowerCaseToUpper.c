#include <stdio.h>

int main(){
	char container[] = {'I',' ','l','o','v','e',' ','c','o','u','n','t','r','y'};
	printf("%s\n",strupr(container));
	printf("%s",container);
	printf("%s\n",strlwr(container));
	char str;
	gets(str);
	printf("%s\n",strupr(container));
}
