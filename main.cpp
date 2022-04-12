#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol760;

/*
Input:
A = [12, 28, 46, 32, 50]
B = [50, 12, 32, 46, 28]
output: [1, 4, 3, 2, 0]
*/

tuple<vector<int>, vector<int>, vector<int>> testFixture1()
{
  return make_tuple(vector<int>{12, 28, 46, 32, 50},
                    vector<int>{50, 12, 32, 46, 28},
                    vector<int>{1, 4, 3, 2, 0});
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << Util::toString(get<2>(f)) << endl;
  Solution sol;
  cout << "result: " << Util::toString(sol.createMap(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  return 0;
}