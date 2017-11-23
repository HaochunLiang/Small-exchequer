#include"source.h"
void password1()
{
	int i,n,j;
	char x[10],y[10],a[10],b[10],c[10],d[10],e[10],f[10],z='\n',w,v;
	FILE *Pfile;
	if((Pfile=fopen("D:\\1.txt","r"))==NULL)
	{
	    printf("未检测到账户，是否创建账户(Y/N)\n");
	    scanf("%c",&w);
	    if(w=='Y'||w=='y')
		{
		Pfile=fopen("D:\\1.txt","w");
	    printf("请输入用户名（10字符以内）\n");
		scanf("%s",x);       //x用来输入用户名 
		fputs(x,Pfile);
		fputc(z,Pfile);
		printf("请输入密码(10字符以内)\n");
		scanf("%s",y);
		fputs(y,Pfile);      //y用来输入密码 
		printf("创建完成\n");
		printf("请确认用户名\n");
		}
		else
		exit(0);
	  
	}
	else
	printf("请输入用户名\n");
	fclose(Pfile);
	Pfile=fopen("D:\\1.txt","r");
	scanf("%s",c);    //c记录用户名 
	for(i=0;i<=10;i++)
	{
		if(c[i]=='\0')
		break;
	}                     //i是用户名的位数 
	i=i+1;          
	fgets(a,i,Pfile);       //a读取用户名 
	if(strcmp(a,c)==0)
	{   
	    z=fgetc(Pfile);        //z是回车 
		printf("请输入密码\n");
		scanf("%s",d);      //d记录密码 
		for(j=0;j<=10;j++)
		{
			if(d[j]=='\0')
			break;
		}                       //j是密码的位数 
		j=j+1;
		fgets(b,j,Pfile);        //b读取密码 
			if(strcmp(b,d)==0)
			printf("验证完毕\n");
			else
			{
				printf("密码错误\n");
				system("pause");
				exit(0);
			}
		}
	else
	{
		printf("用户名错误\n");
		system("pause");
		exit(0);
	}
	fclose(Pfile);
	printf("是否要修改信息（Y/N）\n");
	getchar();                   //用于接收回车 GTMD谭浩强 
	scanf("%c",&v);
	if(v=='Y'||v=='y')
	{
		strcpy(e,a);
		strcpy(f,b);              //e是用户名的备份，f是密码的备份 
		printf("1.修改用户名2.修改密码\n");
		scanf("%d",&n);
		switch (n)
			{
				case 1:
					Pfile=fopen("D:\\1.txt","w");
					printf("请输入新的用户名（10字符以内）\n");
					scanf("%s",x);
					fputs(x,Pfile);
					fputc(z,Pfile);
					fputs(b,Pfile);
					printf("输入完成\n");
					printf("请确认新的用户名\n");
					fclose(Pfile);
					Pfile=fopen("D:\\1.txt","r");
					scanf("%s",c);
					if(strcmp(c,x)==0)
					printf("修改完成\n");
					else
					{
						printf("两次输入用户名不一致，修改失败\n");
						system("pause");
						fclose(Pfile);
						Pfile=fopen("D:\\1.txt","w");
						fputs(e,Pfile);
					    fputc(z,Pfile);
					    fputs(f,Pfile);
					}
					fclose(Pfile);
					break;
			    case 2:
			    	Pfile=fopen("D:\\1.txt","w");
			    	printf("请输入新的密码（10字符以内）\n");
			    	fputs(a,Pfile);
			    	fputc(z,Pfile);
			    	scanf("%s",y);
			    	fputs(y,Pfile);
			    	printf("输入完成\n");
			    	printf("请确认新的密码\n");
			    	fclose(Pfile);
			    	Pfile=fopen("D\\1.txt","r");
			    	scanf("%s",d);
			    	if(strcmp(d,y)==0)
			    	printf("修改完成\n");
			    	else
			    	{
			    		printf("两次输入密码不一致，修改失败\n");
			    		system("pause");
			    		fclose(Pfile);
						Pfile=fopen("D:\\1.txt","w");
						fputs(e,Pfile);
					    fputc(z,Pfile);
					    fputs(f,Pfile);
					}
			    	fclose(Pfile);
					break;
			}
	}
	printf("跳转主菜单...\n");	
}