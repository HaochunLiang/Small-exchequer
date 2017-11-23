//删除账目
#include"source.h"
void del()
{
	FILE *fp;
	int i,j,m=0;
	char snum[15];
	char ch[2];
	
	if(fp=fopen("d://myfile.txt","ab+")==NULL)
	{
		printf("the file can not open\n");
		return 0;
		
	}
	
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp))
		m++;
	}
	
/*
	fclose(fp);*/
	
/*

	if(m==0)
	{
	printf("no record");
	}
	 else
	 {
 		printf("in input the id");
 		scanf("%s",snum);
 		for(i=0;i<m;i++)
 		{
		 	if(strcmp(snum,log[i].logid))
		 	{
	 			break;
	 		}
	 	}	
		 	if(i==m)
	 		{
		 		printf("the id is erorr.");
		 		getchar();
		 		return;
		 	}
		 	
			 printf("找到该学生的成绩,是否删除?(Y/N)");
			
			scanf("%s",ch);
			if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)
			{
			for(j=i;j<m;j++)
			log[j]=log[j+1];
			m--;
			printf("删除成功!\n");
			}

			if((fp=fopen("data","wb"))==NULL)
			{
			printf("can not open the file\n");
			return;
			}
			for(j=0;j<m;j++)
			if(fwrite(&log[j] ,LEN,1,fp)!=1)
			{
			printf("保存失败!\n");
			getch();
			}
			fclose(fp);
		 
 		
 		
 	}*/
	
} 
