#include <stdio.h>
int a[100]={},k=0;
void combinationUtil(int arr[], int n, int r,int index, int data[], int i);


void printComb(int arr[], int n, int r)
{
	int data[r];
	combinationUtil(arr, n, r, 0, data, 0);
}

/* arr[] ---> Input Array
n	 ---> Size of input array
r	 ---> Size of a combination to be printed
index ---> Current index in data[]
data[] ---> Temporary array to store current combination
i	 ---> index of current element in arr[]	 */
void combinationUtil(int arr[], int n, int r, int index,int data[], int i)
{
	int x=0;
	if (index == r) 
	{
		for (int j = 0; j < r; j++)
		{
			x=x^data[j];
			printf("%d ", data[j]);
		}
		a[k]=r;
		k++;
			
		printf("\n");
		return;
	}

	// When no more elements are there to put in data[]
	if (i >= n)
		return;

	// current is included, put next at next location
	data[index] = arr[i];
	combinationUtil(arr, n, r, index + 1, data, i + 1);

	combinationUtil(arr, n, r, index, data, i + 1);
}
int main()
{
	int arr[] = { 7,8,9 };
	int r,i,y=0;
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Total combinations of the array are:\n");
	for(i=1;i<=n;i++)
	{
		printComb(arr, n, i);
		
	}
	for(i=0;i<=k;i++)
	{
		y=y^a[i];
	}
	printf("total xor value = %d",y);
	
	return 0;
}

