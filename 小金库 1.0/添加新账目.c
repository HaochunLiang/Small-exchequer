//添加新 账目 
#include"source.h"


void logininin()

{

	FILE *fp;
	int i,a=0;
	
	if((fp = fopen ("d:\\myfile.txt", "wb"))==NULL)//以二进制形式打开文件，在文件后面添加内容
	  {
        printf("cant open the file");
        exit(0);
    }

	printf("请输入需要添加流水账的数目");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("the logdata is ");
		printf("input the lognote :");
		scanf("%s",log[a].lognote);
		printf("input the logdata :");
		scanf("%s",log[a].logdata);
		printf("Input Charge:Income+and expend- :");
		scanf("%lf",&log[a].charge);
		log[a].logid=number;
		timesss();
  
		
	
	}	
	if(fwrite(&log[a],LEN,1,fp)!=1)
	{
	printf("不能保存!");
	getch();
	}
	else
	{
		printf("本次记录保存成功"); 
	}


    fclose (fp);
	
}
	
