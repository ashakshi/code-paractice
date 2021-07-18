#include<bits/stdc++.h>
#define M 1000000007
using namespace std;

int parent[10001];

struct edge
{
int a, b, w;
};

edge ar[100001];

bool comp (edge a, edge b)
{
if (a.w < b.w)
return true;

return false;
}

void merge (int a, int b)
{
parent[a] = b;
}

int find (int a)
{
if (parent[a] == -1)
return a;

else
return parent[a] = find (parent[a]);

}

int main ()
{
int n, m, a, b, w;

long long  sum = 0;

cin >> n >> m;

for (int i = 0; i < m; i++)
cin >> ar[i].a >> ar[i].b >> ar[i].w;

sort (ar, ar + m, comp);

for (int i = 0; i < n; i++)
{
parent[i] = -1;
}

for (int i = 0; i < m; i++)
{
a = find (ar[i].a);
b = find (ar[i].b);

if (a != b)
{
sum += ar[i].w;
merge (a, b);
}
}

cout << sum;

}






