#include"source.h"

void lastlog()
{
	FILE *fp;
	int j,m=0;
	char snum[15];
	char ch[2];

	
	fp=fopen("d://myfile.dat","ab+");
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	

	fclose(fp);
	int i=m-1;
	printf("ID    �¼�       ʱ��       ��֧         ���\n");
	printf(FORMAT,DATA);
	
}