#Program to create a qrcode using python

import qrcode

url = input("Enter url: ")
img = qrcode.make(url)
name = input("Enter name to save qr in :")
img.save(name+'.png')
img.show()
