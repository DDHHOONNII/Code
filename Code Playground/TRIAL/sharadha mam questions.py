#table using while loop
'''n=int(input("enter your table:")) 
i=1
while i<=10:
    print(n*i)
    i+=1

#printin of list  
heros=["antman","spiderman","ironman","superman","capt.america"]
i=0
while i<=len(heros)-1:
    print(heros[i])
    i+=2'''
    # search for a number x in this tuple by using loop

nums=(1,4,5,16,465,155,56,55,88,)
x=5
i=0
while i <= len(nums)-1:
    if(nums[i]== x):
        print("found in index",i)
        break
    else:
        print("not found in index",i)
    
    i+=1



        
