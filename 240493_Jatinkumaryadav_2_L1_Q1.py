def Prnt_n(n, Count):
    print(Count)
    if (Count<n):
        Prnt_n(n, Count+1)
        Count=Count+1

Count=1
n=int(input("Enter the number:"))
Prnt_n(n, Count)