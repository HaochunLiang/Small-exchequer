#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#define FORMAT "%-3d   %-8s   %-8s   %-8.1lf     %-8.1lf \n"
#define DATA log[i].logid,log[i].lognote,log[i].logdata,log[i].charge,log[i].balance
#define LEN sizeof(struct LogData)

void bgm();
	struct LogData{
	
	long logid;//ID
	char logdata[9];//�¼�ʱ�� 
	char lognote[15];//�¼����� 
	double charge;//֧�������� 
	double balance;//��� 
	
	
};
struct LogData log[100];
struct LogData logone[100];




