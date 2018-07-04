def is_leap(year):
    leap = False
    if year%4!=0:
        return leap
    elif year%4==0 and year%400!=0 and year%100==0:
        return leap
    else:
        leap=True
        return leap
