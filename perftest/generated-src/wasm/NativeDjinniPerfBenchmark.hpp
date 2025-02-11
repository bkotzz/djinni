// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from djinni_perf_benchmark.djinni

#pragma once

#include "djinni_perf_benchmark.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeDjinniPerfBenchmark : ::djinni::JsInterface<::snapchat::djinni::benchmark::DjinniPerfBenchmark, NativeDjinniPerfBenchmark> {
    using CppType = std::shared_ptr<::snapchat::djinni::benchmark::DjinniPerfBenchmark>;
    using CppOptType = std::shared_ptr<::snapchat::djinni::benchmark::DjinniPerfBenchmark>;
    using JsType = em::val;
    using Boxed = NativeDjinniPerfBenchmark;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeDjinniPerfBenchmark::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static em::val getInstance();
    static int64_t cppTests(const CppType& self);
    static void baseline(const CppType& self);
    static void argString(const CppType& self, const std::string& w_s);
    static void argBinary(const CppType& self, const em::val& w_b);
    static void argDataRef(const CppType& self, const em::val& w_r);
    static void argDataView(const CppType& self, const em::val& w_d);
    static void argEnumSixValue(const CppType& self, int32_t w_e);
    static void argRecordSixInt(const CppType& self, const em::val& w_r);
    static void argListInt(const CppType& self, const em::val& w_v);
    static void argArrayInt(const CppType& self, const em::val& w_v);
    static void argObject(const CppType& self, const em::val& w_c);
    static void argListObject(const CppType& self, const em::val& w_l);
    static void argListRecord(const CppType& self, const em::val& w_l);
    static void argArrayRecord(const CppType& self, const em::val& w_a);
    static int64_t returnInt(const CppType& self, int64_t w_i);
    static std::string returnString(const CppType& self, int32_t w_size);
    static em::val returnBinary(const CppType& self, int32_t w_size);
    static em::val returnObject(const CppType& self);
    static em::val returnListInt(const CppType& self, int32_t w_size);
    static em::val returnArrayInt(const CppType& self, int32_t w_size);
    static em::val returnListObject(const CppType& self, int32_t w_size);
    static em::val returnListRecord(const CppType& self, int32_t w_size);
    static em::val returnArrayRecord(const CppType& self, int32_t w_size);
    static std::string roundTripString(const CppType& self, const std::string& w_s);

};

} // namespace djinni_generated
