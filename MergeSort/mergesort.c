#include <stdio.h>

void mergeSort(int a[], int n, int m)
{
    int p;
    if(n < m)
    {
        p = (n + m) / 2;
        mergeSort(a, n, p);
        mergeSort(a, p + 1, m);
        merge(a, n, p, m);
    }
}

void merge(int a[], int p, int q, int r){
    int b[5];   
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;
    while(i <= q && j <= r)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];  
        }
        else
        {
            b[k++] = a[j++];
        }
    }
  
    while(i <= q)
    {
        b[k++] = a[i++];
    }
  
    while(j <= r)
    {
        b[k++] = a[j++];
    }
  
    for(i=r; i >= p; i--)
    {
        a[i] = b[--k]; 
    } 
}

void ImprimirArreglo(int a[], int tam){
    int i;
    for (i=0; i < tam; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
 
int main()
{
    int arr[] = {40, 30, 27, 70, 2};
    int tam = sizeof(arr)/sizeof(arr[0]);
 
    printf("Arreglo: \n");
    ImprimirArreglo(arr, tam);

    mergeSort(arr, 0, tam - 1);
 
    printf("\nArreglo acomodado: \n");
    ImprimirArreglo(arr, tam);
    return 0;
}
