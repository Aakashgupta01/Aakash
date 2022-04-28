#include <stdio.h>
void CS(int Arr[], int k, int n)
{
    int i, j;
    int B[15], C[100];
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[Arr[j]] = C[Arr[j]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[Arr[j]]] = Arr[j];
        C[Arr[j]] = C[Arr[j]] - 1;
    }
    printf("The Sorted array is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);
}

int main()
{
    int n, k = 0, Arr[15], i;
    printf("Enter the number of input : ");
    scanf("%d", &n);
    printf("\nEnter the elements to be sorted :\n");
    for (i = 0; i<n; i++)
    {
        scanf("%d", &Arr[i]);
        if (Arr[i] > k) {
            k = Arr[i];
        }
    }
    CS(Arr, k, n);
    printf("\n");
    return 0;
}
