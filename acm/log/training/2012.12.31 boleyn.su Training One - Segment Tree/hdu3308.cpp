//begin #include <Core>
/*
 * Package: StandardCodeLibrary.Core
 * Last Update: 2012-12-21
 * */
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <utility>
#include <vector>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <bitset>
#include <complex>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <climits>
#if __GNUC__>=4 and __GNUC_MINOR__>=6
	#include <ext/pb_ds/assoc_container.hpp>
	#include <ext/pb_ds/tree_policy.hpp>
	#include <ext/pb_ds/tag_and_trait.hpp>
#endif
using namespace std;

#define lp for(;;)
#define repf(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repf(i,0,n)
#define ft(i,a,b) for (int i=(a);i<=(b);++i)
#define fdt(i,a,b) for (int i=(a);i>=b;--i)
#define feach(e,s) for (typeof((s).begin()) e=(s).begin();e!=(s).end();++e)
#define fsubset(subset,set) for (int subset=set&(set-1);subset;subset=(subset-1)&set)
#define forin(i,charset) for (cstr i=charset;*i;i++)
#define whl while
#define rtn return
#define fl(x,y) memset((x),char(y),sizeof(x))
#define clr(x) fl(x,char(0))
#define cpy(x,y) memcpy(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define ins insert
#define ers erase
#define lb lower_bound
#define ub upper_bound
#define rnk order_of_key
#define sel find_by_order
#define x first
#define y second
#define sz(x) (int((x).size()))
#define all(x) (x).begin(),(x).end()
#define srt(x) sort(all(x))
#define uniq(x) srt(x),(x).erase(unique(all(x)),x.end())
#define vec vector
#define pr pair
#define que queue
#define prq priority_queue
#define itr iterator
#define sf scanf
#define pf printf
#define pdb(prcs,x) (cout<<setprecision(prcs)<<fixed<<(x))
#ifdef DEBUG
#define prt(x) cerr<<#x"="<<(x)<<endl
#define asrtWA(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtTLE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtMLE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtOLE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtRE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define runtime() cerr<<"Used: "<<db(clock())/CLOCKS_PER_SEC<<"s"<<endl
#define input(in) do{}whl(0)
#define output(out) do{}whl(0)
#else
#define endl (char('\n'))
#define prt(x) (cerr)
#define asrtWA(s) do if(!(s))exit(0);whl(0)
#define asrtTLE(s) do if(!(s))whl(1);whl(0)
#define asrtMLE(s) do if(!(s))whl(new int);whl(0)
#define asrtOLE(s) do if(!(s))whl(1)puts("OLE");whl(0)
#define asrtRE(s) do if(!(s))*(int*)0=0;whl(0)
#define runtime() cerr
#define input(in) freopen(in,"r",stdin)
#define output(out) freopen(out,"w",stdout)
#endif

typedef long long int lli;
typedef double db;
typedef const char* cstr;
typedef string str;
typedef vec<int> vi;
typedef vec<vi> vvi;
typedef vec<bool> vb;
typedef vec<vb> vvb;
typedef vec<str> vs;
typedef pr<int,int> pii;
typedef pr<lli,lli> pll;
typedef pr<db,db> pdd;
typedef pr<str,int> psi;
typedef map<int,int> mii;
typedef map<str,int> msi;
typedef map<char,int> mci;
typedef set<int> si;
typedef set<str> ss;
typedef que<int> qi;
typedef prq<int> pqi;
#if __GNUC__>=4 and __GNUC_MINOR__>=7
	template<typename key,typename value>class ext_map:public __gnu_pbds::tree<key,value,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
	template<typename key>class ext_set:public __gnu_pbds::tree<key,__gnu_pbds::null_type,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
#elif __GNUC__>=4 and __GNUC_MINOR__>=6
	template<typename key,typename value>class ext_map:public __gnu_pbds::tree<key,value,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
	template<typename key>class ext_set:public __gnu_pbds::tree<key,__gnu_pbds::null_mapped_type,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
#endif

const int oo=(~0u)>>1;
const lli ooll=(~0ull)>>1;
const db inf=1e+10;
const db eps=1e-10;
const db pi=acos(-1.0);
const int MOD=1000000007;

template<typename type>inline bool cmax(type& a,const type& b){rtn a<b?a=b,true:false;}
template<typename type>inline bool cmin(type& a,const type& b){rtn b<a?a=b,true:false;}
template<typename type>inline type sqr(const type& x){rtn x*x;}
inline int dbcmp(const db& a,const db& b){rtn (a>b+eps)-(a<b-eps);}
inline int sgn(const db& x){rtn dbcmp(x,0);}
template<typename ostream,typename type>ostream& operator<<(ostream& cout,const pr<type,type>& x){rtn cout<<"("<<x.x<<","<<x.y<<")";}
template<typename type>pr<type,type> operator-(const pr<type,type>& x){rtn mp(-x.x,-x.y);}
template<typename type>pr<type,type> operator+(const pr<type,type>& a,const pr<type,type>& b){rtn mp(a.x+b.x,a.y+b.y);}
template<typename type>pr<type,type> operator-(const pr<type,type>& a,const pr<type,type>& b){rtn mp(a.x-b.x,a.y-b.y);}
template<typename type>inline type cross(const pr<type,type>& a,const pr<type,type>& b,const pr<type,type>& c){rtn (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);}
template<typename type>inline type dot(const pr<type,type>& a,const pr<type,type>& b,const pr<type,type>& c){rtn (b.x-a.x)*(c.x-a.x)+(b.y-a.y)*(c.y-a.y);}
template<typename type>inline type gcd(type a,type b){if(b)whl((a%=b)&&(b%=a));rtn a+b;}
template<typename type>inline type lcm(type a,type b){rtn a*b/gcd(a,b);}
template<typename type>inline void bit_inc(vec<type>& st,int x,type inc){whl(x<sz(st))st[x]+=inc,x|=x+1;}
template<typename type>inline type bit_sum(const vec<type>& st,int x){type s=0;whl(x>=0)s+=st[x],x=(x&(x+1))-1;rtn s;}
template<typename type>inline type bit_kth(const vec<type>& st,int k){int x=0,y=0,z=0;whl((1<<(++y))<=sz(st));fdt(i,y-1,0){if((x+=1<<i)>sz(st)||z+st[x-1]>k)x-=1<<i;else z+=st[x-1];}rtn x;}
inline void make_set(vi& st){rep(i,sz(st))st[i]=i;}
inline int find_set(vi& st,int x){int y=x,z;whl(y!=st[y])y=st[y];whl(x!=st[x])z=st[x],st[x]=y,x=z;rtn y;}
inline bool union_set(vi& st,int a,int b){a=find_set(st,a),b=find_set(st,b);rtn a!=b?st[a]=b,true:false;}
template<typename type>inline void merge(type& a,type& b){if(sz(a)<sz(b))swap(a,b);whl(sz(b))a.insert(*b.begin()),b.erase(b.begin());}
template<typename type>inline void merge(prq<type>& a,prq<type>& b){if(sz(a)<sz(b))swap(a,b);whl(sz(b))a.push(b.top()),b.pop();}

struct Initializer{Initializer(){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}~Initializer(){runtime();}}initializer;
//end #include <Core>

#define idx(l,r) (((l)+(r))|((l)!=(r)))
#define rt idx(l,r)
#define lrt idx(l,m)
#define rrt idx(m+1,r)
const int MAXN=100000;
struct node
{
	int lz;
	int lv,rv,lmax,rmax,max;
};
node st[(MAXN<<1)-1];
void upd(int l,int r,int L,int R,int v)
{
	if (R<l||r<L) ;
	else if (L<=l&&r<=R)
	{
		st[rt].lz=v;
		st[rt].lv=v;
		st[rt].rv=v;
	}
	else
	{
		int m=(l+r)>>1;
		if (st[rt].lz)
		{
			st[lrt].lz=st[rt].lz;
			st[lrt].lv=st[rt].lz;
			st[lrt].rv=st[rt].lz;
			st[rrt].lz=st[rt].lz;
			st[rrt].lv=st[rt].lz;
			st[rrt].rv=st[rt].lz;
			st[rt].lz=0;
		}
		upd(l,m,L,R,v),upd(m+1,r,L,R,v);
		st[rt].lv=st[lrt].lv;
		st[rt].rv=st[rrt].rv;
		st[rt].lmax=(st[lrt].max==m-l+1&&st[lrt].rv<st[rrt].lv)?st[lrt].max+st[rrt].lmax:st[lrt].lmax;
		st[rt].rmax=(st[rrt].max==r-(m+1)+1&&st[lrt].rv<st[rrt].lv)?st[lrt].rmax+st[rrt].max:st[rrt].rmax;
		st[rt].max=st[lrt].rv<st[rrt].lv?st[lrt].rmax+st[rrt].lmax:-oo;
		cmax(st[rt].max,st[lrt].max);
		cmax(st[rt].max,st[rrt].max);
	}
}
node qry(int l,int r,int L,int R)
{
	if (R<l||r<L)
	{
		node ret;
		ret.lv=-oo,ret.rv=+oo;
		ret.lmax=0;
		ret.rmax=0;
		ret.max=0;
		rtn ret;
	}
	else if (L<=l&&r<=R) rtn st[rt];
	else
	{
		int m=(l+r)>>1;
		if (st[rt].lz)
		{
			st[lrt].lz=st[rt].lz;
			st[lrt].lv=st[rt].lz;
			st[lrt].rv=st[rt].lz;
			st[rrt].lz=st[rt].lz;
			st[rrt].lv=st[rt].lz;
			st[rrt].rv=st[rt].lz;
			st[rt].lz=0;
		}
		node lret=qry(l,m,L,R);
		node rret=qry(m+1,r,L,R);
		node ret;
		ret.lv=lret.lv;
		ret.rv=rret.rv;
		ret.lmax=(lret.max==m-l+1&&lret.rv<rret.lv)?lret.max+rret.lmax:lret.lmax;
		ret.rmax=(rret.max==r-(m+1)+1&&lret.rv<rret.lv)?lret.rmax+rret.max:rret.rmax;
		ret.max=lret.rv<rret.lv?lret.rmax+rret.lmax:-oo;
		cmax(ret.max,lret.max);
		cmax(ret.max,rret.max);
		rtn ret;
	}
}
#undef rc
#undef lc
#undef p
#undef idx


int main()
{
	int T;
	sf("%d",&T);
	ft(t,1,T)
	{
		int n,q;
		sf("%d%d",&n,&q);
		rep(i,n*2-1) st[i].lz=st[i].lv=st[i].rv=0,st[i].lmax=st[i].rmax=st[i].max=1;
		rep(i,n)
		{
			int ai;
			sf("%d",&ai);
			upd(0,n-1,i,i,ai);
		}
		rep(i,q)
		{
			char op;
			sf(" %c",&op);
			if (op=='U')
			{
				int p,v;
				sf("%d%d",&p,&v);
				upd(0,n-1,p,p,v);
			}
			else
			{
				int l,r;
				sf("%d%d",&l,&r);
				pf("%d\n",qry(0,n-1,l,r).max);
			}
		}
	}
}
