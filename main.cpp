#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
vs S;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  S = vs(n);
  for (auto&& x : S) {
    cin >> x;
  }

  auto is_inc = true;
  auto is_dec = true;
  for (auto i = 1; i < n; ++i) {
    if (S[i - 1] < S[i]) {
      is_dec = false;
    } else {
      is_inc = false;
    }
  }

  if (is_inc) {
    cout << "INCREASING";
    return 0;
  }

  if (is_dec) {
    cout << "DECREASING";
    return 0;
  }

  cout << "NEITHER";

  return 0;
}