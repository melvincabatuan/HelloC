#include<iostream>

using namespace std;


void tangentialstress()
{
		int choice1,mainmenu;
		float stress,pressure,diameter,thickness;
			
				printf("\nTangential Stress Calculator \n");
				printf("The Formula for Tangential Stress is:\n\n");
				printf("                   s=(p*d)/(2*t)\n");
				printf("Where:                             \n\n");
				printf("s = Tangential Stress in MPa\n");
				printf("p = Internal Pressure in Mpa\n");
				printf("d = Diameter in mm\n");
				printf("t = Thickness in mm\n");
				printf("\n\nWhich variable do you want to solve?: \n");
				printf("1.) s = Tangential Stress\n");
				printf("2.) p = Internal Pressure\n");
				printf("3.) d = Diameter\n");
				printf("4.) t = Thickness\n\n");
				printf("Press 5 to go back to Main Menu\n");
				scanf("%d",&choice1);
			system("cls");
			switch (choice1)
			{
			case 1:
					printf("Calculate for Tangential Stress using the Tangential Stress Formula\n");
					printf("                   s=(p*d)/(2*t)\n");
					printf("Input value for the Internal Pressure in Mpa: ");
					scanf("%f",&pressure);
					printf("Input value for the Diameter in mm: ");
					scanf("%f",&diameter);
					printf("Input value for the thickness: ");
					scanf("%f",&thickness);
					stress=(pressure*diameter)/(2*thickness);
					printf("The Calculated Value for the Tangential Stress is: %.2f\n\n",stress);
			  		mainmenu=0;
					break;
			case 2:
					printf("Calculate for Internal Pressure using the Tangential Stress Formula\n");
					printf("                   s=(pd)/(2t)\n");
					printf("Input value for the Tangential Stress in Mpa: ");
					scanf("%f",&stress);
					printf("Input value for the Diameter in mm: ");
					scanf("%f",&diameter);
					printf("Input value for the thickness: ");
					scanf("%f",&thickness);
					pressure=(stress*2*thickness)/diameter;
					printf("The Calculated Value for the Internal Pressure is: %.2f\n\n",pressure);
					mainmenu=0;
					break;
			case 3:
					printf("Calculate for the Diameter using the Tangential Stress Formula\n");
					printf("                   s=(pd)/(2t)\n");
					printf("Input value for the Tangential Stress in Mpa: ");
					scanf("%f",&stress);
					printf("Input value for the Internal Pressure in Mpa: ");
					scanf("%f",&pressure);
					printf("Input value for the thickness: ");
					scanf("%f",&thickness);
					diameter=(stress*2*thickness)/pressure;
					printf("The Calculated Value for the Diameter is: %.2f\n\n",diameter);
					mainmenu=0;
					break;
			case 4:
					printf("Calculate for Thickness using the Tangential Stress Formula\n");
					printf("                   s=(pd)/(2t)\n");
					printf("Input value for the Tangential Stress in Mpa: ");
					scanf("%f",&stress);
					printf("Input value for the Internal Pressure in Mpa: ");
					scanf("%f",&pressure);
					printf("Input value for the Diameter in mm: ");
					scanf("%f",&diameter);
					thickness=(pressure*diameter)/(2*stress);
					printf("The Calculated Value for the Thickness is: %.2f\n\n",thickness);
					mainmenu=0;
					break;
			case 5:
					mainmenu=1;
					break;
			default:
					printf("Invalid Input!!! Please choose an Input that is VALID!!!\n\n");
			}
}

void enthalpy()
{
		int choice2,mainmenu;
		float enthalpy2,internal,pressure2,volume;
			
				printf("\nEnthalpy Calculator \n");
				printf("The formula in Solving the Enthalpy is:\n\n");
				printf("                   H=U+PV\n");
				printf("Where:                             \n\n");
				printf("H = Enthalpy\n");
				printf("U = Internal Energy of the system \n");
				printf("P = Pressure \n");
				printf("V = Volume of the system\n");
				printf("\n\nWhich variable do you want to solve??: \n");
				printf("1.) H = Enthalpy\n");
				printf("2.) U = Internal Energy of the system\n");
				printf("3.) P = Pressure\n");
				printf("4.) V = Volume of the system\n\n");
				printf("Press 5 to go back to Main Menu\n");
				scanf("%d",&choice2);
			system("cls");
				switch (choice2)
			{
			case 1:
					printf("Solve for the Enthalpy \n");
					printf("                    H=U+PV\n");
					printf("Input the value for internal energy: ");
					scanf("%f",&internal);
					printf("Input the value for pressure: ");
					scanf("%f",&pressure2);
					printf("Input the value for volume: ");
					scanf("%f",&volume);
					enthalpy2=internal+(pressure2*volume);
					printf("The Calculated value for the Enthalpy is: %.2f\n\n",enthalpy2);
					mainmenu=0;
					break;
			case 2:
					printf("Solve for the Internal Energy \n");
					printf("                   H=U+PV\n");
					printf("Input the value for enthalpy: ");
					scanf("%f",&enthalpy2);
					printf("Input the value for pressure: ");
					scanf("%f",&pressure2);
					printf("Input the value for volume: ");
					scanf("%f",&volume);
					internal=enthalpy2-(pressure2*volume);
					printf("The Calculated value for the internal energy is: %.2f\n\n",internal);
					mainmenu=0;
					break;
			case 3:
					printf("Solve for the pressure \n");
					printf("                   H=U+PV\n");
					printf("Input the value for enthalpy: ");
					scanf("%f",&enthalpy2);
					printf("Input the value for internal energy: ");
					scanf("%f",&internal);
					printf("Input the value for volume: ");
					scanf("%f",&volume);
					pressure2=(enthalpy2-internal)/volume;
					printf("The Calculated value for the pressure is: %.2f\n\n",pressure2);
					mainmenu=0;
					break;
			case 4:
					printf("Solve for the volume) \n");
					printf("                   H=U+PV\n");
					printf("Input the value for enthalpy: ");
					scanf("%f",&enthalpy2);
					printf("Input the value for internal energy: ");
					scanf("%f",&internal);
					printf("Input the value for pressure: ");
					scanf("%f",&pressure2);
					volume=(enthalpy2-internal)/pressure2;
					printf("The Calculated value for the volume is: %.2f\n\n",volume);
					mainmenu=0;
					break;
			case 5:
					mainmenu=1;
					break;
			default:
					printf("Invalid Input!!! Please choose an Input that is VALID!!!\n\n");
			}
}

int main()
{

	int choice,mainmenu=1;

	do
	{
		
	printf("===================MAIN MENU======================\n\n");
	printf("Choose your formula:\n\n");
	printf("1.) Tangential Stress\n");
	printf("2.) Enthalpy \n");
	printf("3.) Exit Program\n\n");
	printf("===================================================\n\n");
	
	scanf("%d",&choice);
	
	if(choice==1)
	{
		tangentialstress();
		mainmenu=1;
	}
	else if(choice==2)
	{
		enthalpy();
		mainmenu=1;
	}
	else if(choice==3)
	{
		return 0;
	}
	else
	{
		printf("\n\n Input is Invalid. Please choose a Valid Input\n\n");
	}
	
	}while(mainmenu==1);
	
	return 0;
}
