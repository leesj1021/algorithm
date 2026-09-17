using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long sum = 0;
    
    for(int i = 0; i<count;i++){
        sum = sum+(i+1)*price;
    }
    if(money>=sum){
        answer = 0;
        
    }
    else{
        answer=sum-money;
    }

    return answer;
}