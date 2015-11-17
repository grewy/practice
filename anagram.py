from itertools import permutations
 
def isPermutation(str1, str2):
	a = [''.join(i) for i in [i for i in permutations(str1)] ]
	if str2 in a:
		return True
	return False
 
 
print isPermutation('dog', 'god')
