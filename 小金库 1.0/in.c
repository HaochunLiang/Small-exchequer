void in()
{
	int i,m=0;/*m是记录的条数*/
	char ch[2];
	FILE *fp;/*定义文件指针*/
	if((fp=fopen("data","ab+"))==NULL)/*打开指定文件*/
{
	printf("can not open the file\n");
	return;
}
	while(!feof(fp))
{
if(fread(&stu[m] ,LEN,1,fp)==1)
m++;/*统计当前记录条数*/
}
	fclose(fp);
	if(m==0)
	printf("No record!\n");
else
{
	system("cls");
	show();/*调用show函数，显示原有信息*/
}
if((fp=fopen("data","wb"))==NULL)
{
	printf("can not open the file\n");
	return;
}
	printf("please input(Y/N):");
	scanf("%s",ch);
while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)/*判断是否要录入新信息*/
{
	printf("输入学期:");
	scanf("%s",stu[m].Term);
	printf("输入专业班级:");
	scanf("%s",stu[m].Class);
	printf("输入学生姓名:");
	scanf("%s",stu[m].name);/*输入学生姓名*/
	printf("学号:");
	scanf("%s",stu[m].num);/*输入学生学号*/
	printf("输入工科数学成绩:");
	scanf("%lf",&stu[m].score[0]);/*输入工科数学成绩*/
	printf("输入大学英语成绩:");
	scanf("%lf",&stu[m].score[1]);/*输入大学英语成绩*/
	printf("输入C语言成绩:");
	scanf("%lf",&stu[m].score[2]);/*输入C语言成绩*/
	stu[m].sum=stu[m].score[0]+stu[m].score[1]+stu[m].score[2];/*计算出总成绩*/
	stu[m].ave=stu[m].sum/3.0;/*计算出平均分*/
if(fwrite(&stu[m],LEN,1,fp)!=1)/*将新录入的信息写入指定的磁盘文件*/
{
	printf("不能保存!");
	getch();
}
else
{
	printf("%s 保存成功!\n",stu[m].name);
	m++;
}
	printf("是否继续?(Y/N):");/*询问是否继续*/
	scanf("%s",ch);
}
fclose(fp);
printf("OK!\n");
	
	
	
}