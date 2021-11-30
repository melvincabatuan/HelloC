#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[256];
    char location[256];
    int rating;
    char review[256];

} Supplier;

typedef struct
{
    char product_number[256];
    int quantity;
    int price;
    char unit[256];
    char description[256];
    char person[256];
    Supplier supplier;
} Product;

int calculateTotal(Product *products)
{

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total = total + products[i].quantity;
    }

    return total;
}

int main(void)
{
    Product *products;

    int N;
    printf("Enter N:");
    scanf("%d", &N);
    //Just a way for you to dynamically store number of Products depending on the users
    //Helps you avoid possible error rather than simply using a contant array declaration
    products = (Product *)malloc(N * sizeof(Product));

    // Product Number
    strcpy(products[0].product_number, "PS-001");
    strcpy(products[1].product_number, "QS-010");
    strcpy(products[2].product_number, "PU-443");

    //Quantity
    products[0].quantity = 1;
    products[1].quantity = 10;
    products[2].quantity = 500;

    //Unit
    strcpy(products[0].unit, "box");
    strcpy(products[1].unit, "box");
    strcpy(products[1].unit, "item");

    strcpy(products[0].supplier.name, "Cristoff");
    strcpy(products[1].supplier.name, "Keith");
    strcpy(products[2].supplier.name, "Jimwell");

    printf("The Product %s has quantity %d from the supplier with name %s\n",
           products[0].product_number,
           products[0].quantity,
           products[0].supplier.name);

    int totalQuantity = calculateTotal(products);
    printf("Total quantity now is %d\n", totalQuantity);

    return 0;
}