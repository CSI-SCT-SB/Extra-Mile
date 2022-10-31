# An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
# example : "the" and "het" is an anagram 
def isAnagram( word1, word2):
	if (len(word1) != len(word2)): # if length is not same then, "False"
		return False
	countWord1, countWord2 = {},{}  # A initializing a dictionary
	for i in range(len(s)): # iterating through every element
		countWord1[word1[i]] = 1+ countWord1.get(word1[i],0) 
		countWord2[word2[i]] = 1+ countWord2.get(word2[i],0)
		# The dictinary will look like this considering "the" and "het" 
		# countWord1 = {"t":1,"h":1,"e":1}
		# countWord2 = {"h":1,"e":1,"t":1}
		# So, both are same with the keys and values 
	return countWord1 == countWord1 # returning True/False
s = input("Enter first word : ")
t = input("Enter second word : ")
print(isAnagram(s,t))
