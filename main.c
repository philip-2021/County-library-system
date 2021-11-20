//Write a program in C to swap two numbers using function//
void swap(int a,int b);
int main()
{
int a,b;
printf("Input 1st number : ");
scanf("%d",&a);
printf("Input 2nd number : ");
scanf("%d",&b);
swap(a,b);
return 0;

}
void swap(int a,int b)
{
printf("Before swapping: n1 = %d , n2 = %d\n",a,b);
a+=b; // a=a+b
b=a-b;
a=a-b;
printf("After swapping: n1 = %d , n2 = %d\n",a,b);
}
