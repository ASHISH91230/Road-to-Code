class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int first_string=haystack.size();
        int second_string=needle.size();
        int index1,index2;
        if(second_string>first_string)
        {
            return -1;
        }
        for(int i=0;i<first_string-second_string+1;i++)
        {
            if(haystack.substr(i,second_string)==needle)
            {
                return i;
                }
        }
        return -1;
     }
       
};