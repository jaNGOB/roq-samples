/* Copyright (c) 2017-2021, Hans Erik Thrane */

#pragma once

#include "roq/service.h"
#include "roq/span.h"

namespace roq {
namespace samples {
namespace example_2 {

// application

class Controller final : public Service {
 public:
  using Service::Service;

 protected:
  int main_helper(const roq::span<std::string_view> &args);
  int main(int argc, char **argv) override;
};

}  // namespace example_2
}  // namespace samples
}  // namespace roq
