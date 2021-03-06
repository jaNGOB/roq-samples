/* Copyright (c) 2017-2021, Hans Erik Thrane */

#include "roq/samples/example-2/flags.h"

#include <absl/flags/flag.h>

#include <string>

#include "roq/literals.h"

using namespace roq::literals;

ABSL_FLAG(  //
    std::string,
    futures_exchange,
    "deribit"_s,
    "futures exchange"_sv);

ABSL_FLAG(  //
    std::string,
    futures_symbol,
    "BTC-PERPETUAL"_s,
    "futures symbol"_sv);

ABSL_FLAG(  //
    std::string,
    cash_exchange,
    "coinbase-pro"_s,
    "cash exchange"_sv);

ABSL_FLAG(  //
    std::string,
    cash_symbol,
    "BTC-USD"_s,
    "cash symbol"_sv);

ABSL_FLAG(  //
    double,
    alpha,
    0.2,
    "alpha used to compute exponential moving average"_sv);

namespace roq {
namespace samples {
namespace example_2 {

std::string_view Flags::futures_exchange() {
  static const std::string result = absl::GetFlag(FLAGS_futures_exchange);
  return result;
}

std::string_view Flags::futures_symbol() {
  static const std::string result = absl::GetFlag(FLAGS_futures_symbol);
  return result;
}

std::string_view Flags::cash_exchange() {
  static const std::string result = absl::GetFlag(FLAGS_cash_exchange);
  return result;
}

std::string_view Flags::cash_symbol() {
  static const std::string result = absl::GetFlag(FLAGS_cash_symbol);
  return result;
}

double Flags::alpha() {
  static const double result = absl::GetFlag(FLAGS_alpha);
  return result;
}

}  // namespace example_2
}  // namespace samples
}  // namespace roq
