# [LeetCode 75](https://leetcode.cn/studyplan/leetcode-75/)

https://leetcode.cn/studyplan/leetcode-75/

## [1071.字符串的最大公因子](https://leetcode.cn/problems/greatest-common-divisor-of-strings/solutions/143956/zi-fu-chuan-de-zui-da-gong-yin-zi-by-leetcode-solu/?envType=study-plan-v2&envId=leetcode-75)  

```
//// my answer
class Solution {
public:
    int gcb(int a,int b){// 求最大公因数 辗转相减
        if(a == b){
            return a;
        }
        else if(a > b){
            return gcb(a-b,b);
        }
        else{// a < b
            return gcb(a,b-a);
        }
    }
    bool ifcj(string stmp,string substring){
        int tmpi=substring.length();
        for(int i=0;i<stmp.length();i+=tmpi){
            if(substring!=stmp.substr(i,tmpi))
                return false;
        }
        return true;
    }
    string gcdOfStrings(string str1, string str2) {
        // 字符串大小肯定是两个字符串大小的最大公因数！ //1 确定结果字符串大小
        // 比较！
        int gcb1=gcb(str1.length(),str2.length());
        string tmp=str1.substr(0,gcb1);
        if(ifcj(str1,tmp) && ifcj(str2,tmp)){
            return tmp;
        }
        else{
            return "";
        }

    }
};
```