#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iterator>
using namespace sol760;
using namespace std;

/*Takeaways
  - build a map that maps the value to the index for Vector B
  - iterate through each number in A and look for the
    corresponding index in B using the number
    from A as the key when consulting the map
*/

vector<int> Solution::createMap(vector<int> &A, vector<int> &B)
{
  const int N = A.size();
  auto valIdx = unordered_map<int, int>();
  /* key is the number and value is
     the index for that number in
     the B vector
  */
  for (auto i = 0; i < N; i++)
    valIdx[B[i]] = i;

  auto result = vector<int>();

  for (auto a : A)
    result.push_back(valIdx[a]);

  return result;
}