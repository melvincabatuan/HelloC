#define TRUE 1
#define FALSE 0
#define bool int

#define MAX 4

char z[5]="*";

typedef struct {
	int top;
	char items[MAX];
} stack;

bool full(stack *s)
{
	if (s->top==3)
		return 1;
	else 
		return 0;
}

bool empty(stack *s)
{
	if (s->top<0)
		return 1;
	else
		return 0;
}

void push(stack *s, char c[MAX])
{
	if (empty(s))
	{
		s->top++;
		strcpy(s->items, c);
	}
	else
	{
		s->top++;
		strcat(s->items, c);
	}
	return;
}
			
char pop(stack *s)
{
	char pop;
		pop=s->items[s->top];
		s->items[s->top]='\0';
		s->top--;

	return pop;
}

void clear(stack *s)
{
	s->top=-1;
	printf("\n\nStack is now Empty!\n");
	return;
}

char top(stack *s)
{
	char top;
	top=s->items[s->top];
	return top;
}

