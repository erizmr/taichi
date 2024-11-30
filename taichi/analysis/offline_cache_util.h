#pragma once

#include <string>
#include <vector>

#include "taichi/rhi/arch.h"

namespace taichi::lang {

struct CompileConfig;
struct DeviceCapabilityConfig;
class Program;
class IRNode;
class SNode;
class Kernel;

std::string get_hashed_offline_cache_key_of_snode(const SNode *snode);
std::string get_hashed_offline_cache_key(const CompileConfig &config,
                                         const DeviceCapabilityConfig &caps,
                                         Kernel *kernel);
// void gen_offline_cache_key(IRNode *ast, std::ostream *os);
void gen_offline_cache_key(IRNode *ast, std::vector<char> *string_holder, std::ostream *os);

}  // namespace taichi::lang
