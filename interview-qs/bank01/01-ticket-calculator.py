'''
    Rules: 
        - 1 week requires 1 ticket
        - this program creates to calculate how many ticket a client needs to buy based on their entry records

    Example output: 
        - ['Mon', 'Mon', 'Mon'] must return 3 tickets 
        - ['Mon', 'Tue', 'Fri', 'Wed', 'Sun', 'Tue', 'Tue'] must return 4 
        - ['Tue', 'Sun', 'Wed', 'Thu', 'Mon', 'Fri', 'Sat', 'Sun'] must return 3 

'''

# declare dates
mapper = {'Mon': 1, 'Tue': 2, 'Wed': 3, 'Thu': 4, 'Fri': 5, 'Sat': 6, 'Sun': 7}



# for testing 
if __name__ == "__main__": 

    A = ['Mon', 'Mon', 'Mon']
    pass 
