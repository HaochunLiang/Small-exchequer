#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<time.h>
#define FORMAT "%-3d   %-8s   %-8s   %-8.1lf     %-8.1lf \n"
#define DATA log[i].logid,log[i].logdata,log[i].lognote,log[i].charge,log[i].balance
#define LEN sizeof(struct LogData)


	struct LogData{
	
	long logid;
	char logdata[9];
	char lognote[15];
	char logtime[50];
	double charge;
	double balance;
	
	
};
struct LogData log[100];
struct LogData logone[100];




