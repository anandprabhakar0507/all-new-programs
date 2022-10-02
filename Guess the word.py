n=int(input())
sentence=input().split()
length=[]
for i in sentence:
    L=len(i)
    if L%2==1:
        length.append(len(i))
    else:
        length.append(0)
if max(length)==0:
    print("Better Luck next Time")
else:
    print(sentence[length.index(max(length))])
