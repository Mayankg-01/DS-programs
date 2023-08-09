#include<stdio.h>
#include<stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};

void Display(struct array arr)
{
    int i;
    printf("\n Elements are: \n");
    for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]); 
}

void Append(struct array *arr,int x)
{
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}

void Insert(struct array *arr,int index,int x)
{
      int i;
    if(index>=0 && index<=arr->length)
    {
      for(i=arr->length;i>index;i--)
      arr->A[i]=arr->A[i-1];
      arr->A[index]=x;
      arr->length++;
    }
}

int Delete(struct array *arr,int index)
{
    int x;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
    for(i=index;i<arr->length-1;i++)
    arr->A[i]=arr->A[i+1];
    arr->length--;
    return x;
    }
    return 0;
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int Linearsearch(struct array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);//for move to head A[i-1] k jGh p A[0] ho jaega
            return i;
        }
        
    }
    return -1;
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    //Insert(&arr,9,10);
    //printf("%d\n",Delete(&arr,4));
    printf("%d\n",Linearsearch(&arr,5));
    Display(arr);
return 0;
}