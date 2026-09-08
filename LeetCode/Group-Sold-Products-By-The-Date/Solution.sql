    lists = activities.groupby(['sell_date'], as_index = False)['product'].unique()
    lists['product'] = lists['product'].apply(lambda x: sorted(x))
    counts = activities.groupby(['sell_date'], as_index = False)['product'].nunique()
    return pd.DataFrame({"sell_date": counts['sell_date'], 'num_sold':counts['product'], 'products':lists['product']})```
