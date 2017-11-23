
#include"source.h"


void record()
{
	FILE *fp;
	int i,m=0;
	
	if((fp = fopen ("d:\\myfile.dat", "rb"))==NULL)
	  {
        printf("cant open the file");
        exit(0);
    }
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		
		m++;
		
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record.\n");
	}
	else
	{
		printf("总共有%d条记录\n",m);
	}
	

	
}