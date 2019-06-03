#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool doYouWantToPlayFirst(string question);





int main ()
	{
	char humanPiece;
	char computerPiece;


	doYouWantToPlayFirst("Do you want to take the first move? <y/n>: ");
        // now here the problems lies! ill explain what i tried after the code finishes....
         if (doYouWantToPlayFirst("Do you want to take the first move? <y/n>: ") == true)
		{
		humanPiece = 'X';
                computerPiece = 'O';
		}
          else
                {
                humanPiece = 'O';
                computerPiece = 'X';


	return 0;
	}
	}




bool doYouWantToPlayFirst(string question)
	{
	char first;
	cout << question;

	do
		{
		cin >> first;
		first = toupper(first);
			if ((first != 'Y') && (first != 'N'))
				{
				cout << "\nEnter 'y' for Yes or 'n' for NO! <y/n>: ";
				}
		}while ((first != 'Y') && (first != 'N'));

		if (first == 'Y')
			{
			cout << "\nYou got the first move!\n\n";
			return true;
			}


		if (first == 'N')
			{
			cout << "\nOk, you shall feel the wrath of my AI brain!!\n\n";
			return false;
			}
	}
