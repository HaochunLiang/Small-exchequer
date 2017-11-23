#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<time.h>
#define FORMAT "  %2d   %2s   %2s   %4.1lf     %4.1lf \n"
#define DATA log[i].logid,log[i].logdata,log[i].lognote,log[i].charge,log[i].balance
#define LEN sizeof(struct LogData)
int number;

 struct LogData{
	
	long logid;
	char logdata[9];
	char lognote[15];
	char logtime[50];
	double charge;
	double balance;
	
	
};


struct LogData log[100];



