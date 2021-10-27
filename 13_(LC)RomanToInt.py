a = "IX"
def romantoint(a):
    d= {"I" :1,"V": 5,"X":10,"L":50,"C":100,"D":500,"M": 1000}
    prev= "I"
    result = 0
    for arr in a[::-1]:
        print(arr)
        if(d[arr]<d[prev]):
            result = result-d[arr]
            print(result)
        else:
           result= result+d[arr]
           print(result)
        prev = arr
    return result
print(romantoint(a))