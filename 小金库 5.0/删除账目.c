//??
#include"source.h"
void del()
{
	FILE *fp;
	int i,j,m=0;
	int ididid;
	char ch[2];

	
	fp=fopen("d://myfile.dat","ab+");
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);

	if(m==0)
	{
	printf("no record!!!\n");
	return;
	}
	else{
	printf("����������Ҫɾ����ID:");
	scanf("%d",&ididid);
	
	for(i=0;i<m;i++)
	{
		if(ididid==log[i].logid)
		break;
	}
	if(i==m)
	{
		printf("can not find the ID");
		getchar();
		return;
	}
	printf("we have find the id,is  delete:\n");
	scanf("%s",ch);
	if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)
	{
		for(j=i;j<m;j++)
		log[j]=log[j+1];
		m--;
		printf("������¼ɾ���ɹ���\n");
	}
	for(i=0;i<m;i++)
	{
		log[i].logid=i+1;
	}
	fp=fopen("d://myfile.dat","wb");
	for(j=0;j<m;j++)
	{
		fwrite(&log[j],LEN,1,fp);	
	}
	}
	
	
	fclose(fp);

	
	printf("�޸ĳɹ���\n");
} 
