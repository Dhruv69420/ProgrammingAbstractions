#include<stdio.h>

#define SIZE 100

int Stack[SIZE], top=-1;

int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

int push(char item)
{
  Stack[++top] = item;
}

int pop()
{
  int temp;
  if (isEmpty())
  {
    return -1;
  }
  temp=Stack[top--];
  return temp;
}

int peek()
{
  int temp;
  if (isEmpty())
  {
    return -1;
  }
  temp=Stack[top];
  return temp;
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z');
}
 
// A utility function to return
// precedence of a given operator
// Higher returned value means
// higher precedence
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}
 
 
int infixToPostfix(char* exp)
{
    int i, k;
    if(!Stack) // See if stack was created successfully
        return -1 ;
 
    for (i = 0, k = -1; exp[i]; ++i)
    {
         
        // If the scanned character is
        // an operand, add it to output.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];
         
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (exp[i] == '(')
            push(exp[i]);
         
        // If the scanned character is an ‘)’,
        // pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (exp[i] == ')')
        {
            while (!isEmpty(Stack) && peek(Stack) != '(')
                exp[++k] = pop(Stack);
            if (!isEmpty(Stack) && peek(Stack) != '(')
                return -1; // invalid expression            
            else
                pop(Stack);
        }
        else // an operator is encountered
        {
            while (!isEmpty(Stack) && Prec(exp[i]) <= Prec(peek(Stack)))
                exp[++k] = pop(Stack);
            push(exp[i]);
        }
 
    }
 
   
    while (!isEmpty(Stack))
        exp[++k] = pop(Stack );
 
    exp[++k] = '\0';
    printf( "%s", exp );
}

int main()
{
 char exp[100];
 scanf("%s",&exp);
 infixToPostfix(exp);
}

