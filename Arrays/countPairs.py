
def countPairs(arr,k):
    mp = {}
    ans = 0
    for num in arr:
        try:
            mp[num] +=1
        except:
            mp[num] = 1
    
    for key in mp:
        try:
            x = mp[k-key]
            y = mp[key]
            if k-key == key:
                ans+= x*(x-1)
            else:
                ans = ans + ((x*y))
        except:
            pass
    
        
    return ans//2

if __name__ == "__main__":
    arr = [1,5,7,1]

    countPairs(arr,6)
