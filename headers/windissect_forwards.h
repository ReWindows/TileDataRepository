#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class Common; 
namespace Microsoft { namespace WRL { class Details; } } 
class RoVariant; 
class StateRepository; 
namespace Windows { namespace Internal { class Tiles; } } 
class ActivityData; class AgileGitPtr; class AutoStateRepository; class AutoStateRepository_ShutdownScopeExit; class AutoStubBias; class CMarshaledInterface; class CallerIdentity; class Common; class DelegateInvokeHelper; class Destroy; class EventRegistrationToken; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HKEY__; class HSTRING__; class IAppxManifestReader; class IClassFactory; class IInspectable; class IRpcOptions; class IStream; class ITileInfo; class IUnknown; class IWeakReference; class IXMLDOMDocument; class IXMLDOMElement; class IXMLDOMNode; class IXMLDOMNodeList; class LocalFree; class ReleaseSRWLockExclusive; class RoVariant; class RpcOptionsHelper; class RtlReleaseSRWLockExclusive; class RtlReleaseSRWLockShared; class StateRepository; class SysFreeString; class WilFailureReport; class WilFailureReportInformation; class _CONTEXT; class _EXCEPTION_RECORD; class _FILETIME; class _FILE_IO_PRIORITY_HINT_INFORMATION; class _GUID; class _MEMORY_PRIORITY_INFORMATION; class _RO_REGISTRATION_COOKIE; class _RTL_AVL_TABLE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _SECURITY_ATTRIBUTES; class _SYSTEMTIME; class _THREAD_POWER_THROTTLING_STATE; class _TOKEN_USER; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TlgReflectorTag_Param0IsProviderType; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class lambda_07757962664ad4a6d63a2b61422ae253; class lambda_0b7a9cc4b4e9cedbc3c9bb0d76bd1888; class lambda_12a1a5438238ea3cb35db6d9b8790629; class lambda_24e10aec21356b5e060cc30a98bb60d5; class lambda_2c746a2f5f564d65987cabdaf035c2b3; class lambda_2cc7d4c7a1e14d88f3c30fec6fb1ed1a; class lambda_420f424ca95c98c4358ba8a12ed5a986; class lambda_4336fa9095c5ab877824262f51017ea3; class lambda_486d82a5049486fb885aeb7b35505f02; class lambda_547a800485dedfa43c61db1bf0dff61b; class lambda_598fe4d90834332ccbffa1db261e8f64; class lambda_6bbe98617c0e67c56a000c8326cc3de2; class lambda_93205544b35278c791e9a62a86e2de97; class lambda_a2816d5432021e91562d286b57e4e2cd; class lambda_bb7fb9e5a306c5c20e98d55075d3e596; class lambda_c015fd724c52ad2fcc1cd985eaa9fabb; class lambda_c2fd7731c5ae0d37e65ea73be67c0f1b; class lambda_d18f54e04f0faff74aa88b663d824290; class lambda_d9b5b95e3d01da4cd4aeccd6590ecae8; class lambda_e8a99f701404afbb18442586450633ed; class lambda_eb46fde7a85503e3862c80232eaa8a71; class lambda_fe718337787c493ce2d833414db25eba; class sqlite3; class sqlite3_stmt; class thunk; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace IPrimaryTileUserNotifier { namespace IPrimaryTileUserChangedEventArgs { namespace Internal { class IPrimaryTileUserChangedEventArgs; } } } 
namespace IPrimaryTileUserNotifier { namespace Internal { namespace StateRepository { class IPrimaryTileUserNotifier; } } } 
namespace Microsoft { namespace WRL { class AgileRef; class ComPtr; class Details; class EventSource; class FtmBase; class InvokeModeOptions; class RuntimeClassFlags; class SimpleSealedActivationFactory; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HString; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; class SyncLockShared; } } } } 
namespace TileDataLayer { namespace Migration { class ITdlMigration; class Statics; } } 
namespace Windows { } 
namespace Windows { namespace ApplicationModel { class AppInfo; class IAppInfo; } } 
namespace Windows { namespace ApplicationModel { namespace Internal { class IAppInfoInternalStatics; } } } 
namespace Windows { namespace Foundation { namespace Collections { class Detail; } } } 
namespace Windows { namespace Foundation { namespace Collections { namespace Internal { class detail; } } } } 
namespace Windows { namespace Internal { class ComTaskPoolHandler; class IAsyncFireCompletion; class IComPoolTask; class INilDelegate; class String; class StringReference; class Tiles; } } 
namespace Windows { namespace Internal { namespace ComTaskPool { class CTaskWrapper; } } } 
namespace Windows { namespace Internal { namespace StateRepository { class IApplication; class IPackageStatics; class IPrimaryTileUser; class IPrimaryTileUserChangedEventArgs; class IPrimaryTileUserNotifier; class IPrimaryTileUserStatics; class ISecondaryTileUserChangedEventArgs; class ISecondaryTileUserNotifier; class ISecondaryTileUserStatics; class ISecondaryTileView; class ISecondaryTileViewStatics; class ITileView; class ITileViewQueryFilter; class IUser; class PrimaryTileUserChangedEventArgs; class PrimaryTileUserNotifier; class SecondaryTileUserChangedEventArgs; class SecondaryTileUserNotifier; class SecondaryTileView; } } } 
namespace Windows { namespace System { class IUser; } } 
namespace Windows { namespace System { namespace Internal { class ISignInStateManager; class IUserManagerStatics; } } } 
namespace XWinRT { class ComLock; class IntVersionTag; class SerializingLockPolicy; } 
namespace XWinRT { namespace detail { class AcquireRead; class AcquireWrite; class AtomicUpdates; class LockHolder; } } 
namespace std { class bad_alloc; class bad_array_new_length; class exception; class nothrow_t; class nullptr_t; } 
namespace wil { class ActivityBase; class ActivityThreadWatcher; class CallContextInfo; class FailureInfo; class ResultException; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureStateManager; class IFailureCallback; class ResultStatus; class RevertImpersonateToken; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class shared_object; class token_info_deleter; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

