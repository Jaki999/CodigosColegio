import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np
from IPython.display import display_html
import plotly.express as px
from tkinter import *

Root = Tk()

def aaa():
    df = pd.read_csv('Resultados_internacionales_rugby.csv')
    print(df)

Label1 = Label(Root, text=aaa)
Label1.pack()
Root.mainloop()