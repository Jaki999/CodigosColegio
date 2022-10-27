from multiprocessing import connection
from sqlite3 import connect
from tkinter import *
from tkinter import ttk
from tkinter import messagebox

user={
    'username': '1',
    'password': '1'
}

def connection():
    if user["password"] == entry_password.get() and user["username"] == entry_username.get():
        correctUser()
    else:
        incorrectUser()

####--------------------------clase para el usuario
"""class user():
    def __init__(self, username, password):
      self.username = username
      self.password = "aaa"

    def connection(self):
        inPassword = entry_pass.get()
        if inPassword == self.password:
            correctPassw
        else:    
            incorrectPassw
"""

####-------------------------popups para commit
def correctUser():
    messagebox.showinfo("","Iniciaste sesion correctamente")
def incorrectUser():
    messagebox.showerror("","Su password o username es incorrecto")


ventana_login = Tk()
ventana_login.title("Login")
ventana_login.geometry("300x500")
ventana_login.config(bg='#5DA7DB')

entry_username = ttk.Entry(ventana_login)
entry_username.pack()
entry_password = ttk.Entry(ventana_login)
entry_password.pack()

accept = ttk.Button(ventana_login, command=connection, text="Commit")
accept.pack()
quit = ttk.Button(ventana_login, command=ventana_login.destroy, text="Quit")
quit.pack()

ventana_login.mainloop()