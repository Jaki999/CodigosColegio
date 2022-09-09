from tkinter import *
from tkinter import ttk
import smtplib

ventana = Tk()
ventana.title("Spam Bee Movie")
ventana.geometry("300x500")

label = ttk.Label(ventana, text="Ingrese de recepcion")
label.pack()
entrada = ttk.Entry(ventana)
entrada.pack()
entrada.get()

quit = ttk.Button(ventana, command=ventana.destroy, text="Quit")
quit.pack()

ventana.mainloop()