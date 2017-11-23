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
	printf("ID    事件       时间       收支         余额\n");
	printf(FORMAT,DATA);
	
}