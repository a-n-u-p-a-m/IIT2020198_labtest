/*Finding change for an input amount of rupees*/
#include <stdio.h>
int main(void)

{
	int rupees,i,j;
	printf("Enter an amount\n");
	scanf("%d",&rupees);

    int arr[]={2000,500,100,50,20,10,5,2,1};  /*defining array for denomination*/

	for (j = 0; j < 9; j++)
	{
		i=rupees/arr[j];
        printf("%d:\n",arr[j]);
        printf("No. of notes is %d\n",i);

        rupees=rupees-i*arr[j];
	}

    	
}