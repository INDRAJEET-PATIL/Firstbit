void main(){
	void rectangle();
	printf("Start\n");
	rectangle();
	printf("End");
}
void rectangle(){
	int length,width;
	printf("Enter the length ");
	scanf("%d",&length);
	printf("Enter the width ");
	scanf("%d",&width);
	int Area=(length*width);
	int Perimeter=(2*(length+width));
	printf("Area of rectangle is %d\nPerimeter of rectangle is %d\n",Area,Perimeter);	
}