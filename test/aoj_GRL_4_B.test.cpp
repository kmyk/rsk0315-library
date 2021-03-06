#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B" 
#define IGNORE  /* requires a special judge */
// @ignore

#include <cstdio>

#include "Graph/adjacency_list.cpp"
#include "Graph/topological_sort.cpp"

int main() {
  size_t n, m;
  scanf("%zu %zu", &n, &m);

  adjacency_list<weighted_edge<int>, directed_tag> g(n);
  for (size_t i = 0; i < m; ++i) {
    size_t u, v;
    scanf("%zu %zu", &u, &v);
    g.emplace(u, v, 1);
  }

  auto ord = topological_sort(g);
  for (size_t i = 0; i < n; ++i)
    printf("%zu\n", ord[i]);
}
