from tkinter import *
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
ventana_login.geometry("925x500+350+50")
ventana_login.resizable(False, False)
ventana_login.config(bg='#5DA7DB')

img=PhotoImage(file='LE\Python\Login_Project\Lock.png')
image=Label(ventana_login, image=img, bg='#5DA7DB').place(x=50, y=50)


entry_username = Entry(ventana_login)
entry_username.pack()
entry_password = Entry(ventana_login, show='*',)
entry_password.pack()

accept = Button(ventana_login, command=connection, text="Commit")
accept.pack()
quit = Button(ventana_login, command=ventana_login.destroy, text="Quit")
quit.pack()

ventana_login.mainloop()