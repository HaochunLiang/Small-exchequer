//��ʾ��Ŀ

#include"source.h"
void show()
{
	FILE *fp;
	int i,n=0;
	fp=fopen("d://myfile.dat","ab+");
	while(!feof(fp))
	{
	if(fread(&log[n] ,LEN,1,fp)==1)
	n++;
	}  
	fclose(fp);
	

	printf("ID    �¼�       ʱ��       ��֧         ���\n");
	
	for(i=0;i<n;i++)
{
	printf(FORMAT,DATA);
}
	
	
} 