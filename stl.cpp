#include <iostream>
#include <algorithm>
#include <set>
#include <array>
#include <vector>

using namespace std;

int main()
{
    // //lower_bound fn use--finding first occu of particular int

    // int a[]{1,4,4,4,4,9,9,10,11};
    // int n = sizeof(a) / sizeof(a[0]);
    // int ind=lower_bound(a,a+n,4)-a;
    // if(ind!=n && a[ind]==4) cout<<ind;
    // else cout<<-1;


    // //upper_bound fn use--finding last occu of particular int

    // vector<int> v{1,4,4,4,4,9,9,10,11};
    // int ind=upper_bound(v.begin(),v.end(),9)-v.begin();
    // ind--;
    // if(ind>0 && v[ind]==9) cout<<ind<<endl;
    // else cout<<-1<<endl;

    //lower_bound fn use--greatest num smaller than some part. int

    // vector<int> v{1,4,4,4,4,9,9,10,11};
    // int n=v.size();
    // int ind=lower_bound(v.begin(),v.end(),9)-v.begin();
    // ind--;
    // if(ind>0) cout<<ind<<endl;
    // else cout<<-1<<endl;

    //upper_bound fn use-smallest num greater than some part. int

    vector<int> v{1,4,4,4,4,9,9,10,11};
    int n=v.size();
    int ind=upper_bound(v.begin(),v.end(),9)-v.begin();
    if(ind<n) cout<<ind<<endl;
    else cout<<-1<<endl;

    return 0;
}