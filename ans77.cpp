#include<iostream.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float amount, amount2, amount3;
    char transaction_code;

    cout<<"D - Cash Deposit, W - Cash Withdrawal, T - Cash Transfer\n";
    cout<<"\nEnter the transaction code(D, W, T); ";
    cin>>transaction_code;

    if (transaction_code == 'D' || transaction_code =='d')
    {
       cout<<"\nDeposit transaction";
       cout<<"\nEnter amount: ";
       cin>>amount;
       
       cout<<"\nPROCESSING....Please Wait";
       cout<<"\nAmount deposited: "<<amount;
       //system("cls");
       return main();
       
        }
       else
    if (transaction_code == 'W' ||transaction_code =='w')
    {
       cout<<"\nWithdrawal transaction";
       cout<<"\nEnter amount: ";
       cin>>amount2;
      
       abs( amount3 = amount - amount2);
       
       cout<<"\nPROCESSING....Please Wait";
       
       
       
       cout<<"\nAmount withdrawn: "<<amount3;
       
      // system("pause");
       //system("cls");
       
       return main();
        }
       else
    if (transaction_code == 'T' || transaction_code =='t')
    {
       cout<<"\nTransfer transaction";
       cout<<"\nEnter amount: ";
       cin>>amount;
       cout<<"\nPROCESSING....Please Wait";
       cout<<"\nAmount transferred: "<<amount;
       //system("cls");
       return main();
        }
       if (transaction_code == 'E' || transaction_code =='e'){  
        system("pause");
        return 0;
        }
        else {
       cout<<"\nInvalid transaction!!";
       system("cls");
       cout<<"\nPlease enters the correct transaction code: ";
       return main();
}
}
