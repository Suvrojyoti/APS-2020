#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,test,small,caps,num;
    cin>>test;
    char arr[1000];
    while(test--)
    {
        cin>>arr;
        small=caps=num=0;
        for(i=0;arr[i]!='\0';i++)
        {
            if(arr[i]>=65&&arr[i]<=90)
                caps++;
            if(arr[i]>=97&&arr[i]<=122)
                small++;
            if(arr[i]>=48&&arr[i]<=57)
                num++;
        }
            if(small<1)
            {
                if(caps>1)
                {
                for(i=0;arr[i]!='\0';i++)
                {
                    if(arr[i]>=65&&arr[i]<=90)
                    {
                        arr[i]='a';
                        break;
                    }
                }
                }
                else if(num>1)
                {
                    for(i=0;arr[i]!='\0';i++)
                    {
                    if(arr[i]>=48&&arr[i]<=57)
                    {
                        arr[i]='a';
                        break;
                    }
                    }
                }
            }
            if(caps<1)
            {
                if(small>1)
                {
                for(i=0;arr[i]!='\0';i++)
                {
                    if(arr[i]>=97&&arr[i]<=122)
                    {
                        arr[i]='A';
                        break;
                    }
                }
                }
                else if(num>1)
                {
                    for(i=0;arr[i]!='\0';i++)
                    {
                    if(arr[i]>=48&&arr[i]<=57)
                    {
                        arr[i]='A';
                        break;
                    }
                    }
                }
            }
            if(num<1)
            {
                if(caps>1)
                {
                for(i=0;arr[i]!='\0';i++)
                {
                    if(arr[i]>=65&&arr[i]<=90)
                    {
                        arr[i]='1';
                        break;
                    }
                }
                }
                else if(small>1)
                {
                    for(i=0;arr[i]!='\0';i++)
                    {
                    if(arr[i]>=97&&arr[i]<=122)
                    {
                        arr[i]='1';
                        break;
                    }
                    }
                }
            }
        
        cout<<arr<<"\n";
    }
    return 0;
}