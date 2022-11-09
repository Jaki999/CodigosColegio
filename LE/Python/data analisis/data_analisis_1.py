import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np
from IPython.display import display_html
import plotly.express as px

pd.options.display.max_rows = 9999
pd.options.display.max_info_columns = 9999
df = pd.read_csv('Resultados_internacionales_rugby.csv')

df['ganador']=np.where(df['home_score'] > df['away_score'] , df['home_score'], np.nan)