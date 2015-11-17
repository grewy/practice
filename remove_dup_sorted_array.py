# your code goes here
 
def remove_dup(n):
	assert isinstance(n, list), "n must be list"
 
	return list(set(n))
 
print remove_dup([1,1,2,2])
