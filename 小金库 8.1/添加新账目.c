//添加新 账目 
#include"source.h"


void logininin()

{

	FILE *fp;
	int i,a=0,n=0,nowbalance=0;
	int ch; 
	fp = fopen ("d:\\myfile.dat", "ab+");

	while(!feof(fp))
	{
	if(fread(&log[n] ,LEN,1,fp)==1)
	n++;
	}  

	nowbalance=log[n-1].balance;

	printf("请输入需要添加流水账的数目:\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	
		printf("请输入账目的名称:\n");
		scanf("%s",log[a].lognote);
		printf("请输入事件发生日期(for example:20080101):\n");
		scanf("%s",log[a].logdata);
		printf("发生费用：负表示支出，正表示收入:\n");
		
	    while(!scanf("%lf",&log[a].charge))
   {
       	fflush(stdin);
      	printf("\n输入错误，请重新输入：\n");
    }
		
		
		log[a].logid=n+1;
		log[a].balance=log[a].charge+nowbalance;
		nowbalance=log[a].balance;
		n++;

		if(fwrite(&log[a],LEN,1,fp)!=1)
		{
		printf("第%d条记录不能保存!",a);
		getch();
		}
	}
	
	printf("本次记录保存成功"); 
	fclose (fp);
	
}
	
