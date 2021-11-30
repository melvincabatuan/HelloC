/** Structure as a way to organize your records
 * 
 * In this case, we showcase how to think in terms of Structure Array
 * Product Number	Quantity	Unit	Description	    Person In-Charge Supplier
 *   PS-001	            1	    box	    Nike Shoes	    John             Cristoff
 *   QS-010	            10	    box	    Alcohol	        Jose             Keith
 *   PU-443	            500	    item	Facemask	    Anthony          Jimwell
 * As demonstrated on our session, you can think of it as if you're writing it in excel
 * Otherwise, let's look at the inventory table we have shown above.
 * If you try to extract a row above, notice that it contains all the information needed to describe a item (which we  will call a record).
 * That record can represented be converted as a structure wherein it would have "product number", "quantity", "unit", "description", "person in-charge"
 *
 * If you've already understood the message above. Then, if you have multiple records then you would want it
 * as an array of this "record".
 *
 * Thus, in stucture array, each element of an array is simply a row in your Excel inventory.
 * 
 * Let's now add a lot of records
 * 
 * Additionally, we showcase on how can pass structure array onto a function
 */

#include <stdio.h>
#include <string.h>

typedef struct
{
    char product_number[256];
    int quantity;
    int price;
    char unit[256];
    char description[256];
    char person[256];
    char supplier[256];
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
    Product products[10];

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

    printf("The Product %s has quantity %d\n", products[0].product_number, products[0].quantity);

    int totalQuantity = calculateTotal(products);
    printf("Total quantity now is %d\n", totalQuantity);

    return 0;
}