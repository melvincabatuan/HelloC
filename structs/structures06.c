/** Structure in Structures
 *
 * Initially, you have something like this.
 * Product Number	Quantity	Unit	Description	    Person In-Charge Supplier
 *   PS-001	            1	    box	    Nike Shoes	    John             Cristoff
 *   QS-010	            10	    box	    Alcohol	        Jose             Keith
 *   PU-443	            500	    item	Facemask	    Anthony          Jimwell
 *
 * But what if you want to add more information to your supplier rather than just their name?
 * Option 1; Add more "fields" onto your existing structures
 *  - Although this is a gonna work. But, it's gonna kinda clunky especially if you're data gets bigger.
 * Option 2: Create a new Stucture for the Supplier. 
 *  - This is preferred as it makes your data more organized
**/
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
    Supplier supplier; //Think of struct as just defining your own datatype. Here you just defined a variable of type Supplier.
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

    // Notice we use two dot. The first dot is to access the record of this Product.
    // While the second dot is for accesing the info on Supplier.
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