class Solution {
public:
    int addDigits(int num)
    {
        if(num<=9)return num;
        else if(num>9)
        {
            int temp=num;
            back:int sum=0;
            while(temp>0)
            {
                int r=temp%10;
                sum=sum+r;
                temp=temp/10;
            }
            if(sum>9)
            {
                temp=sum;
                goto back;
            }
            else return sum;
        }
        return 0;
    }
};
