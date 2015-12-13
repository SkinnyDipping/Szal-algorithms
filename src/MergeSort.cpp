// Copyright Szał Pał 2015
// Licensed under CC-BY-SA

#include <string.h>
#include "MergeSort.h"

void MergeSort::sort(int *tab, int n) {
    sort(tab, 0, n - 1, n);
}

void MergeSort::merge(int *tab, int lo, int mid, int high, int n) {
    int size = high + 1;

    int *aux = new int[n];
    memmove(aux, tab, n * sizeof(int));

    int i = lo, j = mid + 1;
    for (int k = lo; k < size; k++) {
        if (i > mid) tab[k] = aux[j++];
        else if (j > high) tab[k] = aux[i++];
        else if (aux[i] < aux[j]) tab[k] = aux[i++];
        else tab[k] = aux[j++];
    }

    delete[] aux;
}

void MergeSort::sort(int *tab, int lo, int high, int n) {
    if (high <= lo)
        return;
    int mid = (high - lo) / 2 + lo;

    sort(tab, lo, mid, n);
    sort(tab, mid + 1, high, n);
    merge(tab, lo, mid, high, n);
}
