//Singly Linked-List Library of functions

struct node{
	char info;
	struct node *next;
};

typedef struct node *nodeptr;

nodeptr SL;

nodeptr getnode()
{
	nodeptr p;
	p=(struct node *) malloc (sizeof(struct node));
	return p;
}

nodeptr initialize(nodeptr S)
{
	S=NULL;
	return S;
}

bool empty(nodeptr S)
{
	if(S==NULL)
		return 1;
	else
		return 0;
}

nodeptr insert(nodeptr S, int pos, char entry)
{
	nodeptr p1, p2, p3;
	int i;
	if(pos==0)
	{
		p1=getnode();
		p1->info=entry;
		p1->next=S;
		S=p1;
		return S;
	}
	else
	if (pos>0)
	{
		p1=S;
		for(i=0;i<pos;i++)
		{
			p2=p1;
			p1=p1->next;
		}
		if (p1!=NULL)
		{
		p3=getnode();
		p3->info=entry;
		p3->next=p1;
		p2->next=p3;
		}
		else
		{
		p3=getnode();
		p3->info=entry;
		p2->next=p3;
		p3->next=NULL;
		}
	return S;
	}
}

nodeptr remove(nodeptr S, int pos)
{
	nodeptr p1, p2, p3;
	int j;
	if (pos==0)
	{
		p1=S;
		S=p1->next;
		free(p1);
		return S;
	}
	else
	if (pos>0)
	{
		p1=S;
		for(j=0;j<pos;j++)
		{
			p2=p1;
			p1=p1->next;
		}
		if(p1->next==NULL)
		{
			free(p1);
			p2->next=NULL;
		}
		else
		{
			p2->next=p1->next;
			free(p1);
		}
		return S;
	}
}


void display(nodeptr S)
{
	nodeptr p1;
	p1=S;
	printf("\n");
	while(p1!=NULL)
	{
		printf("%c", p1->info);
		p1=p1->next;
	}
	printf("\n");
	return;
}
