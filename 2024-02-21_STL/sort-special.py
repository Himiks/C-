def lastdigit(n):
    return n%10
aa = [12,8,5,14,7,3]
bb = sorted(aa,key=lastdigit)
print(bb)
cc = sorted(aa,key=lambda x: x%10, reverse=True)
print(cc)
