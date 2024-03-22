#include<stdio.h>

struct marks{
	
	char name[1000];
	int roll_no,chem,maths,phy,total;
	float percent;
}; 
main()
{
	int n=5,i;
	struct marks m;
	
	for(i=0;i<=n;i++)
	{
		printf("enter details of students : %d\n",i);
		
		printf("enter name :");
		scanf("%s",&m.name);
		
		printf("enter roll no. :");
		scanf("%d",&m.roll_no);
		
		printf("enter chemistry marks :");
		scanf("%d",&m.chem);
		
		printf("enter mathemactics marks :");
		scanf("%d",&m.maths);
		
		printf("enter physics marks :");
		scanf("%d",&m.phy);
		
		m.total = m.chem + m.maths + m.phy;
		printf("total : %d/300\n",m.total);
		
		m.percent = m.total/3;
		printf("percentagev : %.2f%%\n",m.percent);
		
		printf("-------------------------------------\n");
		
	}
}