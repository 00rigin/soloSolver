#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<queue>
#include<stack>
#include<vector>
#include<cmath>
#include<bitset>
#include<map>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

struct Shortcut
{
    int destination;
    int cost;
};

    


class Information{
    
private:
    int numOfShorcut, lenOfHighway;
    
    
public:

    vector<int> distance;
    vector<Shortcut> Map;
    
    void InitSetting(int num, int len);
    int getNumOfShortcut();
    int getLenOfHighWay();

};

void Information::InitSetting(int num, int len){
    numOfShorcut = num;
    lenOfHighway = len;
    for(int i = 0; i<lenOfHighway; i++){
        distance.push_back(0);
    }
}

int Information::getNumOfShortcut(){return numOfShorcut;}
int Information::getLenOfHighWay(){return lenOfHighway;}


 


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    Information info;
    
    int numShorcut, lenHighway;
    cin>>numShorcut>>lenHighway;
    info.InitSetting(numShorcut, lenHighway);
    
    for(int i = 0; i<info.getNumOfShortcut(); i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(b-a<=c) continue;
        if(b>info.getLenOfHighWay()) continue;
        info.Map.push_back({b,c});
    }
    
    
    
    
    
   
   
}
