#include <stdio.h>

void function1 (int u, int v);
void function2 (int *pu, int *pv);

main(){
	int u = 1;
	int v = 3;
	
	printf("Before Calling Function: u = %d v=%d\n", u, v);
	function1(u,v);
	printf("After Calling Function: u = %d v=%d\n", u, v);
	function2 (&u, &v);
	printf("After Calling Function2: u = %d v=%d\n", u, v);
}

void function1 (int u, int v){
	u = 0;
	v = 0;
	printf("Winthin Function: u = %d v=%d\n",u,v);
}


void function2 (int *pu, int *pv){
	*pu = 0;
	*pv = 0;
	printf("Within Function2: u = %d v=%d\n",*pu,*pv);
}


