#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};

void Display(struct array arr)
{
    int i;
    printf("\n Elements are: \n");
    for(i=0;i<arr.length;i++)
    printf("%d",arr.A[i]); 
}
int main()
{
    struct array arr;
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter no of numbers: ");
    scanf("%d",&n);

    printf("Enter all elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr.A[i]);
    arr.length=n;

    Display(arr);
return 0;
}