#include <stdio.h>

void swapWithPointers(int *num1,int *num2)
{
	int tmp;
	tmp=*num1;
	*num1=*num2;
	*num2=tmp;
}
void swap(int num1,int num2){
	int tmp;
	tmp=num1;
	num1=num2;
	num2=tmp;
}
int main(int argc,char **argv){
	int v1,v2,v3,v4;
	int *pt1=&v1;
	int *pt2=&v2;
	int	*pt3=&v3;
	int	*pt4=&v4;
		printf("qing shu ru shi ge shu \n");
		scanf("%d,%d,%d,%d",pt1,pt2,pt3,pt4);

		swapWithPointers(pt1,pt2);
		printf("%d,%d\n",v1,v2);

		swap(v3,v4);
		printf("%d,%d\n",v3,v4);

		return 0;
}
