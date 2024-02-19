#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

char stack[100];
int top=-1;

void push(char ch)
{
	top+=1;
	stack[top]=ch;
}

char pop()
{ 
	char ch;
	ch=stack[top];
	top=top-1;
	return ch;
}

int priority(char ch)
{
	if(ch=='+' || ch=='-')
	{
		return 1;
	}
	else if(ch=='*' || ch=='/')
	{
		return 2;
	}
	else if(ch=='^')
	{
		return 3;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char infix[100], postfix[100], ch;
	int i, len, counter=0;
	printf("Enter the infix expression: ");
	scanf("%99s", infix);
	len = strlen(infix);

	for(i=0; i<len; i++)
	{
		//Check for operands
		if (isalnum(infix[i]))
		{
			postfix[counter]=infix[i];
			counter++;
		}
		else if (infix[i]=='(')
		{
			push('(');
		}
		else if (infix[i]==')')
		{
			ch=pop();
			while (ch!='(')
			{
				postfix[counter]=ch;
				counter++;
				ch=pop();
			}
		}
		else
		{
			while (priority(stack[top])>=priority(infix[i]))
			{
				ch=pop();
				postfix[counter]=ch;
				counter++;
			}
			push(infix[i]);
		}
	}

	while (top != -1)
    {
        postfix[counter] = pop();
        counter++;
    }

	postfix[counter]='\0';
	puts(postfix);
	return 0;
}