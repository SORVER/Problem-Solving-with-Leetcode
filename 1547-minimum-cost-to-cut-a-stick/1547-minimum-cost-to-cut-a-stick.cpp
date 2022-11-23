/*** وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ ۚ عَلَيْهِ تَوَكَّلْتُ وَإِلَيْهِ أُنِيبُ ***/
#include <bits/stdc++.h>
#define ll long long
#include <cmath>

#define Fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define clr(x) memset(x, -1 , sizeof(x));
#include <math.h>
#define     OO                       2'000'000'000
#define     fixed(x)                 fixed<<setprecision(x)

class Solution { 
    ll a[109]; ll memo[109][109];
    ll dp( ll l , ll r){
        if(l +1 == r ) return 0;
          ll &ret = memo[l][r];
          if(ret != - 1) return ret;

       ret =2000000000;
       for(ll i = l +1 ; i < r;i++){
          ret = min(ret,dp(l,i)  + dp(i,r)+ a[r] - a[l]);
       }




        return ret ;




}
public:

   
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(),cuts.end());
        clr(memo);
        a[0] = 0; a[cuts.size() +1] = n;
        for(ll i = 1;i<= cuts.size();i++ ) a[i] = cuts[i - 1];
        return dp(0,cuts.size() +1);
    }
};




