//Author: sandeep172918
//Date: 2025-10-13 17:53

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define bitc(x) __builtin_popcountll(x)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 

static int sgn(double x) { return (x > 1e-9) - (x < -1e-9); }
 
 struct Point {
        double x, y;
        Point(double x=0, double y=0): x(x), y(y) {}
 
        bool operator<(const Point& p) const { return tie(x,y) < tie(p.x,p.y); }
        bool operator==(const Point& p) const { return fabs(x-p.x)<1e-9 && fabs(y-p.y)<1e-9; }
 
        Point operator+(const Point& p) const { return Point(x+p.x, y+p.y); }
        Point operator-(const Point& p) const { return Point(x-p.x, y-p.y); }
        Point operator*(double d) const { return Point(x*d, y*d); }
        Point operator/(double d) const { return Point(x/d, y/d); }
 
        double dot(const Point& p) const { return x*p.x + y*p.y; }
        double cross(const Point& p) const { return x*p.y - y*p.x; }
        double cross(const Point& a, const Point& b) const { return (a-*this).cross(b-*this); }
 
        double dist2() const { return x*x + y*y; }
        double dist() const { return sqrt(dist2()); }
 
        double angle() const { return atan2(y, x); }
        Point unit() const { double d = dist(); return Point(x/d, y/d); }
        Point perp() const { return Point(-y, x); }
        Point normal() const { return perp().unit(); }
 
        Point rotate(double a) const {
            return Point(x*cos(a) - y*sin(a), x*sin(a) + y*cos(a));
        }
    };
 
class Geometry {
public:
    static double lineDist(const Point& a, const Point& b, const Point& p) {
        return (b-a).cross(p-a)/(b-a).dist();
    }
 
    static double segDist(const Point& s, const Point& e, const Point& p) {
        if (s == e) return (p-s).dist();
        double d2 = (e-s).dist2();
        double t = max(0.0, min(1.0, (p-s).dot(e-s)/d2));
        Point proj = s + (e-s)*t;
        return (p - proj).dist();
    }
 
    static int sideOf(const Point& s, const Point& e, const Point& p) {
        double c = (e - s).cross(p - s);
        return sgn(c);
    }
 
    static bool onSegment(const Point& s, const Point& e, const Point& p) {
        return fabs(p.cross(s,e)) < 1e-9 && (s - p).dot(e - p) <= 1e-9;
    }
 
    static bool segInter(const Point& a, const Point& b, const Point& c, const Point& d) {
        double oa = c.cross(d,a), ob = c.cross(d,b);
        double oc = a.cross(b,c), od = a.cross(b,d);
        if (sgn(oa)*sgn(ob) < 0 && sgn(oc)*sgn(od) < 0) return true;
        if (fabs(oa) < 1e-9 && onSegment(c,d,a)) return true;
        if (fabs(ob) < 1e-9 && onSegment(c,d,b)) return true;
        if (fabs(oc) < 1e-9 && onSegment(a,b,c)) return true;
        if (fabs(od) < 1e-9 && onSegment(a,b,d)) return true;
        return false;
    }
 
    static Point lineInter(const Point& a, const Point& b, const Point& c, const Point& d) {
        double a1 = (b-a).cross(c-a);
        double a2 = (b-a).cross(d-a);
        return (c*a2 - d*a1) / (a2 - a1);
    }
 
    // Returns: 0 -> outside, 1 -> on boundary, 2 -> inside
   static int inPolygon(const vector<Point>& poly, const Point& p) {
     bool inside = false;
     int n = poly.size();
     for (int i = 0; i < n; i++) {
        Point a = poly[i], b = poly[(i + 1) % n];
 
        // Check boundary
        if (onSegment(a, b, p)) return 1;  // On boundary
 
        // Ray casting (even–odd rule)
        bool cond = ((a.y > p.y) != (b.y > p.y)) &&
                    (p.x < (b.x - a.x) * (p.y - a.y) / (b.y - a.y) + a.x);
        if (cond) inside = !inside;
     }
     return inside ? 2 : 0;
    }
 
    static double polygonArea2(const vector<Point>& v) {
        double a = v.back().cross(v[0]);
        for (int i = 0; i + 1 < (int)v.size(); i++) a += v[i].cross(v[i + 1]);
        return a;
    }
 
    static Point polygonCenter(const vector<Point>& v) {
        Point res(0, 0);
        double A = 0;
        for (int i = 0, j = v.size() - 1; i < (int)v.size(); j = i++) {
            res = res + (v[i] + v[j]) * v[j].cross(v[i]);
            A += v[j].cross(v[i]);
        }
        return res / (A * 3);
    }

};


int32_t main(){
fastio;
lli tt=1;
}