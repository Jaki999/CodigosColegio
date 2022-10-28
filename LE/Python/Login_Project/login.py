from cProfile import label
from sys import displayhook
from tkinter import *
from tkinter import messagebox
from PIL import ImageTk,Image

###usuario
user={
    'username': '1',
    'password': '1'
}

###funcion para conectar
def connection():
    if user["password"] == entry_password.get() and user["username"] == entry_username.get():
        correctUser()
    else:
        incorrectUser()

####popups para commit
def correctUser():
    messagebox.showinfo("","Iniciaste sesion correctamente")
def incorrectUser():
    messagebox.showerror("","Su password o username es incorrecto")

###ventana main
ventana_login = Tk()
ventana_login.title("Login")
ventana_login.geometry("925x500+350+50")
ventana_login.resizable(False, False)
ventana_login.config(bg='#5DA7DB')

###imagen
img = ImageTk.PhotoImage(Image.open("LE\Python\Login_Project\candado_3_300x300.png"))
displayimg = Label(ventana_login, image=img, bg='White').place(x=50, y=75)

###entrys
entry_username = Entry(ventana_login)
entry_username.pack()
entry_password = Entry(ventana_login, show='*',)
entry_password.pack()


###botones
accept = Button(ventana_login, command=connection, text="Commit")
accept.pack()
quit = Button(ventana_login, command=ventana_login.destroy, text="Quit")
quit.pack()



ventana_login.mainloop()