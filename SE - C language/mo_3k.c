#include<stdio.h>
int main(){
	FILE *hey;
	char p[50];
	fopen=("sha.txt","w");
	fprintf(hey, "%s", "hello_world");
	fclose(hey);
	fopen=("sha.txt","r");
	 while( fgets ( p, 50, hey ) != NULL )
        {
         
            // Print the dataToBeRead
            printf( "%s" , p ) ;
        }
      fclose(hey);  
}
