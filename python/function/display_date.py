def display_date(day, month, year=2022):
    print("Day :" + str(day), end=' ')
    print("Month :" + str(month),end=' ')
    print("Year :" + str(year))
    
    
def init():
    display_date(2, 11, 1996)
    display_date(2, 11)
    display_date(month = 12, day = 16, year = 1996)
    
init()