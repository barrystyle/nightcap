#include <crypto/dag.h>

uint256 CBlockHeader::GetPoWHash() const
{
    uint256 thash;
    CDAGSystem sys;
    CHashimotoResult res = sys.Hashimoto(*this);
    return res.GetResult();
}
