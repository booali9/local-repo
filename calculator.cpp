	#include <stdio.h>
	#include <math.h>
	#include <windows.h>
	
	
	#define max 10
	struct complex{
		int real ;
		int imaginary;
	};
	
	int factorial(int n) {
	    int fact = 1;
	    for (int i = 1; i <= n; ++i) {
	        fact *= i;
	    }
	    return fact;
	}
	
	int main() {
	    char choice;
	    int n,m;
	    int a[max][max],b[max][max],c[max][max],transpose[max][max];
	
	    printf("\nWelcome to Kazmi Calculator\n");
	    printf("We are here to solve your math calculations\n");
	    printf("Enter '1' for factorial, '2' for any table multiplication, '3' for permutation,\n");
	    printf("'4' for combination, '5' for matrix transpose, '6' for matrix addition,\n");
	    printf("'7' for root of quadratic equation, '8' for complex no addition and subtraction,\n");
	    printf("'9' for complex no multiplication\n");
	    printf("Enter choice: ");
	    scanf(" %c", &choice); 
	    switch (choice) {
	        case '1':
	            printf("\nEnter a number: \n");
	            scanf("%d", &n);
	            printf("\nFactorial of %d is %d\n", n, factorial(n));
	            break;
	
	       case '2':
	       	
	       	
	       	  printf("Enter a number: ");
	            scanf("%d", &n);
	            for(int i=1;i<=10;i++){
	            	printf("\n Table of %d:\n \n%dx%d=%d\n ",n,i,n*i);
				}
	       	break;
	        case '3' :
	        	{ 
	        	 int r;
	        		printf ("\nenter n and r\n");
	        		scanf("%d %d", &n, &r);
	        		if(n<1||n<r){
	        			printf("\nwrong input\n");
	        			
					}
					float p;
					
				p=(factorial(n)/factorial(n-r));
				printf("\ncombination=%f\n", p);
	        		
	        		
				}
				break;
				case '4':
						{ 
	        	 int r;
	        		printf ("enter n and r");
	        		scanf("%d %d", &n, &r);
	        		if(n<1||n<r){
	        			printf("\nwrong input\n");
	        			
					}
					float c;
					
				c=(factorial(n)/(factorial(r)*factorial(n-r)));
				printf("permutation=%f", c);
	        		
	        		
				}
				break;
				case '5':
					{
						int rows,col;
						printf("\nenter no of rows and column\n");
						scanf("%d %d", &rows, &col);
						
							for(int i=0;i<rows;i++){
			for (int j=0;j<col;j++){
				printf("\nenter elementa[%d][%d]\n:",rows,col);
				scanf("%d",&a[i][j]);
				
				
			}
		}
		
		printf("\nenter matrix\n");
		
		for(int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				printf("%d\t",a[i][j]);
					}
							printf("\n\n");
					}
				
					for(int i=0;i< rows;i++){
			for(int j=0;j<col;j++){
				transpose[j][i]=a[i][j];
					}
						
					}
				// displaying tanspose of matrix	
				printf("\ntranspose of matrix\n");
					
		for(int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				printf("%d\t",transpose[i][j]);
					}
							printf("\n\n");
					}
		
		}
			break;
		case '6':
		{
				int rows,col;
						printf("\nenter no of rows and column\n");
						scanf("%d %d", &rows, &col);
						
							for(int i=0;i<rows;i++){
			for (int j=0;j<col;j++){
				printf("\nenter elementa[%d][%d]\n:",rows,col);
				scanf("%d",&a[i][j]);
				
				
			}
		}
		
		printf("\nenter matrix\n");
		
		for(int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				printf("%d\t",a[i][j]);
					}
							printf("\n\n");
					}
							for(int i=0;i<rows;i++){
			for (int j=0;j<col;j++){
				printf("\nenter elementa[%d][%d]\n:",rows,col);
				scanf("%d",&b[i][j]);
				
				
			}
		}
		
		printf("\nenter matrix\n");
		
		for(int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				printf("%d\t",b[i][j]);
					}
							printf("\n\n");
					}
					
					//adding matrix
					printf("\n the sum of two matrix \n");
					
					for (int i=0;i<rows;i++){
					for (int j=0;j<=col;j++){
						c[i][j]=a[i][j]+b[i][j];
					}
					}
					//displaying addition of matrix
						for (int i=0;i<rows;i++){
					for (int j=0;j<=col;j++){
					printf("%d \t",c[i][j]);
					}
					printf("\n\n");
					}
				}
					break;
		case '7':
	{
		int a,b,c,D;
		float x1,x2;
		printf ("enter a b and c ");
		scanf ("%d %d %d",&a,&b,&c);
		D=b*b-4*a*c;
		if (D=0){
			printf("\nroots are real\n");
			x1=b/2*a;
			x1=x2;
			printf("x1=%f\nx2=%f",x1,x2);
			
		}
	else if(D>0){
			printf("\nroots are real and unequal\n");
			x1=(-b+sqrt(D))/2*a;
				x2=(-b-sqrt(D))/2*a;
					printf("x1=%f\nx2=%f",x1,x2);
		}
	else if(D<0){
				printf("\nroots are imaginary and   unequal\n");
			x1=(-b+sqrt(D))/2*a;
				x2=(-b-sqrt(D))/(2*a);
					printf("x1=%f\nx2=%f",x1,x2);		}
			
				
				
				
				
			}
	break;
	case '8':{
		struct complex c1,c2,c3;
		printf("enter real");
		scanf("%d",&c1.real);
		printf("enter imaginary");
		scanf("%d",&c1.imaginary);
			printf("enter real");
		scanf("%d",&c2.real);
		printf("enter imaginary");
		scanf("%d",&c2.imaginary);
		c3.real=c1.real+c2.real;
		c3.imaginary=c1.imaginary+c2.imaginary;
		printf("%d+i%d",c3.real,c3.imaginary);
	
		
		
	
	}break;
	
	case '9' :
		{
				struct complex c1,c2,c3;
		printf("enter real");
		scanf("%d",&c1.real);
		printf("enter imaginary");
		scanf("%d",&c1.imaginary);
			printf("enter real");
		scanf("%d",&c2.real);
		printf("enter imaginary");
		scanf("%d",&c2.imaginary);
			
		c3.real=c1.real*c2.real-c1.imaginary*c2.imaginary ;
		c3.imaginary=c1.real*c2.imaginary+c1.imaginary*c2.real;
		printf("%d+i%d",c3.real,c3.imaginary);	
			
			
			
		}
		break;						
		
					
	
	        default:
	            printf("\nkazmi calculator in on the way to add more complex mathamatics calculation\n");
	    }
	    
	
	    return 0;
	}
