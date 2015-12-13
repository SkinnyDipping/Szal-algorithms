#include <iostream>
#include "MergeSort.h"

using namespace std;

void printArray(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void useMergeSort() {
    int merge_sort[10] = {315, 46, 98, 315, 64, 48, 3516, 64, 9, 1};
    printArray(merge_sort, 10);
    MergeSort::sort(merge_sort, 10);
    printArray(merge_sort, 10);
}

int main() {
    cout << "Hello, World!" << endl;

    useMergeSort();

    return 0;
}