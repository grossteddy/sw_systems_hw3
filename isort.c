#include <stdio.h>
#define MaxNum 50

void shift_element(int* arr, int i)
{
    while(i > 0){
    *(arr+i) = *(arr+i-1);
    i --;}
}

void insertion_sort(int* arr , int len)
{
    int i, key, j; 
    for (i = 1; i < len; i++) {  
        key = *(arr+i); 
        for (j = 0; j < i; j++) {
            if(*(arr+j) > key)
            {
                shift_element((arr+j),i-j);
                *(arr+j) = key;
                j=i;
            }
        }    
    } 
}

int main()
{
    int arr[MaxNum]={0};
    int len =0;
    int num = 0;
    while(len < MaxNum)
    {
        if(scanf(" %i", &num) != 1)
        {
            printf("Invalid input, input set to 0\n");
            num = 0;
        }
        *(arr+len) = num;
        len ++;
    }

    insertion_sort(arr,len);

    for(int i = 0; i < MaxNum; i++)
    {
        if(i != (MaxNum-1))
        {
            printf("%i,",*(arr+i));
        }

        else
        {
            printf("%i",*(arr+i));
        }
    
    }

    
    return 0;
}
