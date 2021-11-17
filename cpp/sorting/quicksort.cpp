int quicksort(int *A, int l, int r){
    if (r - l <= 1)){ return 0; }  /* Trivial array, do nothing */

    /* Rearrange with respect to splitter, a[l] */
    b = l+1;
    for (i = l+1; i < r; i++){
    if (A[i] <= A[l]){
        swap(A[b],A[i]);
        b++;
    }
    }
    swap(A[l],A[b-1]);  /* Insert splitter before upper partition */

    /* Recursive calls */
    quicksort(A,l,b-1);
    quicksort(A,b,r);
}