class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass)
    {
        string ch="";
        int flag=-1,flag1=-1;
        long long int len = (long long int)length;
        long long int wid = (long long int)width;
        long long int hei = (long long int)height;
        if(len>=pow(10,4) ||  hei>=pow(10,4) ||  wid >=pow(10,4))
        {
            // return "Bulky";
            flag=0;
        }
        long long area=(len*wid);
        if( area>=pow(10,9))
        {
            // return "Bulky";
            flag=0;
        }
        long long volume=area*hei;
        if( volume>=pow(10,9))
        {
            // return "Bulky";
            flag=0;
        }
        if(mass >=100)
        {
            // return "Heavy";
            flag1=1;
        }
        if(flag==0 && flag1==1)return "Both";
        if(flag==-1 && flag1==-1)return "Neither";
        if(flag==0 && flag1==-1)return "Bulky";
        if(flag==-1 && flag1==1)return "Heavy";
        return ch;
    }
};
