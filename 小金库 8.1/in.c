void in()
{
	int i,m=0;/*m�Ǽ�¼������*/
	char ch[2];
	FILE *fp;/*�����ļ�ָ��*/
	if((fp=fopen("data","ab+"))==NULL)/*��ָ���ļ�*/
{
	printf("can not open the file\n");
	return;
}
	while(!feof(fp))
{
if(fread(&stu[m] ,LEN,1,fp)==1)
m++;/*ͳ�Ƶ�ǰ��¼����*/
}
	fclose(fp);
	if(m==0)
	printf("No record!\n");
else
{
	system("cls");
	show();/*����show��������ʾԭ����Ϣ*/
}
if((fp=fopen("data","wb"))==NULL)
{
	printf("can not open the file\n");
	return;
}
	printf("please input(Y/N):");
	scanf("%s",ch);
while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)/*�ж��Ƿ�Ҫ¼������Ϣ*/
{
	printf("����ѧ��:");
	scanf("%s",stu[m].Term);
	printf("����רҵ�༶:");
	scanf("%s",stu[m].Class);
	printf("����ѧ������:");
	scanf("%s",stu[m].name);/*����ѧ������*/
	printf("ѧ��:");
	scanf("%s",stu[m].num);/*����ѧ��ѧ��*/
	printf("���빤����ѧ�ɼ�:");
	scanf("%lf",&stu[m].score[0]);/*���빤����ѧ�ɼ�*/
	printf("�����ѧӢ��ɼ�:");
	scanf("%lf",&stu[m].score[1]);/*�����ѧӢ��ɼ�*/
	printf("����C���Գɼ�:");
	scanf("%lf",&stu[m].score[2]);/*����C���Գɼ�*/
	stu[m].sum=stu[m].score[0]+stu[m].score[1]+stu[m].score[2];/*������ܳɼ�*/
	stu[m].ave=stu[m].sum/3.0;/*�����ƽ����*/
if(fwrite(&stu[m],LEN,1,fp)!=1)/*����¼�����Ϣд��ָ���Ĵ����ļ�*/
{
	printf("���ܱ���!");
	getch();
}
else
{
	printf("%s ����ɹ�!\n",stu[m].name);
	m++;
}
	printf("�Ƿ����?(Y/N):");/*ѯ���Ƿ����*/
	scanf("%s",ch);
}
fclose(fp);
printf("OK!\n");
	
	
	
}