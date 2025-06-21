// problem -- https://codeforces.com/contest/2121/problem/G
//editorial


// number of segment of len x is n-x+1
// to calculate sum of all segment    // 0 based
//  subarray starting with v[i] there are n-i  
//  subarray not starting with v[i] there are (n-i)*i
// so total=(i+1)*(n-i) number of occurenve across all subarry of v[i]

// now let say we want to find abs(pref[r]-pref[l-1]) across all subarray
// sort pref  now summation pref[r]-pref[l-1];
//  let say its pref[i] so it will  go i times  positive and n-i time negative 
