def subArrayExists(arr,n):
        postSum = [0]*n
        postSum[0] = arr[0]
        count = {}
        count[arr[0]] = 1
        for i in range(1,n):
            postSum[i] = postSum[i-1] + arr[i]
            if postSum[i] == 0:
                return True
            if postSum[i] in count:
                return True
            else:
                count[postSum[i]] = 1
        return False

if __name__ == "__main__":
    nums = [4,2,-3,1,6]
    print(subArrayExists(nums,len(nums)))