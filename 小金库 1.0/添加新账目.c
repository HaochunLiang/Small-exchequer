//����� ��Ŀ 
#include"source.h"


void logininin()

{

	FILE *fp;
	int i,a=0;
	
	if((fp = fopen ("d:\\myfile.txt", "wb"))==NULL)//�Զ�������ʽ���ļ������ļ������������
	  {
        printf("cant open the file");
        exit(0);
    }

	printf("��������Ҫ�����ˮ�˵���Ŀ");
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
	printf("���ܱ���!");
	getch();
	}
	else
	{
		printf("���μ�¼����ɹ�"); 
	}


    fclose (fp);
	
}
	
