def binary_search(element, array, start=0, end=None):
    """binary_search

    Search for an `element` in `array`.
    """
    s = start
    e = end or len(array)
    
    if e-s:
        # If there are any elements between end and start, we can search
        # for something

        #:int: The midpoint of the list 'array'.
        mid = (s+e)//2

        if element == array[mid]:
            # The element to be found is the midpoint of the list, then
            # we just return the index of the midpoint
            return mid
        elif element < array[mid]:
            # As this is a sorted array, we know that the element is in
            # the first half of the array, so we can just search that
            # portion. To do that, we issue a recursive call to the
            # binary_search function.
            return binary_search(element, array, s, mid)
        else:
            # As this is a sorted array, we know that the element is in
            # the second half of the array, so we can just search that
            # portion. To do that, we issue a recursive call to the
            # binary_search function.
            return binary_search(element, array, mid+1, e)
    else:
        # Since there are no elements to search for, that element is not
        # present. So we return -1.
        return -1