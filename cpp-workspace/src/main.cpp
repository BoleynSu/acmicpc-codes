/*
 * Package: StandardCodeLibrary.Core
 * */
//引进常用的头文件并使用std名字空间;
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
using namespace std;

//用于减少代码量的宏;
#define lp for(;;)
#define repf(i,a,b) for (int i=(a);i<(b);++i)
#define rrepf(i,a,b) for (int i=(a)-1;i>=(b);--i)
#define rep(i,n) repf(i,0,n)
#define rrep(i,n) rrepf(i,n,0)
#define ft(i,a,b) for (int i=(a);i<=(b);++i)
#define fdt(i,a,b) for (int i=(a);i>=(b);--i)
#define for_nonempty_subsets(subset,set) for (int subset=set;subset;subset=(subset-1)&(set))
#define for_in_charset(i,charset) for (cstr i=(charset);*i;i++)
#define whl while
#define rtn return
#define fl(x,y) memset((x),char(y),sizeof(x))
#define clr(x) fl(x,char(0))
#define cpy(x,y) memcpy(x,y,sizeof(x))
#define sf scanf
#define pf printf
#define vec vector
#define pr pair
#define que queue
#define prq priority_queue
#define itr iterator
#define x first
#define y second
#define pb push_back
#define mp make_pair
#define ins insert
#define ers erase
#define lb lower_bound
#define ub upper_bound
#define rnk order_of_key
#define sel find_by_order
#define sz(x) (int((x).size()))
#define all(x) (x).begin(),(x).end()
#define srt(x) sort(all(x))
#define uniq(x) srt(x),(x).erase(unique(all(x)),(x).end())
#define rev(x) reverse(all(x))
#define shf(x) random_shuffle(all(x))
#define nxtp(x) next_permutation(all(x))

//调试相关的宏;
#ifndef DEBUG
#define prt(x) (cerr)
#define asrtWA(s) do if(!(s))exit(0);whl(0)
#define asrtTLE(s) do if(!(s))whl(1);whl(0)
#define asrtMLE(s) do if(!(s))whl(new int);whl(0)
#define asrtOLE(s) do if(!(s))whl(1)puts("OLE");whl(0)
#define asrtRE(s) do if(!(s))*(int*)0=0;whl(0)
#define runtime() (cerr)
#define input(in) freopen(in,"r",stdin)
#define output(out) freopen(out,"w",stdout)
#else
#define prt(x) cerr<<"第"<<__LINE__<<"行\t: "<<#x"\t="<<(x)<<endl
#define asrtWA(s) do if(!(s))cerr<<"assert("#s")"<<endl;whl(0)
#define asrtTLE(s) do if(!(s))cerr<<"assert("#s")"<<endl;whl(0)
#define asrtMLE(s) do if(!(s))cerr<<"assert("#s")"<<endl;whl(0)
#define asrtOLE(s) do if(!(s))cerr<<"assert("#s")"<<endl;whl(0)
#define asrtRE(s) do if(!(s))cerr<<"assert("#s")"<<endl;whl(0)
#define runtime() cerr<<"Used: "<<db(clock())/CLOCKS_PER_SEC<<"s"<<endl
#define input(in)
#define output(out)
#endif

//常用数据类型;
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
typedef map<int,int> mii;
typedef map<str,int> msi;
typedef map<char,int> mci;
typedef set<int> si;
typedef set<str> ss;
typedef que<int> qi;
typedef vec<pii> vpii;
typedef vec<pdd> vpdd;

//常用常量:int的最大值;lli的最大值;db的误差相关常数;欧拉常数;圆周率;移动向量;取模使用的除数;
int oo=(~0u)>>1;
lli ooll=(~0ull)>>1;
db inf=1e+10;
db eps=1e-10;
db gam=0.5772156649015328606;
db pi=acos(-1.0);
int dx[]={1,0,-1,0,1,-1,-1,1,0};
int dy[]={0,1,0,-1,1,1,-1,-1,0};
int MOD=1000000007;

//常用函数:最大最小值更新;数学相关函数;输入和输出;树状数组;并查集;可合并堆;
template<typename type>inline bool cmax(type& a,const type& b){rtn a<b?a=b,true:false;}
template<typename type>inline bool cmin(type& a,const type& b){rtn b<a?a=b,true:false;}
template<typename type>inline type sqr(const type& x){rtn x*x;}
template<typename type>inline type mod(const type& x){rtn x%MOD;}
inline int sgn(const db& x){rtn (x>+eps)-(x<-eps);}
inline int dbcmp(const db& a,const db& b){rtn sgn(a-b);}
template<typename type>inline pr<type,type> operator-(const pr<type,type>& x){rtn mp(-x.x,-x.y);}
template<typename type>inline pr<type,type> operator+(const pr<type,type>& a,const pr<type,type>& b){rtn mp(a.x+b.x,a.y+b.y);}
template<typename type>inline pr<type,type> operator-(const pr<type,type>& a,const pr<type,type>& b){rtn mp(a.x-b.x,a.y-b.y);}
template<typename type>inline pr<type,type> operator*(const pr<type,type>& a,const type& b){rtn mp(a.x*b,a.y*b);}
template<typename type>inline pr<type,type> operator/(const pr<type,type>& a,const type& b){rtn mp(a.x/b,a.y/b);}
template<typename type>inline pr<type,type>& operator-=(pr<type,type>& a,const pr<type,type>& b){rtn a=a-b;}
template<typename type>inline pr<type,type>& operator+=(pr<type,type>& a,const pr<type,type>& b){rtn a=a+b;}
template<typename type>inline pr<type,type>& operator*=(pr<type,type>& a,const type& b){rtn a=a*b;}
template<typename type>inline pr<type,type>& operator/=(pr<type,type>& a,const type& b){rtn a=a/b;}
template<typename type>inline type cross(const pr<type,type>& a,const pr<type,type>& b){rtn a.x*b.y-a.y*b.x;}
template<typename type>inline type dot(const pr<type,type>& a,const pr<type,type>& b){rtn a.x*b.x+a.y*b.y;}
template<typename type>inline type gcd(type a,type b){if(b)whl((a%=b)&&(b%=a));rtn a+b;}
template<typename type>inline type lcm(type a,type b){rtn a*b/gcd(a,b);}
template<typename istream,typename first_type,typename second_type>inline istream& operator>>(istream& cin,pr<first_type,second_type>& x){rtn cin>>x.x>>x.y;}
template<typename ostream,typename first_type,typename second_type>inline ostream& operator<<(ostream& cout,const pr<first_type,second_type>& x){rtn cout<<x.x<<" "<<x.y;}
template<typename istream,typename type>inline istream& operator>>(istream& cin,vec<type>& x){rep(i,sz(x))cin>>x[i];rtn cin;}
template<typename ostream,typename type>inline ostream& operator<<(ostream& cout,const vec<type>& x){rep(i,sz(x))cout<<x[i]<<(i+1==sz(x)?"":" ");rtn cout;}
inline ostream& pdb(int prcs,db x){rtn cout<<setprecision(prcs)<<fixed<<(sgn(x)?(x):0);}
template<typename type>inline void bit_inc(vec<type>& st,int x,type inc){whl(x<sz(st))st[x]+=inc,x|=x+1;}
template<typename type>inline type bit_sum(const vec<type>& st,int x){type s=0;whl(x>=0)s+=st[x],x=(x&(x+1))-1;rtn s;}
template<typename type>inline type bit_kth(const vec<type>& st,int k){int x=0,y=0,z=0;whl((1<<(++y))<=sz(st));fdt(i,y-1,0){if((x+=1<<i)>sz(st)||z+st[x-1]>k)x-=1<<i;else z+=st[x-1];}rtn x;}
inline void make_set(vi& st){rep(i,sz(st))st[i]=i;}
inline int find_set(vi& st,int x){int y=x,z;whl(y!=st[y])y=st[y];whl(x!=st[x])z=st[x],st[x]=y,x=z;rtn y;}
inline bool union_set(vi& st,int a,int b){a=find_set(st,a),b=find_set(st,b);rtn a!=b?st[a]=b,true:false;}
template<typename type>inline void merge(type& a,type& b){if(sz(a)<sz(b))swap(a,b);whl(sz(b))a.ins(*b.begin()),b.ers(b.begin());}

//初始化;
struct Initializer{
#ifndef DEBUG
Initializer(){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#else
~Initializer(){runtime();}
#endif
}initializer;

////非标准;
//#define for_each(e,s) for (__typeof__((s).begin()) e=(s).begin();e!=(s).end();++e)
//#include <ext/rope>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/tag_and_trait.hpp>
//typedef __gnu_cxx::rope<char> rope;
//template<typename key,typename value>class ext_map:public __gnu_pbds::tree<key,value,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
//#define ctz __builtin_ctz
//#define clz __builtin_clz
//#define bc __builtin_popcount

/*
 * Package: StandardCodeLibrary.BalancedBinarySearchTree.SplayTree
 * Usage:
 * MAXNODE:SplayTree最多有多少个节点,null会占用一个节点
 * */

namespace StandardCodeLibrary
{
namespace BinarySearchTree
{
namespace SplayTree
{

typedef int key_type;
struct data
{
	key_type k;//k用于lower_bound/upper_bound/find
	int s;//s用于find_by_order/order_of_key/size
	int delta,value;
	lli sum;
};
const int MAXNODE=1000000;
typedef struct struct_node* node;
struct struct_node:data{node p,c[2];}pool[MAXNODE];
node top,null;

struct Initializer{Initializer(){top=pool,null=top++,null->p=null->c[0]=null->c[1]=null;}}initializer;

node make(const key_type& k)
{
	rtn top->k=k,top->s=0,top->p=top->c[0]=top->c[1]=null,top++;
}
void apply(node x,int delta)
{
	x->delta+=delta;
	x->value+=delta;
	x->sum+=lli(x->s)*lli(delta);
}
void pushup(node x)
{
	x->s=x->c[0]->s+x->c[1]->s+1;
	x->sum=x->c[0]->sum+x->c[1]->sum+x->value;
}
void pushdown(node x)
{
	if (x->delta)
	{
		apply(x->c[0],x->delta);
		apply(x->c[1],x->delta);
		x->delta=0;
	}
}

node stk[MAXNODE];
int stks;
void pushdownto(node x)
{
	do stk[stks++]=x;
	whl(x=x->p,x!=null);
	whl(stks) pushdown(stk[--stks]);
}

void set(node x,bool d,node y)
{
	x->c[d]=y;
	y->p=x;
}
void rotate(node x,bool d)
{
	node y=x->p;
	set(y,d,x->c[!d]),set(y->p,y->p->c[1]==y,x),set(x,!d,y);
	pushup(y);
}
void splay(node x,node p=null)
{
	whl(x->p!=p)
	{
		bool xd=x->p->c[1]==x,xpd=x->p->p->c[1]==x->p;
		if(x->p->p==p) rotate(x,xd);
		else
		{
			if(xpd==xd) rotate(x->p,xpd);
			else rotate(x,xd);
			rotate(x,xpd);
		}
	}
	pushup(x);
}

node lower_bound(node rt,const key_type& k)
{
	node l=rt,r=null;
	whl(l!=null)
	{
		pushdown(l);
		if (l->k<k) l=l->c[1];
		else r=l,l=l->c[0];
	}
	rtn r;
}
node upper_bound(node rt,const key_type& k)
{
	node l=rt,r=null;
	whl(l!=null)
	{
		pushdown(l);
		if (k<l->k) r=l,l=l->c[0];
		else l=l->c[1];
	}
	rtn r;
}
node find_by_order(node rt,int cnt)
{
	node x=rt;
	whl(x!=null)
	{
		pushdown(x);
		if (x->c[0]->s==cnt) break;
		else if (x->c[0]->s<cnt) cnt-=x->c[0]->s+1,x=x->c[1];
		else x=x->c[0];
	}
	rtn x;
}
node min(node rt)
{
	node x,y=rt;
	do x=y,y=x->c[0],pushdown(x);
	whl(y!=null);
	rtn x;
}
node max(node rt)
{
	node x,y=rt;
	do x=y,y=x->c[1],pushdown(x);
	whl(y!=null);
	rtn x;
}

struct tree
{
	node rt;
	tree():rt(null){}
	node lower_bound(const key_type& k)
	{
		node x=SplayTree::lower_bound(rt,k);
		if (x!=null) splay(x,null),rt=x;
		rtn x;
	}
	node upper_bound(const key_type& k)
	{
		node x=SplayTree::upper_bound(rt,k);
		if (x!=null) splay(x,null),rt=x;
		rtn x;
	}
	node find(const key_type& k)
	{
		node x=lower_bound(k);
		rtn x==null||k<x->k?null:x;
	}
	node find_by_order(int cnt)
	{
		node x=SplayTree::find_by_order(rt,cnt);
		if (x!=null) splay(x,null),rt=x;
		rtn x;
	}
	int order_of_key(const key_type& k)
	{
		node x=lower_bound(k);
		rtn x==null?size():x->c[0]->s;
	}
	node insert(const key_type& k)
	{
		node x=SplayTree::upper_bound(rt,k);
		node y=make(k);
		if (x==null) set(y,0,rt);
		else splay(x),set(y,0,x->c[0]),set(x,0,null),set(y,1,x),pushup(x);
		pushup(y),rt=y;
		rtn rt;
	}
	void erase(node x)
	{
		if (x!=null)
		{
			pushdownto(x);
			splay(x,null),rt=x;
			if (x->c[1]==null)
			{
				rt=x->c[0];
				set(null,0,x->c[0]),set(x,0,null);
			}
			else
			{
				node y=min(x->c[1]);
				splay(y,x);
				set(null,1,y),set(y,0,x->c[0]),set(x,0,null),set(x,1,null);
				pushup(y),rt=y;
			}
		}
	}
	node erase(const key_type& k)
	{
		node x=find(k);
		erase(x);
		rtn x;
	}
	int size()
	{
		rtn rt->s;
	}
};

}
}
}

using namespace StandardCodeLibrary::BinarySearchTree::SplayTree;

int main()
{
	int N,Q;
	sf("%d%d",&N,&Q);
	tree t;
	t.ins(0),t.rt->value=0;
	ft(i,1,N)
	{
		int a;
		sf("%d",&a);
		t.ins(i),t.rt->value=a;
	}
	t.ins(N+1),t.rt->value=0;
	rep(i,Q)
	{
		char c;
		sf(" %c",&c);
		if (c=='C')
		{
			int a,b,c;
			sf("%d%d%d",&a,&b,&c);
			node x=lower_bound(t.rt,a-1);
			splay(x,null),t.rt=x;
			node y=lower_bound(x->c[1],b+1);
			splay(y,x);
			apply(y->c[0],c),pushup(y),pushup(x);
		}
		else
		{
			int a,b;
			sf("%d%d",&a,&b);
			node x=lower_bound(t.rt,a-1);
			splay(x,null),t.rt=x;
			node y=lower_bound(x->c[1],b+1);
			splay(y,x);
			pf("%I64d\n",y->c[0]->sum);
		}
	}
}
