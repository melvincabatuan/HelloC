/** Structure as a way to organize your records
 * 
 * In this case, we showcase how to think in terms of Structure Array
 * Product Number	Quantity	Unit	Description	    Person In-Charge
 *   PS-001	            1	    box	    Nike Shoes	    John
 *   QS-010	            10	    box	    Alcohol	        Jose
 *   PU-443	            500	    item	Facemask	    Anthony
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
 */
#include <stdio.h>
#include <string.h>

//Think of it as a way for you to organize your record in excel
struct Product
{
    char product_number[256];
    int quantity;
    int price;
    char unit[256];
    char description[256];
    char person[256];
    char supplier[256];
};

int main(void)
{
    struct Product products[10];
    strcpy(products[0].product_number, "PS-001"); //strcpy means string copy. Store a string directly to char array
    products[0].quantity = 250;

    printf("The Product %s has quantity %d\n", products[0].product_number, products[0].quantity);

    return 0;
}