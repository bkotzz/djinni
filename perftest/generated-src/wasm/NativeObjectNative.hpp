// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from djinni_perf_benchmark.djinni

#pragma once

#include "ObjectNative.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeObjectNative : ::djinni::JsInterface<::snapchat::djinni::benchmark::ObjectNative, NativeObjectNative> {
    using CppType = std::shared_ptr<::snapchat::djinni::benchmark::ObjectNative>;
    using CppOptType = std::shared_ptr<::snapchat::djinni::benchmark::ObjectNative>;
    using JsType = em::val;
    using Boxed = NativeObjectNative;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeObjectNative::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static void baseline(const CppType& self);

};

} // namespace djinni_generated
