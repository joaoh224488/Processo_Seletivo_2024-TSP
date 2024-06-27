#ifndef LOCAL_SEARCH_H
#define LOCAL_SEARCH_H

#include "solution.h"

void RVND(Solution &s);

bool bestImprovementSwap(Solution &s);


Solution solve();

#endif // LOCAL_SEARCH_H