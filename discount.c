#include <stdio.h>
int main()
{
	double quantity,price,amount,discount;
	
	printf("Enter quantity:");
	scanf("%if ",&quantity);
	
	printf("Enter price:");
	scanf("%if ",&price);
	
	amount=quantity*price;
	
	if(amount>1000)
	{
		discount=amount*0.1;
		amount=amount-discount;
	}
	printf("%d",amount);
	
	return 0;
}