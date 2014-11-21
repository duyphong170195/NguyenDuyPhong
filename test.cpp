#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void read_file(int *a, int &n){
	int A[500], i;
	a = A;
	FILE *f;
	f = fopen("year.in", "r");
	fscanf(f, "%d", &n);
	for( i = 0; i < n; i++)
	 fscanf(f, "%d", &a[i]);
	fclose(f);
	for(i = 0; i < n; i++)
	 printf("%5d", a[i]);
}

void main()
{
	int *a, n;
	read_file(a, n);
	getch();
}
