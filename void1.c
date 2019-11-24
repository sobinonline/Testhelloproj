#include<stdio.h>
// This is a test change
int main()
{
	int a[2] = {1,2};
	void *ptr = &a;
	ptr = ptr + sizeof(int);
	printf("\n  %d",*(int *)ptr);
	return 0;
}
