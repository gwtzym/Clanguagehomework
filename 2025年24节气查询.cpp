#include<stdio.h>
#include<stdlib.h>

typedef struct date
{
int month;
int day;
}date;

int match(int a[][3],date b)
{
	for(int i=0;i<24;i++)
	{	
		if(b.month==a[i][0])
		{
			if(b.day==a[i][1])
				return a[i][2];
		}
    }
	return 0;
}

int main()
{
	date a;
	printf("请输入x月x日\n");
	scanf("%d %d",&a.month,&a.day);
	FILE *fp;
    fp=fopen("D:\\Clanguage\\catalogue.txt","r");
	if(fp==NULL)
	{
		printf("文件打开失败");
		exit(0);
	}
	int b[24][3];
	for(int i=0;i<24;i++)
	{
			for(int j=0;j<3;j++)
				fscanf(fp,"%d",&b[i][j]);
	}
	fclose(fp);
	int c=match(b,a);
	switch(c)
	{
		case 1:printf("这一天是小寒\n");break;
        case 2:printf("这一天是大寒\n");break;
    	case 3:printf("这一天是立春\n");break;
    	case 4:printf("这一天是雨水\n");break;
		case 5:printf("这一天是惊蛰\n");break;
		case 6:printf("这一天是春分\n");break;
		case 7:printf("这一天是清明\n");break;
		case 8:printf("这一天是谷雨\n");break;
		case 9:printf("这一天是立夏\n");break;
		case 10:printf("这一天是小满\n");break;
		case 11:printf("这一天是芒种\n");break;
		case 12:printf("这一天是夏至\n");break;
		case 13:printf("这一天是小暑\n");break;
		case 14:printf("这一天是大暑\n");break;
		case 15:printf("这一天是立秋\n");break;
		case 16:printf("这一天是处暑\n");break;
		case 17:printf("这一天是白露\n");break;
		case 18:printf("这一天是秋分\n");break;
		case 19:printf("这一天是寒霜\n");break;
		case 20:printf("这一天是霜降\n");break;
		case 21:printf("这一天是立冬\n");break;
		case 22:printf("这一天是小雪\n");break;
		case 23:printf("这一天是大雪\n");break;
		case 24:printf("这一天是冬至\n");break;
	default:printf("未查询到结果\n");break;
	}
	return 0;
}

