#include<iostream>
#include<windows.h>
#include<fstream>
 
// Color codes

#define GREEN "\033[32m"
#define WHITE "\033[37m"
#define BLUE "\033[34m"
#define RED "\033[31m"

using namespace std;

// Struct builtin Data type it is use to store different data type in same variable
 
struct product
{
	string prod_Name;
	int    prod_Id, prod_Cost, prod_Quantity, total_Price;
};

// Array (Derived data type)

product arr[100];

// Global variable Declaring and Defining

int total = 0, bill = 0,turn=0;
float balance;
// Functions prototypes for admin

void add();
void show();
void search();
void update();
void deleteProduct();

// Function prototype for user

void search_By_Name();
void select();
void buy();
void cancel();

// Function Prototypes for users

void adminSection();
void UserSection();

// Sub program prototypes
void userWel_Screen();

// Functions

int main() {
// My Management System

	cout << GREEN;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout << "@                              E-COMMERCE MANAGEMENT SYSTEM                           @"<<endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout << WHITE;

// Options

	cout << "\n1-Admin Section:"<<endl;
	cout << "\n2-User Section:"<<endl;

// Variable Declaration

	int choice;

// Prompt line

	cout << "\nEnter 1 for Admin Section or 2 for User Section :";
	cin >> choice;
	
// loop for loading

	cout << "Your request is under process.Please wait";
	
	for (int i = 0;i < 5;i++)
	{
		cout << ".";
		Sleep(500);
	}
	

// Page 2

// If -else condition

	if (choice == 1)
	{
		adminSection();

	}
	else if (choice == 2)
	{
		UserSection();
	}

	return 0;
}


// User Function Section 

void adminSection()
{    // Page no.2

	system("cls");       // Clearing screen for next page

	/* Admin have key to login which is:
	   Name:Anas
	   Password:1234*/

	   // Login Section

	cout << RED;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@                                 ADMIN LOGIN-SECTION                                 @" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << WHITE;

	// Variable Declaration

	string name;
	int password, i = 0;
	char choice;

	// Prompt line

	cout << "Enter Your Name:" << endl;
	cin >> name;
	cout << "Enter Your Password:" << endl;
	cin >> password;

	// Loop execute until admin user enter correct User name and Password

	while ((name != "Anas" || password != 1234))
	{                                                                    
		cout << "Invalid username and password" << endl;
		cout << "\nEnter Your Name:" << endl;
		cin >> name;
		cout << "Enter Your Password:" << endl;
		cin >> password;
	}

	// While loop for accessing home page

	while (1) {

		// Condition check the entry of validity of Data

		if (name == "Anas" && password == 1234)
		{
			system("cls");
			cout << GREEN;
			cout << "***************************************************************************************" << endl;
			cout << "*                                                                                     *" << endl;
			cout << "*                              E-COMMERCE MANAGEMENT SYSTEM                           *" << endl;
			cout << "*                                                                                     *" << endl;
			cout << "***************************************************************************************" << endl;
			cout << WHITE;

			// Functionality of Admin

			cout << "\n\n1-Add to cart" << endl;
			cout << "2-Show products" << endl;
			cout << "3-search by ID" << endl;
			cout << "4-Update product" << endl;
			cout << "5-Delete product" << endl;
			cout << "6-Exit" << endl;

			// Prompt line 

			cout << "Select your choice :" << endl;
			cin >> choice;

			// Switch Structure

			switch (choice)                                // Function Calling 
			{
				case '1':
				{
					add();                                 // Calling for Adding the product
					break;
				}

				case'2':
				{
					show();                                 // Calling for showing the products
					break;
				}
				case'3':
				{
					search();                               // For searching the product
					break;
				}
				case'4':
				{
					update();                                // For updating the product
					break;
				}
				case'5':
				{
					deleteProduct();                        // For deleting the product
					break;
				}
				case'6':
				{
					system("cls");                           // For accessing entry page
					main();
					break;
				}
			}
		}

	}                                                        // Delimeter for while loop
}
void UserSection()
{
	system("cls");   // For clearing the screen

	// Welcome screen for User

	cout << BLUE;
	cout << "##################################################################\n";
	cout << "#             REGISTERATION - SECTION                            #\n";  // Registeration section
	cout << "##################################################################\n";
	cout << WHITE;

	// Variable Declaration

	string name, name1;
	int password, password1;
	char choice;

	// Prompt line

	cout << "Please enter your name : " << endl;
	cin >> name;
	cout << "Please enter Password : " << endl;
	cin >> password;

	system("cls");     // Clearing Screen

	// For user login section

	cout << RED;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@                                 USER LOGIN-SECTION                                  @" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << WHITE;

	// Prompt line

	cout << "Enter your name :" << endl;
	cin >> name1;
	cout << "Please enter Password : " << endl;
	cin >> password1;

	// loop terminate when user enter correct Username and password 

	while (name != name1 ||  password != password1)
	{
		cout << "Invalid username and Password " << endl;
		cout << "\nEnter your name :" << endl;
		cin >> name1;
		cout << "Please enter Password : " << endl;
		cin >> password1;
	}

	// Loop for accessing home page

	while (1) {
		if (name == name1 && password == password1)
		{
			system("cls");   // For clearing the screen

			// Store Welcome screen

			cout << GREEN;
			cout << "***************************************************************************************" << endl;
			cout << "*                                                                                     *" << endl;
			cout << "*                              E-COMMERCE MANAGEMENT SYSTEM                           *" << endl;
			cout << "*                                                                                     *" << endl;
			cout << "***************************************************************************************" << endl;
			cout << WHITE;

			// Functionality of User

			cout << "1-Show products" << endl;
			cout << "2-Search by name" << endl;
			cout << "3-Select product" << endl;
			cout << "4-Buy product" << endl;
			cout << "5-Cancel product" << endl;
			cout << "6-Exit" << endl;


			// Prompt line 

			cout << "Select your choice :" << endl;
			cin >> choice;

			// Switch Structure

			switch (choice)                                // Function Calling 
			{
				case '1':
				{
					show();                                 // Calling for Adding the product
					break;
				}
				case'2':
				{
					search_By_Name();                       // Entering to find the product
					break;
				}
				case'3':
				{
					select();                              // Selection of the product
					break;
				}
				case'4':
				{
					buy();                                  // Function for buying the product
					break;
				}
				case'5':
				{
					cancel();                               // Function for canceling the Product
					break;
				}
				case'6':
				{
					system("cls");                          // Calling for accessing starting page
					main();
					break;
				}
			}
		}
	}
}

// Definition for Admin functionalities

void add()
{  
	system("cls");         // Clearing screen

// Product adding screen

	cout << BLUE;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "+                       PRODUCT ADDING SECTION                                +" << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << WHITE;

// Variable  declaration

	int choice;
	fstream newFile;   // Variable declaring for storing in txt file

// Prompt line

	cout << "How much products you want to add :" << endl;
	cin >> choice;

// loop (for entering data)

	for (int i = 0;i < total + choice;i++)
	{
		cout << "Enter  name of the product : "<<endl;                        // Add product name 
		cin >> arr[i].prod_Name;                                   
		arr[i].prod_Id=i+1;
		cout << "Id of the product is :"<<endl<< arr[i].prod_Id << endl;      // Id automatically add
		cout << "Enter price of the product : " << endl;
		cin >> arr[i].prod_Cost;                                               // Enter price
		cout << "Enter quantity  of the product :" << endl;
		cin >> arr[i].prod_Quantity;                                           // Enter quantities
		arr[i].total_Price =arr[i].prod_Cost*arr[i].prod_Quantity;            // Calculating total price
		cout << "Enter total_Price of the product :"<<endl<< arr[i].total_Price << endl<<endl<<endl<<endl;

		// Storing data in txt file so that the user can buy products by just extracting data from the file if user admin not entered the products 
		newFile.open("newFile.txt", ios::app);
		newFile << arr[i].prod_Name << endl;
		newFile << arr[i].prod_Id << endl;
		newFile << arr[i].prod_Cost << endl;
		newFile << arr[i].prod_Quantity << endl;
		newFile << arr[i].total_Price << endl << endl << endl;
		newFile.close();
	}
	Sleep(2000);                                                // For waiting 
	total = total + choice;                                     // Updating total so we can achieve product data
}
void show()
{
	// Condition which show data is present or not 

	if (total != 0)
	{
		system("cls");              // Screen clear

		// Welcome screen for Product showing 

		cout << GREEN;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "@                                PRODUCTS  SECTION                                    @" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << WHITE;

		cout << "\nHere are all products :\n" << endl;     

		// For loop for printing all product

		for (int i = 0;i < total;i++)
		{
			cout << "Product " << i + 1 << endl;
			cout << "Product name  : " << arr[i].prod_Name << endl;
			cout << "Product Id  : " << arr[i].prod_Id << endl;
			cout << "Product price  : " << arr[i].prod_Cost << endl;
			cout << "Product quantity  : " << arr[i].prod_Quantity << endl;
			cout << "Products total cost : " << arr[i].total_Price << endl << endl;
			
		}

		// This section is for continuing 

		char choice;
		cout << "Press any key to continue :"<<endl;
		cin >> choice;
	}
	else
	{
		cout << "\nNo record yet to show " << endl;      // If total =0 than no product found
		Sleep(2000);                                 // For delaying 
	}
}
void search(){
	if (total != 0)
	{

	system("cls");      // Screen clear

// Welcome section for search

	cout << GREEN;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@                                SEARCHING SECTION                                    @" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << WHITE;

// variable declaration

	int ID;

// Prompt line

	cout << "Enter  id of the product :";
	cin >> ID;

// For loop  for searching for item

	for (int i = 0;i < total;i++)
	{
		if (ID == arr[i].prod_Id)
		{
			cout << "Product name  : " << arr[i].prod_Name << endl;
			cout << "Product Id  : " << arr[i].prod_Id << endl;
			cout << "Product price  : " << arr[i].prod_Cost << endl;
			cout << "Product quantity  : " << arr[i].prod_Quantity << endl;
			cout << "Products total cost : " << arr[i].total_Price << endl << endl<<endl;
			break;             // It reduce time for  other item checking
		}
	}

	// The is for continuing 

		char choice;
		cout << "Press any key to continue .....";
		cin >> choice;
	}
	else
	{
		cout << "\nNo record yet to search " << endl;
		Sleep(2000);
	}
}
void update()
{  
	// Condition for checking..Is there any product found for  updation 

	if (total != 0)
	{
	
	system("cls");   // Screen clear

	// Welcome section for search

	cout << GREEN;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@                                 UPDATING SECTION                                    @" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << WHITE;

	// variable declaration

	int ID;

	// Prompt line

	cout << "Enter ID of the product :";
	cin >> ID;

	// For loop 

	for (int i = 0;i < total;i++)
	{
		if (ID == arr[i].prod_Id)
		{
			cout << "Product name  : " << arr[i].prod_Name << endl;
			cout << "Product Id  : " << arr[i].prod_Id << endl;
			cout << "Product price  : " << arr[i].prod_Cost << endl;
			cout << "Product quantity  : " << arr[i].prod_Quantity << endl;
			cout << "Products total cost : " << arr[i].total_Price << endl << endl << endl;

		// Updating product

			cout << "Enter  name of the product : " << endl;            // Add product name 
			cin >> arr[i].prod_Name;
			arr[i].prod_Id = i + 1;
			cout << "Id of the product is :" << endl << arr[i].prod_Id << endl;  // Same as adding section
			cout << "Enter price of the product : " << endl;
			cin >> arr[i].prod_Cost;
			cout << "Enter quantity  of the product :" << endl;
			cin >> arr[i].prod_Quantity;
			arr[i].total_Price = arr[i].prod_Cost * arr[i].prod_Quantity; // Calculating total price
			cout << "Enter total_Price of the product :" << endl << arr[i].total_Price << endl << endl << endl << endl;
		}
	}

	// This section for  continue 

	char choice;

	// Prompt line

	cout << "Press any key to continue .....";
	cin >> choice;
	}
	else
	{
		cout << "\nNo record yet to update " << endl;  // show no product is for update
		Sleep(2000);    // show no product is for update
	}
}
void deleteProduct()
{  
	// Condition check whether there are products for deleting

	if(total!=0)
    { 
	system("cls"); // Screen clear

	// Welcome section for search

	cout << RED;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@                                 DELETING - SECTION                                  @" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << WHITE;

	// Prompt line 

	cout << "\n 1-Delete specific ID :" << endl;
	cout << " 2-Delete whole Data :" << endl;

	// Variable declaring

	char choice;

	// Prompt line

	cout << "Enter your choice :" << endl;
	cin >> choice;

	// Condition checking whether the user want to delete whole date or single item

	if (choice=='1')
	{
		system("cls");        // Clearing screen

		// Welcome section for search

		cout << BLUE;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "@                               DELETING SECTION                                      @" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << WHITE;

		// variable declaration

		int ID;

		// Prompt line

		cout << "Enter ID of the product :"<<endl;
		cin >> ID;

		// For loop 

		for (int i = 0;i < total;i++)                        // loop for i
		{
			if (ID == arr[i].prod_Id)                     // Condition for product enter by user 
			{
				for(int j=i;j<total;j++)                    // Nested for loop
				{
					arr[i].prod_Name = arr[j + 1].prod_Name;               
					arr[i].prod_Id = arr[j + 1].prod_Id;
					arr[i].prod_Cost = arr[j + 1].prod_Cost;
					arr[i].prod_Quantity = arr[j + 1].prod_Quantity;
					arr[i].total_Price = arr[j + 1].total_Price;
					total = total - 1;;
				}
			}
			
		}

		// For continuing 

		char choice;
		cout << "Press any key to continue .....";
		cin >> choice;
	}
	else if (choice=='2')
	{
		cout << "All products are deleting...." << endl;
		Sleep(2000);

		total = 0;             // Know total product are 0.

		// For continuing

		char choice;
		cout << "Press any key to continue .....";
		cin >> choice;
	}
}
else
{
	cout << "\nNo record yet to delete " << endl;     // show no product is for update
	Sleep(2000);              // show no product is for update
}
}

// Definition for user functionalities

void search_By_Name()
{
	if (total != 0)
	{

		system("cls");      // Screen clear

		// Welcome section for search

		cout << GREEN;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "@                                SEARCHING SECTION                                    @" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << WHITE;

		// variable declaration

		string name;

		// Prompt line

		cout << "Enter name of the product :";
		cin >> name ;

		// For loop  for searching for item

		for (int i = 0;i < total;i++)
		{
			if (name == arr[i].prod_Name)
			{
				cout << "Product name  : " << arr[i].prod_Name << endl;
				cout << "Product Id  : " << arr[i].prod_Id << endl;
				cout << "Product price  : " << arr[i].prod_Cost << endl;
				cout << "Product quantity  : " << arr[i].prod_Quantity << endl;
				cout << "Products total cost : " << arr[i].total_Price << endl << endl << endl;
				break;             // It reduce time for  other item checking
			}
		}

		// The is for continuing 

		char choice;
		cout << "Press any key to continue .....";
		cin >> choice;
	}
	else
	{
		cout << "\nNo record yet to search " << endl;
		Sleep(2000);
	}
	
}
void select()
{   
	if (total!=0)
	{
	start:                                  // goto jumps the execution to this point 
		system("cls");  // for clearing screen

		// Calling fuction

		show();

		// variable declaration

		int ID, count = 0;
		char choice;

		// Prompt line

		cout << "\nEnter  id of the product :";
		cin >> ID;

		// For loop  for searching for item

		for (int i = 0;i < total;i++)
		{
			if (ID == arr[i].prod_Id)
			{
				cout << "Product name  : " << arr[i].prod_Name << endl;
				cout << "Product Id  : " << arr[i].prod_Id << endl;
				cout << "Product price  : " << arr[i].prod_Cost << endl;
				cout << "Product quantity  : " << arr[i].prod_Quantity << endl;
				cout << "Products total cost : " << arr[i].total_Price << endl << endl << endl;
				count++;           // It is for the value of I
				break;             // It reduce time for  other item checking
			}
		}
		// For recipt

		turn = count;

		// Adding amount of the product to Bill

		bill = bill + arr[count].prod_Cost;

		// Prompt for continuing shopping or not 

		cout << "If you want to continue shopping...Press 'y' If not ...Press 'n'";
		cin >> choice;

		// for ending decision

		if (choice == 'y')
		{
			goto start;              // Builtin function for jumping
		}
		else if (choice == 'n')
		{
			userWel_Screen();       // I have made this function because I want segment from the user
		}
	}
	else
	{
		cout << "\nNo record yet to update " << endl;  // show no product is for update
		Sleep(2000);    // show no product is for update
	}
}
void buy()
{
	if (total != 0)
	{
	system("cls");  //clear screen
	 
	// Transaction section
	cout << RED;
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	cout << "$$$                    TRANSACTION CENTER                        $$$\n";
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	cout << WHITE;
	// variable declaration

	long long bankAccount, password;
	

	// Prompt you account number 

	cout << "Enter your account number : " << endl;
	cin >> bankAccount;
	cout << "Enter your password : " << endl;
	cin >> password;
	cout << "\nEnter your Account balance :" << endl;
	cin >> balance;

	// Logic 

	if(balance >= bill)
	{
		
		cout << "Congratulation ..!!!Your order is confirmed \n Contact us if any query" << endl;

		balance = balance - bill; //Updating
		system("cls");     // Screen clear

		// Print recipt
		cout << GREEN;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%                          RECIPT                       %%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%";cout << "         Product Quantity :  " << turn<<"                         %%%"<<endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%";cout << "         Your bill        :  " << bill << "                         %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%";cout << "         Your balance is  :  " << balance << "                         %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%             THANKS FOR SHOPPING                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%  o YOUR ORDER IS ON THE WAY YOU WILL SOON RECEIVE IT  %%%" << endl;
		cout << "%%%  o CONTACT US IT ANY QUERY                            %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%                                                       %%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		    
		// This section is for continuing 

		char choice;
		cout << "Press any key to continue :" << endl;
		cin >> choice;

		/*cout << "Your remaining balance is : " << balance;*/
	}
	else
	{
		cout << "You have unsufficient balance of continue " << endl;
		Sleep(2000);
	}
	}
	else
	{
		cout << "\nNo record yet to update " << endl;  // show no product is for update
		Sleep(2000);    // show no product is for update
	}
}
void cancel() {
	if (total != 0)
	{
		system("cls");  //clear screen

		// Cancelation section
		cout << BLUE;
		cout << "--------------------------------------------------------------------\n";
		cout << "$$$                    TRANSACTION CENTER                        $$$\n";
		cout << "--------------------------------------------------------------------\n";
		cout << WHITE;

		// Adding wait(loading)

		cout << "Your request is under process.Please wait";

		for (int i = 0;i < 5;i++)
		{
			cout << ".";
			Sleep(500);
		}
		cout << "Your order is canceled !!!!......" << endl;
		total = 0;

		// This section is for continuing 

		char choice;
		cout << "Press any key to continue :" << endl;
		cin >> choice;
	}
	else
	{
		cout << "\nNo record yet to update " << endl;  // show no product is for update
		Sleep(2000);    // show no product is for update
	}
}
// Sub Programs

void userWel_Screen()
{

	// Variable Declaration

	char choice;

	// Loop for accessing home page
		
			system("cls");   // For clearing the screen

			// Store Welcome screen

			cout << GREEN;
			cout << "***************************************************************************************" << endl;
			cout << "*                                                                                     *" << endl;
			cout << "*                              E-COMMERCE MANAGEMENT SYSTEM                           *" << endl;
			cout << "*                                                                                     *" << endl;
			cout << "***************************************************************************************" << endl;
			cout << WHITE;

			// Functionality of User

			cout << "1-Show products" << endl;
			cout << "2-Search by name" << endl;
			cout << "3-Select product" << endl;
			cout << "4-Buy product" << endl;
			cout << "5-Cancel product" << endl;
			cout << "6-Exit" << endl;


			// Prompt line 

			cout << "Select your choice :" << endl;
			cin >> choice;

			// Switch Structure

			switch (choice)                                // Function Calling 
			{
				case '1':
				{
					show();                                 // Calling for Adding the product
					break;
				}
				case'2':
				{
					search_By_Name();                       // Entering to find the product
					break;
				}
				case'3':
				{
					select();                              // Selection of the product
					break;
				}
				case'4':
				{
					buy();                                  // Function for buying the product
					break;
				}
				case'5':
				{
					cancel();                               // Function for canceling the Product
					break;
				}
				case'6':
				{
					system("cls");                          // Calling for accessing starting page
					main();
					break;
				}
			}
}




