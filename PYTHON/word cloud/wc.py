import wordcloud
import numpy as np
import sys
import os
from matplotlib import pyplot as plt

file_contents="Contribution made by ANANDHU S towards CSI"

def calculate_frequencies(file_contents):
    # Here is a list of punctuations and uninteresting words you can use to process your text
    punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
    uninteresting_words = ["the", "a", "to", "if", "is", "it", "of", "and", "or", "an", "as", "i", "me", "my", \
    "we", "our", "ours", "you", "your", "yours", "he", "she", "him", "his", "her", "hers", "its", "they", "them", \
    "their", "what", "which", "who", "whom", "this", "that", "am", "are", "was", "were", "be", "been", "being", \
    "have", "has", "had", "do", "does", "did", "but", "at", "by", "with", "from", "here", "when", "where", "how", \
    "all", "any", "both", "each", "few", "more", "some", "such", "no", "nor", "too", "very", "can", "will", "just"]
    
    # LEARNER CODE START HERE
    for word in file_contents.split():
        for letter in word:
            if letter in punctuations:
                word.replace(letter,"")
            else:
                pass
    dictionary={}
    for words in file_contents.split():
        if words.lower() in uninteresting_words:
            pass
        elif words.isalpha()==False:
            pass
        else:
            if words in dictionary:
                dictionary[words]+=1
            else:
                dictionary[words]=1

    
    #wordcloud
    cloud = wordcloud.WordCloud()
    cloud.generate_from_frequencies(dictionary)
    return cloud.to_array()

myimage = calculate_frequencies(file_contents)
plt.imshow(myimage, interpolation = 'nearest')
plt.axis('off')
plt.show()