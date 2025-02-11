// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from yaml-test.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "extern_interface_2.hpp"

namespace djinni_generated {

struct NativeExternInterface2 : ::djinni::JsInterface<::ExternInterface2, NativeExternInterface2> {
    using CppType = std::shared_ptr<::ExternInterface2>;
    using CppOptType = std::shared_ptr<::ExternInterface2>;
    using JsType = em::val;
    using Boxed = NativeExternInterface2;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeExternInterface2::fromCpp");
        return fromCppOpt(c);
    }


    struct JsProxy: ::djinni::JsProxyBase, ::ExternInterface2, ::djinni::InstanceTracker<JsProxy> {
        JsProxy(const em::val& v) : JsProxyBase(v) {}
        ::ExternRecordWithDerivings foo(const /*not-null*/ std::shared_ptr<::testsuite::TestHelpers> & i) override;
    };
};

} // namespace djinni_generated
