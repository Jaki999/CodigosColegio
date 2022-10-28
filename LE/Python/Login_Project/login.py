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
displayimg = Label(ventana_login, image=img, bg='#5DA7DB').place(x=50, y=75)

###marcos
frame = Frame(ventana_login, width=350, height=350, bg='#256D85')
frame.place(x=480, y=70)
Frame(frame, width=295, height=2, bg='black').place(x=25, y=107)

###labels
Singin = Label(frame, text="Log In", fg='#256D85', bg='#256D85', font=('Microsoft YaHei UI Light', 20, 'bold')) 
Singin.place(x=135,y=0)

###entrys
entry_username = Entry(frame, width=20, border=0, bg='#256D85', font=('Microsoft YaHei UI Light', 11))
entry_username.place(x=30, y=80)
entry_username.insert(0,'Username')
entry_password = Entry(ventana_login, show='*',)
entry_password.pack()


###botones
accept = Button(ventana_login, command=connection, text="Commit")
accept.pack()
quit = Button(ventana_login, command=ventana_login.destroy, text="Quit")
quit.pack()




ventana_login.mainloop()