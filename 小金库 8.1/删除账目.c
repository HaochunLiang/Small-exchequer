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
	printf("请输入你所要删除的ID:");
	scanf("%d",&ididid);
	
	for(i=0;i<m;i++)
	{
		if(ididid==log[i].logid)
		break;
	}
	if(i==m)
	{
		printf("没有找到这个ID");
		getchar();
		return;
	}
	printf("我们已经找到这个ID,是否需要删除（Y/N）:\n");
	scanf("%s",ch);
	if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)
	{
		for(j=i;j<m;j++)
		log[j]=log[j+1];
		m--;
		printf("本条记录删除成功。\n");
	}
	for(i=0;i<m;i++)
	{
		log[i].logid=i+1;
	}
	int bbb=log[0].charge;
	log[0].balance=log[0].charge;
	for(i=1;i<m;i++)
	{
		
		log[i].balance=log[i].charge+bbb;
		bbb=log[i].balance;
	}
	
	
	fp=fopen("d://myfile.dat","wb");
	
	for(j=0;j<m;j++)
	{
		fwrite(&log[j],LEN,1,fp);	
	}
	}
	
	
	fclose(fp);

	
	printf("操作成功。\n");
} 
