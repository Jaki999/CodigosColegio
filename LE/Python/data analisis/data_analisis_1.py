import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np
from IPython.display import display_html
import plotly.express as px

df = pd.read_csv('Resultados_internacionales_rugby.csv')
display_html(df.head())