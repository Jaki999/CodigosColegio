from tkinter import *
from tkinter import ttk

from smtplib import SMTP
import smtplib

SMTP.login(self=SMTP, user='berzulolmi@vusra.com', password='')

def sending():
    SMTP.sendmail(self=SMTP, from_addr='berzulolmi@vusra.com', to_addrs=recep_address, msg="hello wrld")
    print("mail sent")

ventana = Tk()
ventana.title("Spam Bee Movie")
ventana.geometry("300x500")

label = ttk.Label(ventana, text="Ingrese email de recepcion")
label.pack()
entrada = ttk.Entry(ventana)
entrada.pack()
recep_address = entrada.get()

send = ttk.Button(ventana, command=lambda: sending(), text="send")
send.pack()

quit = ttk.Button(ventana, command=ventana.destroy, text="Quit")
quit.pack()

ventana.mainloop()





