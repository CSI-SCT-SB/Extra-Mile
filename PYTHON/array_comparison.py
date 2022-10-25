def comp(array1, array2):
       
    if array1 is None or array2 is None: 
        return False
       
    # c array 
  
    if (sorted(array1) == sorted([i ** 2 for i in array2])) or (sorted(array2) == sorted([i ** 2 for i in array1])): 
        return True
       
    return False
   
# Driver Code
comp([1,2,3,4], [1,4,9,16])
