//��ʾ��Ŀ

#include"source.h"
	

void show()
{
	FILE *fp;
	int i,n=0;
	fp=fopen("d://myfile.txt","ab+");//�Զ�������ʽ���ļ������ļ������������ 
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