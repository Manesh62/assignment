#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	char m;
	m='p';
	while(m =='p')
    {

	printf("1 for the sum of two number\n");
	printf("2 for the simple interst\n");
	printf("3 for number is positive or negative\n");
	printf("4 for the number is odd or even\n");
	printf("5 for largest among three numbers\n");
	printf("6 for sum of the series\n");
	printf("7 for  read n number display the sum\n");
	printf("8 for the factorial of number\n");
	printf("9 for the calculation of electricity bill\n");
	printf("10 for the lcm and hcf of two number\n");
	printf("11 for the fibonacci series up to n number\n");
	printf("12 for counting the number of digits in a number\n");
	printf("13 for the reverse the digit in a number\n");
	printf("14 for finding the prime factors\n");
	printf("15 if a number is grater than N1,less than N2 and divisible by 7\n");
	printf("enter the choice you which you want to get \n\n\n");
	
    	scanf("%d",&c);
	switch(c)
	{
		case 1:
    {
						
	int a,b,sum;
    printf("Enter two integers: ");
    scanf("%d,%d", &a,&b);
    sum = a+b;      
    printf("%d + %d = %d\n\n",a,b,sum);
    break;
   }
        case 2:
    {
    int p,t;
    float r,i;
    printf("Enter the principal: ");
    scanf("%d",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter the time: ");
    scanf("%d",&t);
    i=(p*r*t)/100;
    printf("The Simple interest is %.2f\n",i);
	
	break;		
	}  
	    case 3:
	{
		int n;
    printf("Input a number : ");
    scanf("%d", &n);
    if (n<0) 
        {
		printf("%d is a negative number \n", n); 
    }
	else if(n>0){
	
        printf("%d is a positive number \n", n);
    }
    else
    {
    	printf("%d is a neither positive nor negative number\n ",n);
	}
	}
	break;		
	 case 4:
	{
	int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if(a%2 == 0)
        printf("%d is even.\n",a);
    else
        printf("%d is odd.\n",a);
    break ;    
	 }
	  case 5:
	{
	int a,b,c;
    printf("Enter three different numbers: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>=b && a>=c)
	{
	printf("%d is the largest number.\n",a);
    }
    else if (b>=a && b>=c)
	{
	 printf("%d is the largest number.\n",b);
    }
    else{
	
    printf("%d is the largest number.\n",c);
     }
	  break;
	}	 
	  case 6:
	{  int n, i, sum = 0; 
    printf(" Enter a positive number: ");  
    scanf("%d", &n);  
    for (i=0; i<=n; i++)  
    {  
        sum =sum+i;
    }  
    printf("\n Sum of the first %d number is: %d\n",n,sum);   
    getch();  
	break;	 
    }
	 case 7:
	{
		int i,sum=0,n;
		printf("enter value of n ");
		scanf("%d",&n);
		int a[n];
		
		for(i=0;i<n;i++)
		{
			printf("enter the numbers\n");
	
			scanf("%d",&a[i]);
			sum=sum+a[i];
	}
	
		printf("the sum is %d\n",sum);
	}
break;
		 
	 case 8:
	{
		int i,f=1,n;
		printf("enter the value of n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
	printf("the factorial of %d is %d \n",n,f);	
	 break;	
	}	 
	case 9:
	{
		// rs 80 for 20 units
	// rs 8 for next 100 units 
	// rs 10 per unit  for anything more]
	float unit,rs;
	printf("enter the unit");
	scanf("%f",&unit);
	if(unit<=20)
	{
		rs=4*unit;
	}
	else if(unit>20 && unit<=120)
	{
		rs=80+(unit-20)*0.08;
	}
	else if(unit>120)
	{
		rs=80+100*0.08+(unit-120)*10;
	}
	printf("the electricity bill of %.2f unit is %.2f\n\n  ",unit,rs);	
}
	 break;	
		 
	case 10:
	{
	int a,b,x,y,l;
	printf("enter the two number");
	scanf("%d,%d",&a,&b);
	x=a;
	y=b;
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
			y=y-x;
		}
	l=(a*b)/x;
}
	printf("the hcf is %d\n",x);
	printf("the lcm is %d\n",l);
	break;	
	}	 
	case 11:
	{
		// fibonacci series 0,1,2,3
	int a=0,b=1,i,c,n;
	
	printf("enter the value of n for which fibonacci series want to");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	
	 break;	
	}	 
	case 12:
	{ 
	// counting the number of digits
	int c=0,i;
	long long n;//long long is an integer type which is at least 64-bit wide.
	printf("enter the number to count the digits");
	scanf("%lld",&n);
    while(n!=0)
    
   	{
    		n/=10;
    		c++;
    }
     printf("the number is digits is %d\n\n",c);
	 break;	
	}	 
	case 13:
	{ 
	int n,rev=0,rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
   while(n!=0) {
        rem=n%10;
        rev =rev*10+rem;
        n/=10;
    }
    printf("Rev=%d\n",rev);
    
	 break;	
	}	 
	case 14:
	{ 
	int n,i;
	printf("enter the n number of which you want to get prime factor");
	scanf("%d",&n);
	for(i=2;n>2;i++)
	{
		while(n%i==0)
		{
			printf("%d is prime factor\n",i);
			n=n/i;
		}
	 
	}
	break;
}
	case 15:
	{ 
	// if n is greater than n1, less than n2 divisible by 7 		 
	int n1=10,n2=20,n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n>n1 && n<n2)
	{
		if(n%7==0)
		{
			printf("we found the right number\n");
		}
		
	}
	 break;	
	}
	default:
   {
		printf("enter the menu number again\n");
		break;
	}
    } 
    printf(" enter small p for more");
	scanf(" %c",&m);
	}
}

   
	
		
		
	
