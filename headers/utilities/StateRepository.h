#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 4 member(s).
class StateRepository {
public:
    class AutoEnableTriggersScopeExit;
    class AutoRepository;
    class AutoRepositoryShutdownScopeExit;
    class AutoTransaction;
    class Blob;
    class ChangeTracking;
    class Database;
    class DatabaseCache;
    class DatabaseCacheEntry;
    class DatabaseCacheSingleton;
    class DatabaseTriggers;
    class Globals;
    class Logging;
    class Security;
    class Statement;
    class StatementCache;
    class StatementCacheEntry;
    class StatementExecution;
    class Text;
    class Time;
    class Utf16String;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartitionDatabaseFilename@StateRepository@@YAJW4Partition@1@PEAPEAG@Z
    long GetPartitionDatabaseFilename(int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerInitialized@StateRepository@@YAXXZ
    void LoggerInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerShutdown@StateRepository@@YAXXZ
    void LoggerShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@StateRepository@@YAJP6AXXZW4InitializeFlags@1@@Z
    long Shutdown(void ( *)(void), int);
};
