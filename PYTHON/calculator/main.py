from tkinter import * 
import math
import tkinter.messagebox

window = Tk()
window.title("Scientific Calculator")
#window should not be rezisable
window.resizable(width=False,height=False)

#iconphoto
photo = PhotoImage(file="calacimg.png")
window.iconphoto(False, photo)

e = Entry(window, width=27, borderwidth=4)
e.grid(row=0, column=0, columnspan=4, padx=0, pady=0, ipady=20)

#button fuctions

def button_click(number):
    #e.delete(0, END)
    current_val = e.get()
    e.delete(0, END)
    e.insert(0, str(current_val) + str(number))
    return

def button_clear():
    e.delete(0,END)
    return

def bksp():
    current=e.get()
    e.delete(len(current)-1,END)

def button_add():
    fisrt_number = e.get()
    global f_num
    global maths
    maths = "Addition"
    f_num = float(fisrt_number)
    e.delete(0, END)

def button_equal():
    second_number = e.get()
    e.delete(0, END)

    if maths == "Addition":
        e.insert(0, f_num + float(second_number))
    if maths == "Multiplication":
        e.insert(0, f_num * float(second_number))
    if maths == "Division":
        e.insert(0, f_num / float(second_number))
    if maths == "Substraction":
        e.insert(0, f_num - float(second_number))



def button_substract():
    fisrt_number = e.get()
    global f_num
    global maths
    maths = "Substraction"
    f_num = float(fisrt_number)
    e.delete(0, END)

def button_multiply():
    fisrt_number = e.get()
    global f_num
    global maths
    maths = "Multiplication"
    f_num = float(fisrt_number)
    e.delete(0, END)

def button_divide():
    fisrt_number = e.get()
    global f_num
    global maths
    maths = "Division"
    f_num = float(fisrt_number)
    e.delete(0, END)


switch=True
def sin():
    try:
        ans = float(e.get())
        if switch is True:
            ans = math.sin(math.radians(ans))
        else:
            ans = math.sin(ans)
        e.delete(0, END)
        e.insert(0, str(ans))
    except Exception:
        tkinter.messagebox.showerror("Value Error", "Check your values and operators")

def cos():
    try:
        ans = float(e.get())
        if switch is True:
            ans = math.cos(math.radians(ans))
        else:
            ans = math.cos(ans)
        e.delete(0, END)
        e.insert(0, str(ans))
    except Exception:
        tkinter.messagebox.showerror("Value Error", "Check your values and operators")

def tan():
    try:
        ans = float(e.get())
        if switch is True:
            ans = math.tan(math.radians(ans))
        else:
            ans = math.tan(ans)
        e.delete(0, END)
        e.insert(0, str(ans))
    except Exception:
        tkinter.messagebox.showerror("Value Error", "Check your values and operators")

def arcsin():
    try:
        ans = float(e.get())
        if switch is True:
            ans = math.degrees(math.asin(ans))
        else:
            ans = math.asin(ans)
        e.delete(0, END)
        e.insert(0, str(ans))
    except Exception:
        tkinter.messagebox.showerror("Value Error", "Check your values and limits")

def arccos():
    try:
        ans = float(e.get())
        if switch is True:
            ans = math.degrees(math.acos(ans))
        else:
            ans = math.acos(ans)
        e.delete(0, END)
        e.insert(0, str(ans))
    except Exception:
        tkinter.messagebox.showerror("Value Error", "Check your values and limits")

def arctan():
    try:
        ans = float(e.get())
        if switch is True:
            ans = math.degrees(math.atan(ans))
        else:
            ans = math.atan(ans)
        e.delete(0, END)
        e.insert(0, str(ans))
    except Exception:
        tkinter.messagebox.showerror("Value Error", "Check your values and limits")

def log():
    try:
        ans = float(e.get())
        ans = math.log10(ans)
        e.delete(0, END)
        e.insert(0, str(ans))
    except Exception:
        tkinter.messagebox.showerror("Value Error", "Check your values and operators")



# define buttons

button_1 = Button(window, text="1", padx=20, pady=10, command=lambda: button_click(1))
button_2 = Button(window, text="2", padx=20, pady=10, command=lambda: button_click(2))
button_3 = Button(window, text="3", padx=20, pady=10, command=lambda: button_click(3))

button_4 = Button(window, text="4", padx=20, pady=10, command=lambda: button_click(4))
button_5 = Button(window, text="5", padx=20, pady=10, command=lambda: button_click(5))
button_6 = Button(window, text="6", padx=20, pady=10, command=lambda: button_click(6))

button_7 = Button(window, text="7", padx=20, pady=10, command=lambda: button_click(7))
button_8 = Button(window, text="8", padx=20, pady=10, command=lambda: button_click(8))
button_9 = Button(window, text="9", padx=20, pady=10, command=lambda: button_click(9))

button_0 = Button(window, text="0", padx=19, pady=10, command=lambda: button_click(0))
button_dot = Button(window, text=".", padx=21, pady=10, command=lambda: button_click('.'))
button_equal = Button(window, text="=", padx=19, pady=10, command=button_equal)

button_clear = Button(window, text="CLR", padx=12, pady=10, command=button_clear)
button_divide = Button(window, text="/", padx=20, pady=10, command=button_divide)

button_multiply = Button(window, text="X", padx=19, pady=10, command=button_multiply)

button_substract = Button(window, text="-", padx=20, pady=10, command=button_substract)
button_add = Button(window, text="+", padx=18, pady=10, command=button_add)

button_tan=Button(window, text="tan", padx=14, pady=10,command=tan)
button_cos=Button(window, text="cos", padx=14, pady=10,command=cos)
button_sin=Button(window, text="sin", padx=14, pady=10,command=sin)
button_arcsin=Button(window, text="arcsin", padx=14, pady=10,command=arcsin)
button_arccos=Button(window, text="arccos", padx=14, pady=10,command=arccos)
button_arctan=Button(window, text="arctan", padx=14, pady=10,command=arctan)
button_log=Button(window, text="log", padx=21, pady=10,command=log)




#put buttons on the display

button_clear.grid(row=5, column=2)
button_divide.grid(row=1, column=3)

button_1.grid(row=4, column=0)
button_2.grid(row=4, column=1)
button_3.grid(row=4, column=2)
button_add.grid(row=4, column=3)

button_4.grid(row=3, column=0)
button_5.grid(row=3, column=1)
button_6.grid(row=3, column=2)
button_substract.grid(row=3, column=3)


button_7.grid(row=2, column=0)
button_8.grid(row=2, column=1)
button_9.grid(row=2, column=2)
button_multiply.grid(row=2, column=3)

button_0.grid(row=5, column=1)
button_equal.grid(row=5, column=3)
button_dot.grid(row=5, column=0)

button_tan.grid(row=1,column=0)
button_sin.grid(row=1,column=1)
button_cos.grid(row=1,column=2)
button_arcsin.grid(row=1,column=4)
button_arccos.grid(row=2,column=4)
button_arctan.grid(row=3,column=4)
button_log.grid(row=4, column=4)




window.mainloop()