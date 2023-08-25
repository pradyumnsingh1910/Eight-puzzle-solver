#ifndef __BFS_FRINGE_POLICY_H__
#define __BFS_FRINGE_POLICY_H__

#include "FringePolicy/FringePolicy.h"

class BFSFringePolicy : public FringePolicy {
    Fringe::sptr makeFringe() const override;
};

#endif
