#include<stdio.h>
int main()
{
int a,b,c;
char symbol;
int i=1;
while(i==1)
{
	scanf("%d%d%d%c",&a,&b,&c,&symbol);
switch(symbol)
{
	case '+':
		{
			printf("%d+%d=%d",a,b,c);
			break;;
		}
	case '-':
		printf("%d-%d=%d",a,b,c);
	case '*':
		printf("%d*%d=%d",a,b,c);
	case '/':
		printf("%d/%d=%d",a,b,c);

}
}
	return 0;
}

