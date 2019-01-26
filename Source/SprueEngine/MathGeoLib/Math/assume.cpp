#include "../FactoryMethods.h"
// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "assume.h"

using namespace System;
using namespace System::Runtime::InteropServices;

// <summary>Assigns mathBreakOnAssume = isEnabled;</summary>
// DEBUG: void SetMathBreakOnAssume(bool isEnabled)
void SprueBind::Math::assume::SetMathBreakOnAssume(bool isEnabled)
{
    ::math::SetMathBreakOnAssume(isEnabled);
}

// <summary>
// <para>Returns the current state of the math break-on-assume flag.</para>
// <para>The default startup value for this flag is false.</para>
// </summary>
// DEBUG: bool MathBreakOnAssume()
bool SprueBind::Math::assume::MathBreakOnAssume()
{
    auto __ret = ::math::MathBreakOnAssume();
    return __ret;
}

// <summary>
// <para>Breaks to debugger if math break-on-assume flag</para>
// <para>Returns the current state of the math break-on-assume flag.</para>
// </summary>
// DEBUG: bool AssumeFailed()
bool SprueBind::Math::assume::AssumeFailed()
{
    auto __ret = ::math::AssumeFailed();
    return __ret;
}

System::String^ SprueBind::Math::assume::ObjToString(System::String^ obj)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(obj);
    auto __ret = ::math::ObjToString(__arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

System::String^ SprueBind::Math::assume::ObjToString([System::Runtime::InteropServices::In, System::Runtime::InteropServices::Out] float% obj)
{
    float __arg0 = obj;
    auto __ret = ::math::ObjToString(__arg0);
    obj = __arg0;
    return clix::marshalString<clix::E_UTF8>(__ret);
}

System::String^ SprueBind::Math::assume::ObjToString([System::Runtime::InteropServices::In, System::Runtime::InteropServices::Out] int% obj)
{
    int __arg0 = obj;
    auto __ret = ::math::ObjToString(__arg0);
    obj = __arg0;
    return clix::marshalString<clix::E_UTF8>(__ret);
}

System::String^ SprueBind::Math::assume::ObjToString([System::Runtime::InteropServices::In, System::Runtime::InteropServices::Out] bool% obj)
{
    bool __arg0 = obj;
    auto __ret = ::math::ObjToString(__arg0);
    obj = __arg0;
    return clix::marshalString<clix::E_UTF8>(__ret);
}

System::String^ SprueBind::Math::assume::ObjToString([System::Runtime::InteropServices::In, System::Runtime::InteropServices::Out] unsigned int% obj)
{
    u32 __arg0 = (::u32)(::uint32_t)obj;
    auto __ret = ::math::ObjToString(__arg0);
    obj = __arg0;
    return clix::marshalString<clix::E_UTF8>(__ret);
}

