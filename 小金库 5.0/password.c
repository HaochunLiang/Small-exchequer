
//系统密码 
#include"source.h"
void password()
{

char szUser[20] = {0};
char *PUser[3]={"hv","km","00000000000"};
char *Pword[3]={"123","321","00000000000"};
char chPwd[4];
int flag_u=0,i=0,flag_p=0,num=0;
printf("Enter user name:");
gets(szUser);
//printf("szUser=%s\n",szUser);
while(i<2)
{
if(strcmp(szUser,PUser[i])==0)
{
flag_u=1;
break;
}
else
{
flag_u=0;
i++;
}
num=i;
}
//printf("num=%d,flag_u=%d\n",num,flag_u);
printf("Enter passwd:");
i=0;
while (i<10)
{
chPwd[i]=getch();
if(chPwd[i]==13)
break;
printf("%c", chPwd[i]);

printf("\b*");
i++;
}
chPwd[3]='\0';
//printf("chPwd=%s\n",chPwd);
printf("\n");
if(strcmp(chPwd,Pword[num])==0)
flag_p=1;
else
flag_p=0;
if((flag_u==1)&&(flag_p==1))
printf("登录成功！");
else
{printf("您输入的账号或密码错误！");
exit(1);
}
}