#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000043 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000044 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005A System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005B System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005F T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000060 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[97] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[97] = 
{
	3167,
	3311,
	3311,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 21 } },
	{ 0x02000011, { 168, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000022, { 74, 2 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 95, 2 } },
	{ 0x06000032, { 108, 3 } },
	{ 0x06000037, { 120, 3 } },
	{ 0x0600003C, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[170] = 
{
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)3, 5906 },
	{ (Il2CppRGCTXDataType)2, 2663 },
	{ (Il2CppRGCTXDataType)2, 2222 },
	{ (Il2CppRGCTXDataType)3, 10083 },
	{ (Il2CppRGCTXDataType)2, 1744 },
	{ (Il2CppRGCTXDataType)2, 2229 },
	{ (Il2CppRGCTXDataType)3, 10118 },
	{ (Il2CppRGCTXDataType)2, 2224 },
	{ (Il2CppRGCTXDataType)3, 10095 },
	{ (Il2CppRGCTXDataType)2, 1674 },
	{ (Il2CppRGCTXDataType)3, 5907 },
	{ (Il2CppRGCTXDataType)2, 2680 },
	{ (Il2CppRGCTXDataType)2, 2231 },
	{ (Il2CppRGCTXDataType)3, 10130 },
	{ (Il2CppRGCTXDataType)2, 1757 },
	{ (Il2CppRGCTXDataType)2, 2239 },
	{ (Il2CppRGCTXDataType)3, 10294 },
	{ (Il2CppRGCTXDataType)2, 2235 },
	{ (Il2CppRGCTXDataType)3, 10205 },
	{ (Il2CppRGCTXDataType)2, 614 },
	{ (Il2CppRGCTXDataType)3, 26 },
	{ (Il2CppRGCTXDataType)3, 27 },
	{ (Il2CppRGCTXDataType)2, 1002 },
	{ (Il2CppRGCTXDataType)3, 3874 },
	{ (Il2CppRGCTXDataType)2, 615 },
	{ (Il2CppRGCTXDataType)3, 34 },
	{ (Il2CppRGCTXDataType)3, 35 },
	{ (Il2CppRGCTXDataType)2, 1009 },
	{ (Il2CppRGCTXDataType)3, 3879 },
	{ (Il2CppRGCTXDataType)2, 720 },
	{ (Il2CppRGCTXDataType)3, 781 },
	{ (Il2CppRGCTXDataType)3, 782 },
	{ (Il2CppRGCTXDataType)2, 1491 },
	{ (Il2CppRGCTXDataType)2, 1116 },
	{ (Il2CppRGCTXDataType)2, 1209 },
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)2, 1117 },
	{ (Il2CppRGCTXDataType)2, 1210 },
	{ (Il2CppRGCTXDataType)2, 1296 },
	{ (Il2CppRGCTXDataType)2, 1211 },
	{ (Il2CppRGCTXDataType)2, 1297 },
	{ (Il2CppRGCTXDataType)3, 3875 },
	{ (Il2CppRGCTXDataType)2, 881 },
	{ (Il2CppRGCTXDataType)2, 1202 },
	{ (Il2CppRGCTXDataType)2, 1203 },
	{ (Il2CppRGCTXDataType)2, 1293 },
	{ (Il2CppRGCTXDataType)3, 3873 },
	{ (Il2CppRGCTXDataType)2, 1201 },
	{ (Il2CppRGCTXDataType)2, 1292 },
	{ (Il2CppRGCTXDataType)3, 3872 },
	{ (Il2CppRGCTXDataType)2, 1115 },
	{ (Il2CppRGCTXDataType)2, 1208 },
	{ (Il2CppRGCTXDataType)2, 1114 },
	{ (Il2CppRGCTXDataType)3, 12383 },
	{ (Il2CppRGCTXDataType)3, 3407 },
	{ (Il2CppRGCTXDataType)2, 924 },
	{ (Il2CppRGCTXDataType)2, 1205 },
	{ (Il2CppRGCTXDataType)2, 1294 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)3, 5908 },
	{ (Il2CppRGCTXDataType)3, 5910 },
	{ (Il2CppRGCTXDataType)2, 463 },
	{ (Il2CppRGCTXDataType)3, 5909 },
	{ (Il2CppRGCTXDataType)3, 5918 },
	{ (Il2CppRGCTXDataType)2, 1677 },
	{ (Il2CppRGCTXDataType)2, 2225 },
	{ (Il2CppRGCTXDataType)3, 10096 },
	{ (Il2CppRGCTXDataType)3, 5919 },
	{ (Il2CppRGCTXDataType)2, 1244 },
	{ (Il2CppRGCTXDataType)2, 1320 },
	{ (Il2CppRGCTXDataType)3, 3885 },
	{ (Il2CppRGCTXDataType)3, 12348 },
	{ (Il2CppRGCTXDataType)2, 2236 },
	{ (Il2CppRGCTXDataType)3, 10206 },
	{ (Il2CppRGCTXDataType)3, 5911 },
	{ (Il2CppRGCTXDataType)2, 1676 },
	{ (Il2CppRGCTXDataType)2, 2223 },
	{ (Il2CppRGCTXDataType)3, 10084 },
	{ (Il2CppRGCTXDataType)3, 3884 },
	{ (Il2CppRGCTXDataType)3, 5912 },
	{ (Il2CppRGCTXDataType)3, 12347 },
	{ (Il2CppRGCTXDataType)2, 2232 },
	{ (Il2CppRGCTXDataType)3, 10131 },
	{ (Il2CppRGCTXDataType)3, 5925 },
	{ (Il2CppRGCTXDataType)2, 1678 },
	{ (Il2CppRGCTXDataType)2, 2230 },
	{ (Il2CppRGCTXDataType)3, 10119 },
	{ (Il2CppRGCTXDataType)3, 6384 },
	{ (Il2CppRGCTXDataType)3, 2678 },
	{ (Il2CppRGCTXDataType)3, 3886 },
	{ (Il2CppRGCTXDataType)3, 2677 },
	{ (Il2CppRGCTXDataType)3, 5926 },
	{ (Il2CppRGCTXDataType)3, 12349 },
	{ (Il2CppRGCTXDataType)2, 2240 },
	{ (Il2CppRGCTXDataType)3, 10295 },
	{ (Il2CppRGCTXDataType)3, 5939 },
	{ (Il2CppRGCTXDataType)2, 1680 },
	{ (Il2CppRGCTXDataType)2, 2238 },
	{ (Il2CppRGCTXDataType)3, 10208 },
	{ (Il2CppRGCTXDataType)3, 5940 },
	{ (Il2CppRGCTXDataType)2, 1247 },
	{ (Il2CppRGCTXDataType)2, 1323 },
	{ (Il2CppRGCTXDataType)3, 3890 },
	{ (Il2CppRGCTXDataType)3, 3889 },
	{ (Il2CppRGCTXDataType)2, 2227 },
	{ (Il2CppRGCTXDataType)3, 10098 },
	{ (Il2CppRGCTXDataType)3, 12354 },
	{ (Il2CppRGCTXDataType)2, 2237 },
	{ (Il2CppRGCTXDataType)3, 10207 },
	{ (Il2CppRGCTXDataType)3, 5932 },
	{ (Il2CppRGCTXDataType)2, 1679 },
	{ (Il2CppRGCTXDataType)2, 2234 },
	{ (Il2CppRGCTXDataType)3, 10133 },
	{ (Il2CppRGCTXDataType)3, 3888 },
	{ (Il2CppRGCTXDataType)3, 3887 },
	{ (Il2CppRGCTXDataType)3, 5933 },
	{ (Il2CppRGCTXDataType)2, 2226 },
	{ (Il2CppRGCTXDataType)3, 10097 },
	{ (Il2CppRGCTXDataType)3, 12353 },
	{ (Il2CppRGCTXDataType)2, 2233 },
	{ (Il2CppRGCTXDataType)3, 10132 },
	{ (Il2CppRGCTXDataType)3, 5946 },
	{ (Il2CppRGCTXDataType)2, 1681 },
	{ (Il2CppRGCTXDataType)2, 2242 },
	{ (Il2CppRGCTXDataType)3, 10297 },
	{ (Il2CppRGCTXDataType)3, 6385 },
	{ (Il2CppRGCTXDataType)3, 2680 },
	{ (Il2CppRGCTXDataType)3, 3892 },
	{ (Il2CppRGCTXDataType)3, 3891 },
	{ (Il2CppRGCTXDataType)3, 2679 },
	{ (Il2CppRGCTXDataType)3, 5947 },
	{ (Il2CppRGCTXDataType)2, 2228 },
	{ (Il2CppRGCTXDataType)3, 10099 },
	{ (Il2CppRGCTXDataType)3, 12355 },
	{ (Il2CppRGCTXDataType)2, 2241 },
	{ (Il2CppRGCTXDataType)3, 10296 },
	{ (Il2CppRGCTXDataType)3, 3882 },
	{ (Il2CppRGCTXDataType)3, 3883 },
	{ (Il2CppRGCTXDataType)3, 3893 },
	{ (Il2CppRGCTXDataType)2, 2687 },
	{ (Il2CppRGCTXDataType)2, 882 },
	{ (Il2CppRGCTXDataType)2, 1119 },
	{ (Il2CppRGCTXDataType)2, 2683 },
	{ (Il2CppRGCTXDataType)2, 1223 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)3, 3423 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)3, 4222 },
	{ (Il2CppRGCTXDataType)3, 4223 },
	{ (Il2CppRGCTXDataType)3, 4228 },
	{ (Il2CppRGCTXDataType)2, 1383 },
	{ (Il2CppRGCTXDataType)3, 4225 },
	{ (Il2CppRGCTXDataType)3, 12890 },
	{ (Il2CppRGCTXDataType)2, 899 },
	{ (Il2CppRGCTXDataType)3, 2670 },
	{ (Il2CppRGCTXDataType)1, 1183 },
	{ (Il2CppRGCTXDataType)2, 2691 },
	{ (Il2CppRGCTXDataType)3, 4224 },
	{ (Il2CppRGCTXDataType)1, 2691 },
	{ (Il2CppRGCTXDataType)1, 1383 },
	{ (Il2CppRGCTXDataType)2, 2742 },
	{ (Il2CppRGCTXDataType)2, 2691 },
	{ (Il2CppRGCTXDataType)3, 4229 },
	{ (Il2CppRGCTXDataType)3, 4227 },
	{ (Il2CppRGCTXDataType)3, 4226 },
	{ (Il2CppRGCTXDataType)2, 365 },
	{ (Il2CppRGCTXDataType)3, 2681 },
	{ (Il2CppRGCTXDataType)2, 472 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	97,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	170,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
