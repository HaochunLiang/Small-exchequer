#include"source.h"
int main()
{	int n=0;
	logon();
	system("cls"); 
/*
	password2();*/
	system("cls"); 
	menu();
	scanf("%d",&n);
	system("cls"); 
	while(n)
	{
		switch(n)
			{
			case 1:
				logininin();
				break;
			case 2:
				show();
				break;
			case 3:
				record(); 
				break;
			case 4:
				del();
				break;
			case 5:
				lastlog();
				break;
			case 6:
				find();
				break; 
			default:break;	
				
				}

			
	getch();
	system("cls");
	menu();
	scanf("%d",&n);	
	system("cls");
	
	}
	
	return 0;
}