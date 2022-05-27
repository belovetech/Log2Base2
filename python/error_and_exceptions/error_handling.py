try:
    5 / 0
except NameError as err:
    print("Name Error: ", err)
except TypeError as err:
    print("Type Error: ", err)
except ValueError as err:
    print("Value Error: ", err)
except:
     print("Something Went Wrong!")