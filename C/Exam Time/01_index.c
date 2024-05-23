#include<stdio.h>

int main()
{
	palin();
}
    void palin()
    {
    	int n;
	printf("enter any number:");
	scanf("%d",&n);
	int original=n;
    	int rem,n;
    	int rev=0;

    	while(n!=0)
    	{
    		rem=n%10;
    		rev=rev*10+rem;
    		n=n/10;
		}
		if(original==rev)
		{
			printf("palindrome");
		}
		else{
			printf("not palindrome");
		}
	}
