//ʱ�亯�� 


#include"source.h"
void timesss() 
{

char *wday[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

time_t timep;

struct tm *p;

time(&timep);

p = gmtime(&timep);


printf("%d/%d/%d ",(1900+p->tm_year),(1+p->tm_mon),p->tm_mday);

printf("%s %d:%d:%d\n",wday[p->tm_wday],p->tm_hour,p->tm_min,p->tm_sec);



}