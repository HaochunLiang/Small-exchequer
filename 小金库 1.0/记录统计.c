
#include"source.h"

struct LogData log[100];
void record()
{
	FILE *fp;
	int i;
	
	if((fp = fopen ("d:\\myfile.txt", "ab+"))==NULL)
	  {
        printf("cant open the file");
        exit(0);
    }
	while(!feof(fp))
	{
		if(fread(&log[number],LEN,1,fp)==1)
		number++;
	}
	fclose(fp);
	if(number==0)
	{
		printf("no record");
	}
	else
	{
		printf("总共有%d条记录",number);
	}
	
	
	
}