class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>tem;
        for(string i:operations){
            if(i=="C"){
                tem.pop();
            }else if(i=="D"){
                int k=tem.top();
                int n=k*2;
                tem.push(n);
            }else if(i=="+"){
                int a=tem.top();
                tem.pop();
                int b=tem.top();
                int c=a+b;
                tem.push(a);
                tem.push(c);
            }else{
                tem.push(stoi(i));
            }
        }
        int sum=0;
        while(!tem.empty()){
            int l=tem.top();
            tem.pop();
           sum+=l;
        }
        return sum;
    }
};