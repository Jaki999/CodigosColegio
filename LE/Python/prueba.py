from tkinter import *
from tkinter import ttk
root = Tk()
frm = ttk.Frame(root, padding=10)
frm.grid()
ttk.Label(frm, text="Ingrese su Mail").grid(column=0, row=0)
mail=ttk.Entry(root).grid(column=0, row=1)
ttk.Button(frm, text="Quit", command=root.destroy).grid(column=3, row=0)
print (mail)
root.mainloop()