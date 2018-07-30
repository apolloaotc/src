#pragma once
#include <besiolib/privileged.hpp>

#include <vector>

namespace besio {
   /**
    *  Defines both the order, account name, and signing keys of the active set of producers.
    */
   struct producer_schedule {
      uint32_t                     version;   ///< sequentially incrementing version number
      std::vector<producer_key>    producers;
   };
} /// namespace besio
