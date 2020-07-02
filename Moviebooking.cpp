#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void insert(node **p,int v)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=v;
	newnode->next=NULL;
	if(*p==NULL)
	*p=newnode;
	else
	{
		node *temp;
		temp=*p;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=newnode;
	}
}
void display(node *p)
{
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
    }
}
int deleteseat(node **p,int v)
{
	node *temp,*prev;
	temp=*p;
	while(temp!=NULL)
	{
		if(temp->data==v)
		break;
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	return 0;
	if(temp==*p)
	*p=temp->next;
	else
	{
		prev->next=temp->next;
		free(temp);
		return 1;
	}
}
int count(node *p)
{
	int c=0;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	return c;
}
int costticket(int s,int v)
{
	int c=0;
	if(s==1)
	{
	c=(c+200)*v;
	return c;
    }
	else
	{
	c=(c+300)*v;
	return c;
	}
}
int main()
{   
    node *first=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&first,j+1);
	}
	node *second=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&second,j+1);
	}
	node *third=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&third,j+1);
	}
	node *fourth=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&fourth,j+1);
	}
	node *fifth=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&fifth,j+1);
	}
	node *sixth=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&sixth,j+1);
	}
	node *seventh=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&seventh,j+1);
	}
	node *eighth=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&eighth,j+1);
	}
	node *ninth=NULL;
	for(int j=0;j<10;j++)
    {
    	insert(&ninth,j+1);
	}
	node *tenth=NULL;
    for(int j=0;j<10;j++)
    {
    	insert(&tenth,j+1);
	}
    char choice;
    int seat,cost,c,d;
    printf("\n\t\tMOVIE:DEAR ZINDAGI\t\t");
    printf("\nEnter row preference: ");
	scanf("%s",&choice);
	switch(choice)
	{
	    case 'A':
	    	printf("\nRow A: ");
	    	display(first);
	    	printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(first)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&first,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(first);
        	}
        	printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
	    	break;
	    case 'B':	
	    	printf("\nRow B: ");
	        display(second);
	        printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(second)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&second,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(second);
		    }
		    printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
	        break;
		case 'C':
			printf("\nRow C: ");
			display(third);
			printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(third)!=0)
	    	{   
	    	    printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&third,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(third);
		    }
		    printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
			break;
		case 'D':
			printf("\nRow D: ");
			display(fourth);
			printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(fourth)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&fourth,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(fourth);
		    }
		    printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
			break;
		case 'E':
			printf("\nRow E: ");
			display(fifth);
			printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(fifth)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&fifth,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(fifth);
		    }
		    printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
			break;
		case 'F':
			printf("\nRow F: ");
			display(sixth);
			printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(sixth)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&sixth,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(sixth);
		    }
		    printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
			break;
		case 'G':
			printf("\nRow G: ");
			display(seventh);
			printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(seventh)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&seventh,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(seventh);
	        }
	        printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
			break;
		case 'H':
			printf("\nRow H: ");
			display(eighth);
			printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(eighth)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&eighth,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(eighth);
		    }
		    printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
			break;
		case 'I':
			printf("\nRow I: ");
			display(ninth);
			printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(ninth)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&ninth,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(ninth);
		    }
		    printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
			break;
		case 'J':
			printf("\nRow J: ");
		    display(tenth);
		    printf("\nEnter no of seats booked: ");
	    	scanf("%d",&seat);
	    	if(count(tenth)!=0)
	    	{
	    		printf("\nSeats choosen: \n");
	    		for(int k=1;k<=seat;k++)
	    		{
	    		deleteseat(&tenth,k);
	    		printf("%d\t",k);
			    }
			    printf("\nAvailable seats: \n");
			    display(tenth);
			}
			printf("\nCOST:\nSilver:Rs200\nGold:300\n");
        	printf("\nChoose category: ");
        	scanf("%d",&cost);
        	switch(cost)
        	{
        	case 1:c=costticket(1,seat);
        	printf("\nCost is %d",c);
        	        break;
        	case 2:c=costticket(2,seat);
        	printf("\nCost is %d",c);
        	        break;
        	default:printf("\nNo category");
        	}
        	if(c>1000)
        	{
        		d=c-(0.1*c);
        		printf("\nCost after dicount is %d",d);
			}
		    break;
		default:
		printf("\nNo such row!!!\n");    
	}
}