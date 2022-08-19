from distutils.cmd import Command
from struct import pack
from tkinter import *
from tkinter import ttk

def Imc ():
    peso = entrada3.get()
    altura = entrada4.get()
    Idice = peso*(altura**2)



ventana = Tk()
ventana.geometry("400x300")

ingreso1 = ttk.Label(ventana, text="Ingrese su Mail")
ingreso1.pack()
entrada1 = ttk.Entry(ventana)
entrada1.pack()

ingreso2 = ttk.Label(ventana, text="Ingrese su Nombre")
ingreso2.pack()
entrada2 = ttk.Entry(ventana)
entrada2.pack()

ingreso3 = ttk.Label(ventana, text="Ingrese su Peso")
ingreso3.pack()
entrada3 = ttk.Entry(ventana)
entrada3.pack()

ingreso4 = ttk.Label(ventana, text="Ingrese su Altura")
ingreso4.pack()
entrada4 = ttk.Entry(ventana)
entrada4.pack()

submit = ttk.Button(text="Siguiente", command=lambda: print(Imc()))
submit.pack()
quit = ttk.Button(ventana, command=ventana.destroy, text="Quit")
quit.pack()

ventana.mainloop()