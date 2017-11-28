#include "Exceptions.hpp"
#include "SHA256.hpp"

#include "openssl/sha.h"

namespace xPlat {
    bool SHA256::ComputeHash(
        /*in*/ std::uint8_t *buffer, 
        /*in*/ std::uint32_t cbBuffer, 
        /*inout*/ std::vector<uint8_t>& hash)
    {
        hash.resize(SHA256_DIGEST_LENGTH);
        ::SHA256(buffer, cbBuffer, hash.data());
        return true;
    }
} // namespace xPlat {