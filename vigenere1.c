#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>



void choose_option(void)
{


		printf("##### Please Enter OPTION to Encrypt or Decrypt ###");
		printf("\n");
		printf("\n");
		printf("*****  1. Encrypt            2. Decrypt       *****");
		printf("\n");
		printf("\n");
		printf("###### ******* ###### ***** ###### ***** ##########");
		printf("\n");
		printf("\n");

}







int main(int argc, char* argv[])

{

	printf("\n");

	choose_option();
	printf("\n");



	int option = get_int("Enter option: ");
	printf("\n");

	


	if(argc != 2)
	{
		printf("Usage: ./vigenere key\n");
		return 1;

	}

	for (int i = 0; i < strlen(argv[1]); i++)
	{
		if(!isalpha(argv[1][i]))
		{
			printf("key must only contain alphabetic characters.\n");
			return 1;

		}

		   //choose_option(option)

	}

	//choose_option(option);





	
    if(option == 1)
    {

    


	string plaitext = get_string("Plaintext: ");
	printf("Ciphertext: ");

	int j = strlen(argv[1]);
	int k = 0;

	for(int i = 0; i < strlen(plaitext); i++)
	{

	  char c = plaitext[i];

	  if(isalpha(c))
	  {

	  	  int shift = toupper(argv[1][k]) - 65;

	  	  if(isupper(c))
	  	  {	
	  

	   	       c = (c - 65 + shift) % 26 + 65; 
	   	  }            

	   
	      else
	       {

	   	     c = (c - 97 + shift) % 26 + 97;

	       }

	       printf("%c", c);

	       k = ( k + 1 ) % j;
	    } 

	    else
	    {
	    	printf("%c", c);
	    }
    }

    printf("\n");
    return 0;

 }

 else if(option == 2)
 {


 	string plaitext = get_string("Ciphertext: ");
	printf("Plaintext: ");

	int j = strlen(argv[1]);
	int k = 0;

	for(int i = 0; i < strlen(plaitext); i++)
	{

	  char c = plaitext[i];

	  if(isalpha(c))
	  {

	  	  int shift = toupper(argv[1][k]) - 65;

	  	  if(isupper(c))
	  	  {	
	  

	   	       c = (c - shift - 65 + 26) % 26 + 65; 
	   	  }            

	   
	      else
	       {

	   	     c = (c - shift - 97 + 26) % 26 + 97;
	   	   } 

	       printf("%c", c);

	       k = ( k + 1 ) % j;
	    } 

	    else
	    {
	    	printf("%c", c);
	    }
    }

    printf("\n");
    return 0;



 }
 else
 {
 	printf("Invalid option!!");
 	return 0;

 }


}