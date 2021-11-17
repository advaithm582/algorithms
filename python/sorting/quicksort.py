def quicksort(array: list, l: int = 0, r: int = -1) -> None:
    """quicksort 
    
    Sort a given `list` using the Quicksort Algorithm.
    The sorting is in place.
    
    For more information, refer to 
    #. `IARCS Study Material`_
    
    Args:
        array (list): The list to be sorted
        l (int, optional):
            The leftmost value from where sorting has to start.
            Defaults to 0.
        r (int, optional):
            The rightmost value from where sorting has to start.
            This value is an exclusive value, as in the rest of Python.
            If the value given is -1, the length of the list is taken 
            to be the end of the list, inclusive. Note that this is not
            the same as -1 Python Indexing.
            Defaults to -1.
        
    .. _`IARCS Study Material`: https://bit.ly/3qZphib
    """
    # Step -1: Check if r is -1, if so, change it's value
    if r==-1:
        r = len(array)

    # Step 0: Check if the list is already sorted
    if r-l<=1:
        # In this case, the element has 1 or less elements (exclusive),
        # so it is obvious that that portion is already sorted.
        return
    
    # Step 1: Keep track of the pointers
    # The pointers here take the first value as a pivot.
    # Example:
    # In the below example, 1 points to pivot element, 2 to the end of
    # the part lesser than the pivot element (that part starts from 1)
    # and 3 points to the end of the part greater than the pivot 
    # element (that portions starts from pointer 2).
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 75 | 64 | 29 |
    # +----+----+----+----+----+----+
    #  1^ 2^^3
    # while (_3:=_3+1 and _3<len(array)):
    # if array[_3] < array[_1]: # yes.
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 75 | 64 | 29 |
    # +----+----+----+----+----+----+
    #  1^     2^^3
    # _3+=1
    # if array[_3] < array[_1]: # yes.
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 75 | 64 | 29 |
    # +----+----+----+----+----+----+
    #  1^          2^^3
    # _3+=1
    # if array[_3] < array[_1]: # no.
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 75 | 64 | 29 |
    # +----+----+----+----+----+----+
    #  1^           2^   3^
    # _3+=1
    # if array[_3] < array[_1]: # no.
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 75 | 64 | 29 |
    # +----+----+----+----+----+----+
    #  1^           2^        3^
    # _3+=1
    # if array[_3] < array[_1]: # yes.
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 75 | 64 | 29 |
    # +----+----+----+----+----+----+
    #                ^           |
    #                |___________|
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 29 | 64 | 75 |
    # +----+----+----+----+----+----+
    #  1^                2^        3^
    # Now we put the pivot element after 2
    # +----+----+----+----+----+----+
    # | 43 | 32 | 22 | 29 | 64 | 75 |
    # +----+----+----+----+----+----+
    #   |                 ^
    #   |_________________|
    # +----+----+----+----+----+----+
    # | 32 | 22 | 29 | 43 | 64 | 75 |
    # +----+----+----+----+----+----+
    # |--------------|    |---------|
    #   First half         2nd half
    # Now we recursively sort these havles.
    
    p2 = p3 = l+1
    
    while p3<r:
        if array[p3] <= array[l]:
            array[p2], array[p3] = array[p3], array[p2]
            p2 += 1
        p3 += 1
        
    # Moving the Pivot Element
    # We do p2-1 since p2 points to the end of the elements lesser than
    # the pivot element i.e. the first element greater than the pivot 
    # element.
    array[l], array[p2-1] = array[p2-1], array[l]

    quicksort(array, l, p2-1) # everything lesser than the pivot
    quicksort(array, p2, r) # including the pivot everything greater