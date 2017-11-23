//精确查找
#include"source.h" 
void datafind();
void idfind();

void outputfind();
void inputfind_menu();
void inputfind_id();
void inputfind_hight();
void inputfind_low();

void outputfind_menu();
void outputfind_hight();
void outputfind_low();
void outputfind_id();


void find()
{
	int a=0;
	printf("\n\n\n\n\n");
	printf("\t\t\t|-----------------查找的方式-----------|\n");
	printf("\t\t\t| *1  根据日期查找                     |\n");
	printf("\t\t\t| *2  根据ID查找                       |\n");
	printf("\t\t\t| *3  显示全部收入项目                 |\n");
 	printf("\t\t\t| *4  显示全部支出项目                 |\n");
	printf("\t\t\t| *5  返回                             |\n");
	printf("\t\t\t|--------------------------------------|\n\n");
	printf("\t\t\t请选择(0-5):");
	
	
	
	scanf("%d",&a);
	system("cls"); 
	switch(a)
	{
		case 1:
		 	datafind();
		 	break;

 		case 2:
 			idfind();
 			break;

		case 3:
	 		inputfind_menu();
	 		break;
		case 4:
			outputfind_menu();
			break;
		default:break;
	}
	
}
void inputfind_menu(){
	printf("\n\n\n\n\n");
	printf("\t\t\t|-----------------查找的方式-----------|\n");
	printf("\t\t\t| *1  按照id                           |\n");
	printf("\t\t\t| *2  按照从高到低                     |\n");
	printf("\t\t\t| *3  按照从低到高                     |\n");
 	printf("\t\t\t| *4  其他任意键返回                   |\n");
	printf("\t\t\t|--------------------------------------|\n\n");
	printf("\t\t\t请选择(0-4):");
	

	int n=0; 
		scanf("%d",&n);
	system("cls"); 
	switch(n)
	{
		case 1:
		 	inputfind_id();
		 	break;


 		case 2:
 			inputfind_hight();
 			break;


		case 3:
	 		inputfind_low();
	 		break;
		default:break;
	}
}

void outputfind_menu(){
	printf("\n\n\n\n\n");
	printf("\t\t\t|-----------------查找的方式-----------|\n");
	printf("\t\t\t| *1  按照id                           |\n");
	printf("\t\t\t| *2  按照从高到低                     |\n");
	printf("\t\t\t| *3  按照从低到高                     |\n");
 	printf("\t\t\t| *4  其他任意键返回                   |\n");
	printf("\t\t\t|--------------------------------------|\n\n");
	printf("\t\t\t请选择(0-4):");

	int n=0; 
	scanf("%d",&n);
	system("cls"); 
	switch(n)
	{

		case 1:
		 	outputfind_id();
		 	break;


 		case 2:
 			outputfind_hight();
 			break;



		case 3:
	 		outputfind_low();
	 		break;
		default:break;
	}
}

void datafind()
{
	FILE *fp;
	int i,m=0;
	char finddata[9]={
		0
	};
	char chhhh[2];
	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}
	printf("请输入日期(for example:20080101):\n");

	scanf("%s",finddata);
	for(i=0;i<m;i++)
	{
		if((strcmp(finddata,log[i].logdata))==0)
		{
			printf("我们已经找到这个记录，是否需要显示（y/N）：\n");
			scanf("%s",chhhh);
			if((strcmp("Y",chhhh)==0)||(strcmp("y",chhhh)==0))
			{
					printf("ID    事件       时间       收支         余额\n");
				
				printf(FORMAT,DATA);
				break;
			}
			else
			{
			return;	
			}
			
			if(i==m)
			{
				printf("not find\n");
			}
			
		}

	
	
}
	
}

void idfind()
{
	
	FILE *fp;
	int i,m=0;
	int find_id;
	char chhhh[2];
	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}
	printf("please input id:\n");

	scanf("%d",&find_id);
	for(i=0;i<m;i++)
	{
		if(find_id==log[i].logid)
		{
			printf("我们已经找到这个记录，是否需要显示（y/N）：\n");
			scanf("%s",chhhh);
			if((strcmp("Y",chhhh)==0)||(strcmp("y",chhhh)==0))
			{
				printf("ID    事件       时间       收支         余额\n");
				
				printf(FORMAT,DATA);
				break;
			}
			else
			{
			return;	
			}
			
			if(i==m)
			{
				printf("not find\n");
			}
			
		}

	
}
}

void inputfind_id()
{
	
	FILE *fp;
	int i,m=0;


	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}

	printf("ID    事件       时间       收支         余额\n");
	for(i=0;i<m;i++)
	{
		if(log[i].charge>=0)
		{
		
			
				
				printf(FORMAT,DATA);
			
		}
		
			

			
	}

	
}

void inputfind_hight()
{
	
	FILE *fp;
	int i,j,m=0;


	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}

		printf("ID    事件       时间       收支         余额\n");
	for (i = 0; i < m - 1; i++) {
        for (j = 0; j < m - 1 - i; j++) {
            if (log[j].charge < log[j+1].charge	) {
                struct LogData temp = log[j];
                log[j] = log[j+1];
                log[j+1] = temp;
            }
        }
    }
	for(i=0;i<m;i++)
	{
		if(log[i].charge>=0)
		{
		
			
				
				printf(FORMAT,DATA);
			
		}
		
			

			
	}

	
}


void inputfind_low()
{
	
	FILE *fp;
	int i,j,m=0;


	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}

	printf("ID    事件       时间       收支         余额\n");
	for (i = 0; i < m - 1; i++) {
        for (j = 0; j < m - 1 - i; j++) {
            if (log[j].charge > log[j+1].charge	) {
                struct LogData temp = log[j];
                log[j] = log[j+1];
                log[j+1] = temp;
            }
        }
    }
	for(i=0;i<m;i++)
	{
		if(log[i].charge>=0)
		{
			
				printf(FORMAT,DATA);
			
		}
		
			

			
	}

	
}



void outputfind_id()
{
		
	FILE *fp;
	int i,m=0;


	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}

	printf("ID    事件       时间       收支         余额\n");
	for(i=0;i<m;i++)
	{
		if(log[i].charge<=0)
		{
		
			
				
				printf(FORMAT,DATA);
			
		}
		
			

			
	}
}



void outputfind_hight()
{
	
	FILE *fp;
	int i,j,m=0;


	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}

	printf("ID    事件       时间       收支         余额\n");
	for (i = 0; i < m - 1; i++) {
        for (j = 0; j < m - 1 - i; j++) {
            if (log[j].charge < log[j+1].charge	) {
                struct LogData temp = log[j];
                log[j] = log[j+1];
                log[j+1] = temp;
            }
        }
    }
	for(i=0;i<m;i++)
	{
		if(log[i].charge<0)
		{
		
			
				
				printf(FORMAT,DATA);
			
		}
		
			

			
	}

	
}

void outputfind_low()
{
	
	FILE *fp;
	int i,j,m=0;


	if((fp=fopen("d://myfile.dat","ab+"))==NULL)
	{
		printf("can not open the file\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&log[m],LEN,1,fp)==1)
		m++;
	}
	fclose(fp);
	if(m==0)
	{
		printf("no record!\n");
		return;
	}

	printf("ID    事件       时间       收支         余额\n");
	for (i = 0; i < m - 1; i++) {
        for (j = 0; j < m - 1 - i; j++) {
            if (log[j].charge > log[j+1].charge	) {
                struct LogData temp = log[j];
                log[j] = log[j+1];
                log[j+1] = temp;
            }
        }
    }
	for(i=0;i<m;i++)
	{
		if(log[i].charge<0)
		{
		
			
				
				printf(FORMAT,DATA);
			
		}
			
	}
	}
