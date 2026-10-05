#include <stdio.h>

int main()
{
	// variables
	//char productname_log[3000]; //log, will be made once I learn loops
	// log prices?
	char product_name[30] = "";
	float price = 0.0f; float total = 0.0f; short quantity = 0;
	char currency = '$';
	
	// get user input
	printf("Input product name: ");
	fgets(product_name, sizeof(product_name), stdin);
	printf("Input price: ");
	scanf("%f", &price);
	printf("Input quantity: ");
	scanf("%hd", &quantity);

	total += (price * quantity);
	
	// output
	printf("Product: %s\n", product_name);
	printf("Price for each: %f%c\n", price, currency);
	printf("Total: %f%c\n", total, currency);

	return 0;
}
