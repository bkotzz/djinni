// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from duration.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "test_duration.hpp"

namespace djinni_generated {

struct NativeTestDuration : ::djinni::JsInterface<::testsuite::TestDuration, NativeTestDuration> {
    using CppType = std::shared_ptr<::testsuite::TestDuration>;
    using CppOptType = std::shared_ptr<::testsuite::TestDuration>;
    using JsType = em::val;
    using Boxed = NativeTestDuration;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeTestDuration::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static std::string hoursString(const em::val& w_dt);
    static std::string minutesString(const em::val& w_dt);
    static std::string secondsString(const em::val& w_dt);
    static std::string millisString(const em::val& w_dt);
    static std::string microsString(const em::val& w_dt);
    static std::string nanosString(const em::val& w_dt);
    static em::val hours(int32_t w_count);
    static em::val minutes(int32_t w_count);
    static em::val seconds(int32_t w_count);
    static em::val millis(int32_t w_count);
    static em::val micros(int32_t w_count);
    static em::val nanos(int32_t w_count);
    static em::val hoursf(double w_count);
    static em::val minutesf(double w_count);
    static em::val secondsf(double w_count);
    static em::val millisf(double w_count);
    static em::val microsf(double w_count);
    static em::val nanosf(double w_count);
    static em::val box(int64_t w_count);
    static int64_t unbox(const em::val& w_dt);

};

} // namespace djinni_generated
