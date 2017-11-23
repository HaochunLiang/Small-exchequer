#include"source.h"

void changechange();
void change(){
	int a=0;
	printf("\n\n\n\n\n");
	printf("\t\t\t|-----------------修改的方式-----------|\n");
	printf("\t\t\t| *1  根据日期修改                     |\n");
	printf("\t\t\t| *2  根据ID修改                       |\n");
	printf("\t\t\t| *3  其他任意键返回                   |\n");
	printf("\t\t\t|--------------------------------------|\n\n");
	printf("\t\t\t请选择(0-3):");

	scanf("%d",&a);
	system("cls"); 
	switch(a)
	{
		case 1:
			datafind();
		 	changechange();
		 
		 	break;


 		case 2:
 			idfind();
 			changechange();
 			
 			break;

		
		default:break;
	}
	
} 


void changechange(){

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
	printf("请输入你想修改的id\n");
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
	printf("\n\n\n\n\n");
	printf("\t\t\t|-----------请输入你想修改的内容-------|\n");
	printf("\t\t\t| *1  修改日期                         |\n");
	printf("\t\t\t| *2  修改事件                         |\n");
	printf("\t\t\t| *3  修改金额                         |\n");
	printf("\t\t\t|--------------------------------------|\n\n");
	printf("\t\t\t请选择(0-3):");

	
	int p=0;
	scanf("%d",&p);
	switch(p)
	{
		case 1:
			printf("请输入新的日期\n");
			scanf("%s",log[ididid-1].logdata);
		 	break;


 		case 2:
			printf("请输入新的事件\n");
			scanf("%s",log[ididid-1].lognote);
 			break;
 		
		 case 3:
			printf("请输入新的金额\n");
			scanf("%lf",&log[ididid-1].charge);
 			break;

		
		default:break;
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

	
	printf("修改成功。\n");
	
	
	
	
	
}
