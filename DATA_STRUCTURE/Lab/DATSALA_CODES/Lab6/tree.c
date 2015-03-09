struct tree{
	char info;
	struct tree *father, *left, *right;
};

typedef struct tree *treeptr;

treeptr p;
treeptr q;

treeptr getnode()
{
	treeptr p1;
	p1=(struct tree *) malloc (sizeof(struct tree));
	return p1;
}

treeptr maketree(char entry)
{
	treeptr q1;
	q1=getnode();
	q1->info=entry;
	q1->left=NULL;
	q1->right=NULL;
	q1->father=NULL;
	return q1;
}

treeptr setleft(treeptr t, char entry)
{
	t->left=maketree(entry);
	t->left->father=t;
	return t;
}

treeptr setright(treeptr t, char entry)
{
	t->right=maketree(entry);
	t->right->father=t;
	return t;
}

void info(treeptr t)
{
	printf("\n%c\n", t->info);
	return;
}

treeptr left(treeptr t)
{
	treeptr p1;
	p1=t->left;
	return p1;
}

treeptr right(treeptr t)
{
	treeptr p1;
	p1=t->right;
	return p1;
}

treeptr father(treeptr t)
{
	treeptr p1;
	p1=t->father;
	return p1;
}

treeptr brother(treeptr t)
{
	treeptr p1, p2;
	p1=t->father;
	if(p1==NULL)
		return t;
	if(p1->right==t)
		p2=p1->left;
	else if(p1->left==t)
		p2=p1->right;
	if(p2==NULL)
		return t;
	else
		return p2;
}

treeptr root(treeptr t)
{
	treeptr p1;
	p1=t;
	while(p1->father!=NULL)
	{
		p1=p1->father;
	}
	return p1;
}

bool isleft(treeptr t)
{
	treeptr p1, p2;
	p1=t;
	p2=p1->father;
	if(p2==NULL)
		return 0;
	else if(p2->left==p1)
		return 1;
	else 
		return 0;
}

bool isright(treeptr t)
{
	treeptr p1, p2;
	p1=t;
	p2=p1->father;
	if(p2==NULL)
		return 0;
	else if(p2->right==p1)
		return 1;
	else 
		return 0;
}

int pow(int a, int b)
{
	int g, h;
	h=a;
	for(g=1;g<b;g++)
		h=h*a;
	return h;
}

bool iscomplete(treeptr t, int d, int f)
{
	int tn, x;
	x=d+1;
	tn=pow(2,x);
	tn=tn-1;
	if(tn==f)
		return 1;
	else
		return 0;
}
