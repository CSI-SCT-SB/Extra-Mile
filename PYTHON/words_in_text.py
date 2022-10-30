# program for finding the number of words in a given file and how many time it occurs
# needs a text file in the directory same as the program or the file path

text = open("sample.txt", "r")
d = {}
for line in text:
    line = line.strip()
    line = line.lower()
    words = line.split(" ")

    for word in words:
        if word in d:
            d[word] = d[word] + 1
        else:
            d[word] = 1

for key in list(d.keys()):
    print(key, ":", d[key])
