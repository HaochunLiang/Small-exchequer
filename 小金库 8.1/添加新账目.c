//����� ��Ŀ 
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

	printf("��������Ҫ�����ˮ�˵���Ŀ:\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	
		printf("��������Ŀ������:\n");
		scanf("%s",log[a].lognote);
		printf("�������¼���������(for example:20080101):\n");
		scanf("%s",log[a].logdata);
		printf("�������ã�����ʾ֧��������ʾ����:\n");
		
	    while(!scanf("%lf",&log[a].charge))
   {
       	fflush(stdin);
      	printf("\n����������������룺\n");
    }
		
		
		log[a].logid=n+1;
		log[a].balance=log[a].charge+nowbalance;
		nowbalance=log[a].balance;
		n++;

		if(fwrite(&log[a],LEN,1,fp)!=1)
		{
		printf("��%d����¼���ܱ���!",a);
		getch();
		}
	}
	
	printf("���μ�¼����ɹ�"); 
	fclose (fp);
	
}
	
