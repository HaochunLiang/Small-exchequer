#include"source.h"
void password2()
{

	int i,n,j,o;
	char x[10],y[10],a[10],b[10],c[10],d[10],e[10],f[10],z='\n',w,v;
	FILE *Pfile;
	if((Pfile=fopen("1.txt","r"))==NULL)
	{
	    printf("δ��⵽�˻����Ƿ񴴽��˻�(Y/N)\n");
	    scanf("%c",&w);
	    if(w=='Y'||w=='y')
		{
		Pfile=fopen("1.txt","w");
	    printf("�������û�����10�ַ����ڣ�\n");
		scanf("%s",x);       //x���������û��� 
		getchar();
		fputs(x,Pfile);
		fputc(z,Pfile);
		printf("����������(10�ַ�����)\n");
	    for(i=0;i<=10;i++)
	    {
	    y[i]=getch();
	 	if(y[i]=='\r')
		break;
		else
		{
		if(y[i]=='\b')
		{
			y[i]='\0';
			i--;
			i--;
			printf("\b");
			printf(" ");
			printf("\b");
		}
		else
        printf("*");
	    }
		}
	    printf("\n");
		fputs(y,Pfile);      //y������������ 
		printf("�������\n");
		printf("��ȷ���û���\n");
		}
		else
		exit(0);
	  
	}
	else
	printf("�������û���\n");
	fclose(Pfile);
	Pfile=fopen("1.txt","r");
	scanf("%s",c);    //c��¼�û��� 
	for(i=0;i<=10;i++)
	{
		if(c[i]=='\0')
		break;
	}                     //i���û�����λ�� 
	i=i+1;          
	fgets(a,i,Pfile); 
/*
	system("pause");    */  //a��ȡ�û��� 
	if(strcmp(a,c)==0)
	{   
	    z=fgetc(Pfile);        //z�ǻس� 
		printf("����������\n");
		for(i=0;i<=10;i++)
	    {
	    d[i]=getch();
	 	if(d[i]=='\r')
		break;
		else
		{
			if(d[i]=='\b')
			{
				d[i]='\0';
				i--;
				i--;
				printf("\b");
			printf(" ");
			printf("\b");
			}
			
		else
        printf("*");
	    }}
	    printf("\n");      //d��¼���� 
		for(j=0;j<=10;j++)
		{
			if(d[j]=='\0')
			break;
		}                       //j�������λ�� 
		j=j+1;
		fgets(b,j,Pfile);        //b��ȡ���� 
			if(strcmp(b,d)==0)
			printf("��֤���\n");
			else
			{
				printf("�������\n");
				system("pause");
				exit(0);
			}
		}
	else
	{
		printf("�û�������\n");
		exit(0);
	}
	fclose(Pfile);
	printf("�Ƿ�Ҫ�޸���Ϣ��Y/N��\n");
	getchar();                   //���ڽ��ջس� GTMD̷��ǿ 
	scanf("%c",&v);
	if(v=='Y'||v=='y')
	{
		strcpy(e,a);
		strcpy(f,b);              //e���û����ı��ݣ�f������ı��� 
		printf("1.�޸��û���2.�޸�����\n");
		scanf("%d",&n);
		switch (n)
			{
				case 1:
					Pfile=fopen("1.txt","w");
					printf("�������µ��û�����10�ַ����ڣ�\n");
					scanf("%s",x);
					fputs(x,Pfile);
					fputc(z,Pfile);
					fputs(b,Pfile);
					printf("�������\n");
					printf("��ȷ���µ��û���\n");
					fclose(Pfile);
					Pfile=fopen("1.txt","r");
					scanf("%s",c);
					if(strcmp(c,x)==0)
					printf("�޸����\n");
					else
					{
						printf("���������û�����һ�£��޸�ʧ��\n");
						fclose(Pfile);
						Pfile=fopen("1.txt","w");
						fputs(e,Pfile);
					    fputc(z,Pfile);
					    fputs(f,Pfile);
					    exit(0);
					}
					fclose(Pfile);
					break;
			    case 2:
			    	Pfile=fopen("1.txt","w");
			    	printf("�������µ����루10�ַ����ڣ�\n");
			    	char y[10]={},d[10]={};
			    	fputs(a,Pfile);
			    	fputc(z,Pfile);
			    	for(i=0;i<=10;i++)
	                {
	    			y[i]=getch();
	 				if(y[i]=='\r')
					break;
					else
					{
						if(y[i]=='\b')
						{
							y[i]='\0';
							i--;
							i--;
							printf("\b");
							printf(" ");
							printf("\b");
						}
					else
       				printf("*");
	    			}}
	    			printf("\n");
			    	fputs(y,Pfile);
			    	printf("�������\n");
			    	printf("��ȷ���µ�����\n");
			    	fclose(Pfile);
			    	Pfile=fopen("D\\1.txt","r");
			    	for(i=0;i<=10;i++)
	    			{
	    			d[i]=getch();
	 				if(d[i]=='\r')
					break;
					else
					{
						if(d[i]=='\b')
						{
							
							d[i]='\0';
							i--;
							i--;
							printf("\b");
							printf(" ");
							printf("\b");
							
							
						}
					else
        			printf("*");
	    			}}
	    			printf("\n");
			    	if(strcmp(d,y)==0)
			    	printf("�޸����\n");
			    	else
			    	{
			    		printf("�����������벻һ�£��޸�ʧ��\n");
			    		fclose(Pfile);
						Pfile=fopen("1.txt","w");
						fputs(e,Pfile);
					    fputc(z,Pfile);
					    fputs(f,Pfile);
					    exit(0);
					}
			    	/*
fclose(Pfile);*/
			    	system("pause");
					break;
			}
	}
	printf("��ת���˵�...\n");	
}
