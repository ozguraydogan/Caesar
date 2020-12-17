#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>  //atoi
    int main(int argc,string argv[])
        {
            if(argc !=2)
                {
                    return 1;
                }
            string plain =get_string("plaintext: "); // metin girişi.
            int key = atoi(argv[1]);
            
            string result="";
        printf("ciphertext: ");

        for(int i = 0; i < strlen(plain);i++)
            {
                int a = (int)plain[i];
                if ( 64 < a && a < 91 ) 
                    {
			            a += key %26;
			            if (a > 90) 
                            {
                                a = 64 + (a - 90);
			                }
		            }
		        else if (96 < a && a < 123)
                    {
			            a += key %26;
			            if (a > 122) 
                            {
				                a = 96 + (a - 122);
			                }
		            }
                    result += (char)a;
                    printf("%c",a);        
                    
                }
            
            printf("\n");

        }
