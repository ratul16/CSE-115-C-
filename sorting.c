#include <stdio.h>
#include <stdlib.h>

#define N 12

int bubble_sort(int a[], int n)
{
    int i,j,t;

    for (i=0; i<n; i++) {
        for (j=0; j<n-1-i; j++) {
            if (a[j]>a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    return 0;
}

int insert_sort(int a[], int n)
{
    int i, j, k;
    int temp;
    for (i=0; i<n; i++){
        if (a[i]>a[i+1]){
            temp = a[i+1];
            a[i+1] = a[i];
            for (j=i-1; j>=0; j--) {
                if (a[j]>temp) a[j+1]=a[j];
                else break;
            }
            a[j+1] = temp;
        }
    }
    return 0;
}

int selection_sort(int a[], int n)
{
    int i,j;
    int k, temp;

    for (i=0; i<n; i++) {
        k = i;
        for (j=i+1; j<n; j++) {
            if (a[j]<a[k]) k = j;
        }
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
    return 0;
}

int main(void)
{
    int i;
    int a[N] = {11, 56, 98, 31, 12, 76, 43, 53, 95, 34, 67, 65};

    bubble_sort_test(a,N);
    //insert_sort(a,N);
    //selection_sort(a,N);

    for (i=0; i<N; i++) printf("%d ", a[i]);

    return 0;
}
