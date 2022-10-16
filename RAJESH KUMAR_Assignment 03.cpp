# LINEAR SEARCH 

def linearSearch(arr,num):
    try:
        i = 0
        while True :
            if arr[i] == num:
                return i
            i += 1 
    except IndexError:
        return -1

# BINARY SEARCH 

def binarySearch(arr,num,initial=0,final=1):
    try :
        while arr[final] < num :
            initial = final+1
            final = final*2

        return binarySearchHelper(arr,num,initial,final)

    except IndexError:
        
        if final>initial:
            final = (initial+final)//2
            return binarySearch(arr,num,initial,final)
        else:
            return -1 


def binarySearchHelper(arr,num,initial,final):
    if initial>final :
        return -1
    mid = (initial+final)//2
    if arr[mid] == num :
        return mid
    if arr[mid] < num :
        return binarySearchHelper(arr,num,mid+1,final)
    else:
        return binarySearchHelper(arr,num,initial,mid-1)  



# Main 
n = int(input("enter number of elements : "))
arr = []
for i in range(n):
    arr.append(int(input()))
num = int(input())
print(linearSearch(arr,num))
print(binarySearch(arr,num))