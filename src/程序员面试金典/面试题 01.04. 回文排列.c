#define MaxSize 256

bool canPermutePalindrome(char* s){
    if(strlen(s) <= 0)
    {
        return false;
    }

    int ans[MaxSize] = {0};

    for(int i =0; i < strlen(s); i++)
    {
        ans[s[i]]++; //统计各个字符出现的次数
    }

    int cnt = 0;
    for(int i= 0; i < MaxSize; i++)
    {
        if(ans[i] % 2 == 0)
        {
            continue;//如果数组元素为偶数，执行下一次循环
        }
        
        cnt++;//如果数组元素为奇数，记录下奇数元素出现的次数
    }

    return (cnt > 1)? false:true;
}