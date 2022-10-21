
from tkinter import *
from tkinter import ttk

ventana_login = Tk()
ventana_login.title("Login generico")
ventana_login.geometry("300x500")
ventana_login.config(bg='#5DA7DB')

accept = ttk.Button(ventana_login, command="", text="Commit")
accept.pack()
quit = ttk.Button(ventana_login, command=ventana_login.destroy, text="Quit")
quit.pack()

ventana_login.mainloop()