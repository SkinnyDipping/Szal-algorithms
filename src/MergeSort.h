//
// Created by michal on 13.12.15.
//

#ifndef MERGESORT_MERGESORT_H
#define MERGESORT_MERGESORT_H

class MergeSort {

public:

    /**
     * Sort array using merge sort
     * @param tab array
     * @param n size of array
     */
    static void sort(int *tab, int n);

public:

    /**
     * Merge two sorted subarrays. Indices are as follows:
     * _ _ _ _ _ | _ _ _ _ _
     * ^lo     ^mid        ^high
     *
     * @return pointer to merged array
     */
    static void merge(int *tab, int lo, int mid, int high, int n);

    /**
     * Helper function to invoke recursive sorting
     */
    static void sort(int *tab, int lo, int high, int n);

};


#endif //MERGESORT_MERGESORT_H
