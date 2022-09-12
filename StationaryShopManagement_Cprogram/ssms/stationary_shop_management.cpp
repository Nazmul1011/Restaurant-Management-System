#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <windows.h>

struct book
{char buk[20][20]={"schand phy",
			"bs grewal",
			"let us c"};
			int schandphy=20,bsgrewal=20,letusc=20;
}k;
struct si
{int pencil=20,pen=20,scissors=20;
}i;

void renwe()
{int w,d,b,a,u,v,t;

	if(i.pen<5)
{	printf("\nadd more pens");
	printf("\nwant to add pens now enter(1) or (0)");
	scanf("%d",&w);
	if (w==1)
	{printf("\nhow many pens you want to add");
	scanf("%d",&d);
	i.pen=i.pen+d;
	printf("\npens are added & now total pens are %d",i.pen);}
	else
	printf("\nremaining pens are %d",i.pen);}
	
	if(i.pencil<5)
{	printf("\nadd more pencil");
	printf("\nwant to add pencil now enter(1) or (0)");
	scanf("%d",&w);
	if (w==1)
	{printf("\nhow many pencil you want to add");
	scanf("%d",&b);
	i.pencil=i.pencil+b;
	printf("\npencils are added & now total pencils are %d",i.pencil);}
	else
	printf("\nremaining pencil are %d",i.pencil);}
	
	if(i.scissors<5)
{	printf("\nadd more scissors");
	printf("\nwant to add scissors now enter(1) or (0)");
	scanf("%d",&w);
	if (w==1)
	{printf("\nhow many scissors you want to add");
	scanf("%d",&a);
	i.scissors=i.scissors+a;
	printf("\nscissors are added & now total scissors are %d",i.scissors);}
	else
	printf("\nremaining scissors are %d",i.scissors);}
	
	
	if(k.schandphy<5)
{	printf("\nadd more physics book");
	printf("\nwant to add physics book now enter(1) or (0)");
	scanf("%d",&w);
	if (w==1)
	{printf("\nhow many physics book you want to add");
	scanf("%d",&u);
	k.schandphy=k.schandphy+u;
	printf("\n schand physics book are added & now total physics books are %d",k.schandphy);}
	else
	printf("\nremaining schand physics book are %d",k.schandphy);}
	
		if(k.bsgrewal<5)
{	printf("\nadd more maths book");
	printf("\nwant to add maths book now enter(1) or (0)");
	scanf("%d",&w);
	if (w==1)
	{printf("\nhow many maths book you want to add");
	scanf("%d",&v);
	k.bsgrewal=k.bsgrewal+v;
	printf(" \nBS Grewal maths books are added & now total maths book are %d",k.bsgrewal);}
	else
	printf("\nremaining BS grewal book are %d",k.bsgrewal);}
	
		if(k.letusc<5)
{	printf("\nadd more computer book");
	printf("\nwant to add computer book now enter(1) or (0)");
	scanf("%d",&w);
	if (w==1)
	{printf("\nhow many cse book you want to add");
	scanf("%d",&t);
	k.letusc=k.letusc+t;
	printf("\n Let us c books are added & now total CSE books are %d",k.letusc);}
	else
	printf("\nremaining cse book are %d",k.letusc);}
	
	printf("\nremaining items are\n");
	printf("\n pens%d",i.pen);
	printf("\n pencils%d",i.pencil);
	printf("\n scissors%d",i.scissors);
	printf("\n Schand physics book%d",k.schandphy);
	printf("\n maths BS grewal book%d",k.bsgrewal);
	printf("\n CSE Let us c book%d",k.letusc);
	
	
	
	
}


main()
{int b,a,q,r,e,f,g,t,m,pay,on,old,gft,yn,ny;
long int acc,accn;
float amount,disc;
p: amount=0;b=0;q=0;r=0;e=0;f=0;g=0;disc=0,pay=0;
char c[20]={"csepbl"},s[20];
system("cls");
z: printf("\nWelcome to Stationary Shop Management System\n");
printf("\nEnter Your Choice as '1' for book and '0' for other stationary items");
scanf("%d",&a);
system("cls");
if (a==1)
{int x;
printf("\nchoose the book as\n ");
printf("\n\n(1)schand physics-(Rs 200 each)   ");
printf("\n\n(2)bs grewal maths-(Rs 400 each)  ");
printf("\n\n(3)let us c-(Rs 150 each)   ");
printf("\n\nyou will get discount  of 25 percent if you purchase more than Rs1000 or if you purchase more than 5 items\n");
scanf("%d",&x);
switch(x)
{case 1:{system("cls");printf("\nschand physics (2014 new publication)");
		printf("\n\nenter the quantity  ");
		scanf("%d",&b);
		if (b>k.schandphy)
		printf("\ninsufficient amount\n");
		else
		{amount=amount+200*b;
		k.schandphy=k.schandphy-b;}
		printf("\nwant to purchase  more enter 1 or 0  ");
		scanf("%d",&t);
		if (t==1)
		goto z;
		else if (t==0)
		goto u;
		else
		printf("invalid input  ");
		break;}
case 2:{system("cls");printf("\nbs grewal maths (2014 new publication)   ");
		printf("\n\nenter the quantity  ");
		scanf("%d",&q);
		if (q>k.bsgrewal)
		printf("\ninsufficient amount\n  ");
		else
		{amount=amount+400*q;
		k.bsgrewal=k.bsgrewal-q;}
			printf("\nwant to purchase  more enter 1 or 0  ");
		scanf("%d",&t);
		if (t==1)
		goto z;
		else if (t==0)
		goto u;
		else
		printf("invalid input  ");
		break;}
case 3:{system("cls");printf("\nLet us C by yashvant kanetkar(computer science 2014 new publication)   ");
		printf("\n\nenter the quantity   ");
		scanf("%d",&r);
		if (r>k.letusc)
		printf("\ninsufficient amount\n   ");
		else
		{amount=amount+150*r;
		k.letusc=k.letusc-r;}
			printf("\nwant to purchase  more enter 1 or 0   ");
		scanf("%d",&t);
		if (t==1)
		goto z;
		else if (t==0)
		goto u;
		else
		printf("invalid input  ");
		break;}
		default:{
	 printf("\n invalid input");
	 }


}
}
else if (a==0)
{int y;
printf("\nchoose your choice as \n ");
printf("\n\n(4)pencils-(Rs 10 each)  ");
printf("\n\n(5)pens-(Rs 30 each)  ");
printf("\n\n(6)scissors-(Rs 50 each)  ");
printf("\n\nyou will get discount of 25 percent if you purchase more than Rs1000 or if you purchase more than 10 items\n");
scanf("%d",&y);
switch(y)
{case 4:{system("cls");printf("\npencils(HB)  ");
		printf("\nenter the quantity  ");
		scanf("%d",&e);
		if(e>i.pencil)
		printf("\ninsufficient amount\n  ");
		else
		{amount=amount+10*e;
		i.pencil=i.pencil-e;
		}
			printf("\nwant to purchase  more enter 1 or 0  ");
		scanf("%d",&t);
		if (t==1)
		goto z;
		else if (t==0)
		goto u;
		else
		printf("invalid input  ");
	break;}
case 5:{system("cls");printf("\npens");
		printf("\n\nenter the quantity  ");
		scanf("%d",&f);
		if(f>i.pen)
		printf("\ninsufficient amount\n  ");
		else
		{amount=amount+30*f;
		i.pen=i.pen-f;
		}
			printf("\nwant to purchase  more enter 1 or 0   ");
		scanf("%d",&t);
		if (t==1)
		goto z;
		else if (t==0)
		goto u;
		else
		printf("invalid input");
	break;
}
case 6:{system("cls");printf("\nscissors  ");
		printf("\n\nenter the quantity  ");
		scanf("%d",&g);
		if(g>i.scissors)
		printf("\ninsufficient amount\n");
		else
		{amount=amount+50*g;
		i.scissors=i.scissors-g;
		}
			printf("\nwant to purchase  more enter 1 or 0   ");
		scanf("%d",&t);
		if (t==1)
		goto z;
		else if (t==0)
		goto u;
		else
		printf("invalid input");
	break;
	default:{
	 printf("\n invalid input");
	 }
}
}
}
else
printf("invalid input");
system("cls");
u:printf("\nyou bought");
printf("\n\nphysics schand-%d",b);
printf("\n\nbs grewal-%d",q);
printf("\n\nlet us c-%d",r);
printf("\n\npencils-%d",e);
printf("\n\npens-%d",f);
printf("\n\nscissors-%d",g);
printf("\n\npress enter\n");getch();
if ((b+q+r)>=5||(e+f+g)>=10||amount>=1000)
{disc=amount/4;
}
else
disc=0;
system("cls");
pay=(amount-disc);old=((amount-disc)-(amount/5));
printf("\n\nare u an old customer press (1) or new customer (0)\n  ");
scanf("%d",&on);
if (on==1)
{printf("\nyour total amount is:-%f",amount);
printf("\n\n you can pay:- %d",old);}
else
 {printf("\nyour total amount is:-%f",amount);
 printf("\n\n you can pay:- %d",pay);}

printf("\n\nnotification for shopkeeper.....please enter the code  ");
scanf("%s",&s);
if(strcmp(s,c)==0)
renwe();
else
printf("\n\ninvalid input of code");


getch();
}


