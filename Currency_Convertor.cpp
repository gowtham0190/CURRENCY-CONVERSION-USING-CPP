
//CURRENCY CONVERSION PROGRAM BY GOWTHAM DAVULURI
#include <iostream>
using namespace std;



int newop;



// Function for operations in Currency Converter

void currency_converter(){

    cout <<"Available options for currency conversion are:" <<endl;

    cout <<"1. Convert to US Dollar\n";

    cout <<"2. Convert to Euro\n";

    cout <<"3. Convert to Japanese Yen\n";
    	
	cout<<"4. Convert to Australian Dollar\n";

	cout<<"5. Convert to English Pound\n";
	
	cout<<"6. Convert to Malaysian Ringgit \n";

    cout << "\n";

    int option;

    cout << "Your option: ";

    cin >> option;

    float inr;



    switch(option)

    {

        // Case for Converting INR to USD(US Dollar)

        case 1:

            cout << "\nEnter the INR amount to convert into USD: ";

            cin >> inr;

            inr *= 0.012;

            cout << "The converted USD amount: " << inr << endl;

            cout << "Do you want to convert to a new currency?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;

            cout << "Your option: ";

            cin >> newop;

            if (newop == 1){

                currency_converter();

            }

        break;

       

        // Case for Converting INR to EUR(Euro)

        case 2:

            cout << "\nEnter the INR amount to convert into EUR: ";

            cin >> inr;

            inr *= 0.011;

            cout << "The converted EUR amount: " << inr << endl;

            cout << "Do you want to convert to a new currency?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;

            cout << "Your option: ";

            cin >> newop;

            if (newop == 1){

                currency_converter();

            }

        break;

       

        // Case for Converting INR to JPY(Japanese Yen)

        case 3:

            cout << "\nEnter the INR amount to convert into JPY: ";

            cin >> inr;

            inr *= 1.75;

            cout << "The converted JPY amount: " << inr << endl;

            cout << "Do you want to convert to a new currency??\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;

            cout << "Your option: ";

            cin >> newop;

            if (newop== 1){

                currency_converter();

            }

        break;
        
        // Case for converting Rupee to Australian Dollar
        case 4:

            cout << "\nEnter the INR amount to convert into Australian Dollar: ";

            cin >> inr;

            inr *= 0.018;

            cout << "The converted Australian Dollar amount: " << inr << endl;

            cout << "Do you want to convert to a new currency?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;

            cout << "Your option: ";

            cin >> newop;

            if (newop == 1){

                currency_converter();

            }

    	break;
           // Case for converting Rupee to English Pound
        case 5:

            cout << "\nEnter the INR amount to convert into English Pound: ";

            cin >> inr;

            inr *= 0.0093;

            cout << "The converted English Pound amount: " << inr << endl;

            cout << "Do you want to convert to a new currency?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;

            cout << "Your option: ";

            cin >> newop;

            if (newop == 1){

                currency_converter();

            }

    	break;
    	 // Case for converting Rupee to Malaysian Ringgit
        case 6:

            cout << "\nEnter the INR amount to convert into Malaysian Ringgit: ";

            cin >> inr;

            inr *= 0.05369;

            cout << "The converted Ringgit amount: " << inr << endl;

            cout << "Do you want to convert to a new currency?\nPress 1 to 'proceed' and 2 to 'exit' from here\n" << endl;

            cout << "Your option: ";

            cin >> newop;

            if (newop == 1){

                currency_converter();

            }

    	break;


    }

}



int main()

{

    currency_converter();

    cout << "Thank you!";

    return 0;

}
