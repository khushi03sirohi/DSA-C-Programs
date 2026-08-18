#include<stdio.h>
#include<limits.h>

void merge(int a[], int p, int mid, int q)
{
    int L[100], R[100];
    int n1 = mid - p + 1;
    int n2 = q - mid;
    int i, j, k;
    for (i = 0; i < n1; i++) {
        L[i] = a[p + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = a[mid + 1 + j];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    i = 0;
    j = 0;
    for (k = p; k <= q; k++) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
    }
}
