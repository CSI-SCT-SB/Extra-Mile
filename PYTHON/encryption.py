
def encrypt(message):
	message = message
	#All the alphabets are included in this , can be used to find the next 5th charactor
	keys = "abcdefghijklmnopqrstvuwxyzABCDEFGHIJKLMNOPQRTSUVWXYZ"

	# The encrpted message is stored in this variable
	temp =""

	#traverse through all the charactors of the entered message
	for i in message:
			#traverse through all the alphabets to find the matching pair
		for x in keys:

			#if the message has any numbers , then we need to filter it out 
			try:
				int(i)
				temp += i
				continue

			except:
				if i == x:
					pos = keys.index(x)
					temp += keys[pos+5] #this gets the next 5th element 

				if i.isspace():
					temp += '  '
					break
	return temp

if __name__ == "__main__":
	message = input("Enter a message : ")
	enc_mess = encrypt(message)
	print(enc_mess)



