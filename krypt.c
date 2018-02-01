//File incryption

#include <stdio.h>
#include <stdlib.h>

#define KRYPT (int ) Byte +21
#define DEKRYPT (int) Byte -21

int Krypton(char * FILENAME, char * NEW_FILENAME )
{
	FILE *fileIn;
	FILE *fileOut;

	char Byte;
	char newByte
	int n;

	printf("oklm");
	int i =0;
	
	fileIn  = fopen(FILENAME, "rb");
	fileOut = fopen(NEW_FILENAME, "w");

	if(fileIn==NULL)
			printf("Enter a good format file");	
	if(fileOut==NULL)
		{	print("Filecan't be open");
	
	return 1;
	}
	else
	 {

			printf("Encryption started");
			while(1)
			{
				print("...");

				if(Byte!=EOF)
				{
					Byte=fgetc(fileIn);
					newByte=Byte+21;
					
					fputc(newByte, outFile);
				}			
			}
			
			else
			{
					break;
			}

		}
	fclose(fileIn);
	fclose(fileOut);

	}
}

int DeKrypton(char * FILENAME, char * NEW_FILENAME )
{
        FILE *fileIn;
        FILE *fileOut;

        char Byte;
        char newByte
        int n;

        printf("oklm");
        int i =0;

        fileIn  = fopen(FILENAME, "rb");
        fileOut = fopen(NEW_FILENAME, "w");

        if(fileIn==NULL)
                        printf("Enter a good format file");
        if(fileOut==NULL)
                {       print("Filecan't be open");

        return 1;
        }else{

                        printf("Encryption started");
                        while(1)
                        {
                                print("..");

                                if(Byte!=EOF)
                                {
                                        Byte=fgetc(fileIn);
                                        newByte=Byte-21;

                                        fputc(newByte, outFile);
                                
                        }

                        else
                        {
                                        break;
                        }

                }
        fclose(fileIn);
        fclose(fileOut);

	}
}

int main() 

{
		char krypFile[200];
		char newKrypFile[200];
		char Dekryp[200];
		char newDekrypFile[200];

		int choice;
		printf("You can onmly Dekrypt the extesion file");

		printf("Type 1 to encrypt and 2 to decrypt")
		scanf("%d", &choice);

		switch(choice)
		{
		case 1: 
			printf("Enter the Source Filename:  "); 		 		 		 scanf("%s",&krypFile); 		 		 		 printf("Enter your  Destination Filename:   "); 		 		 		 scanf("%s",&newKrypFile); 		 		 		 Kypton(krypFile, newKrypFile);

			break;	
	
		case 2: 
			printf("Enter the Source Filename:  "); 		 		 		 scanf("%s",&deKrypFile); 		 		 		 printf("Enter the Destination Filename:   "); 		 		 		 scanf("%s",&newDekrypFile); 		 		 		 Dekrypton(krypFile, newDekrypFile);
			
			break;

		}
	
		return 0;

}	
	
	

