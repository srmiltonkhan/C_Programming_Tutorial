#include <stdio.h>
int main(){



int a[100]={1,2,3,4,5},size=4,pos,value,i;

printf("Enter position you want to delete?:");
scanf("%d",&pos);

for (i=pos-1; i<=size-1; i++){
	a[i] = a[i+1];
}
a[size-1]=0;

for(i=0; i<=size; i++){
	printf("%d ",a[i]);
}
return 0;
}
