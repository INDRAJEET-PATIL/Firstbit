//without parameter with returntype

int add();
void main(){
	int i,fact=1;
	printf("start");
	int x=add();
	printf("addition is %d",x);
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d",x,fact);
}
int add()
{

int a=5,b=3;
int c=a+b;

return c;
}