//显示账目

#include"source.h"
	

void show()
{
	FILE *fp;
	int i,n=0;
	fp=fopen("d://myfile.txt","ab+");//以二进制形式打开文件，在文件后面添加内容 
	while(!feof(fp))
	{
	if(fread(&log[n] ,LEN,1,fp)==1)
	n++;
	}  
	fclose(fp);
	

	printf("wwwww");
	
	for(i=0;i<n;i++)
{
	printf(FORMAT,DATA);
}
	
	
} 