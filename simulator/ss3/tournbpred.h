#ifndef TOURNBPRED_H
#define TOURNBPRED_H

#define dassert(a) assert(a)

#include <stdio.h>
#include <stdbool.h>

#define LHistMask 0x0003FF
#define LPredMask 0x000003FF
#define GPredMask 0x00000FFF
#define CPredMask 0x00000FFF
#define PHistMask 0x00000FFF

struct alpha_Bpred {
  int LocalHist[1024];    // size of PC = bits, NEED TO CHECK!
  int LocalPred[1024];    // 10 bits
  int GlobalPred[4096];   // 12 bits
  int ChoicePred[4096];   // 12 bits
  unsigned int PathHist;  // 12 bits
	int LHistory;
	bool is_global;
  bool BPred;             
}alpha;

#endif /* BPRED_H */
