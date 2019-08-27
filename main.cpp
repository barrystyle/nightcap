#include <main.h>
#include <crypto/block.h>

int main()
{
        unsigned char blkheader[100];
        hex2bin("0001002025261447a590dcab7390e0152cb29387833f4a2279bd518e81eae57e55b2ec4df40d39bfdb0965dc9e6d5ce7d0d52d6fe15d814364b24234f0b6e07b7d3c5dcfc569655d7c931a1c06b9abcccfcd62524b9dc530dda240d3a917c08420cf0200", 200, blkheader);

        CBlockHeader block;
        memcpy(reinterpret_cast<unsigned char*>(&block), blkheader, 100);

 
	return(0);
}
