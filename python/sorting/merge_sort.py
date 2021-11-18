def merge_sort(lst: list[int, float]) -> list[int, float]:
    """merge_sort 
    
    Sort a list using the concept of Merge Sort
    
    In merge sort, we split the list recursively into halves and merge
    them in the end

    Args:
        lst (list[int, float]): The list to be sorted

    Returns:
        list[int, float]: The sorted list, in ascending order
    """
    #: int: The length of the base list
    len_lst = len(lst)
    
    # Step 0: If the list is already having a single element, then we 
    # can just return that, as it's already sorted. If it has zero 
    # elements just return the empty list
    if len_lst < 2:
        return lst
    else:
        # Step 1: Split the list into two halves.
        #: int: The half point.
        hp = len_lst//2
        #: list: The first half-list.
        lst_1 = lst[:hp]
        #: list: The second half-list.
        lst_2 = lst[hp:]
        
        # Step 2: get `lst_1` and `lst_2` sorted.
        sorted_1 = merge_sort(lst_1)
        sorted_2 = merge_sort(lst_2)
        
        # Step 3: Merge the lists together.
        # `i` and `j` keep track of the elements sorted in the list 1 
        # and 2 respectively.
        i = j = 0
        
        #: list: The final sorted list
        lst_std = []
        
        ls1, ls2 = len(sorted_1), len(sorted_2)
        t = ls1+ls2
        # Here we ensure that all the elements' sorting has been 
        # completed.
        while len(lst_std)<t:
            if j==ls2:
                lst_std.append(sorted_1[i])
                i+=1
            elif i==ls1:
                lst_std.append(sorted_2[j])
                j+=1
            elif sorted_1[i] < sorted_2[j]:
                lst_std.append(sorted_1[i])
                i+=1
            else: 
                lst_std.append(sorted_2[j])
                j+=1
        
        return lst_std
    
def mergesort(lst: list[int, float]) -> None:
    """mergesort 
    
    Sort a list using the concept of Merge Sort
    Sorting is in place.
    
    In merge sort, we split the list recursively into halves and merge
    them in the end

    Args:
        lst (list[int, float]): The list to be sorted
    """
    lst = merge_sort(lst)