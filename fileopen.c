#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file.txt","w");
	fprintf(fp,"Hi welcome to aditya university students");
	fclose(fp);
}
