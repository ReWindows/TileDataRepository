#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 20 member(s).
namespace StateRepository {
class Logging {
public:
    class WER;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugBreak@Logging@StateRepository@@YAXXZ
    void DebugBreak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLog@Logging@StateRepository@@YAJ_N@Z
    long EnableLog(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastBusySnapshot@Logging@StateRepository@@YAXPEAUsqlite3@@PEBDPEAUsqlite3_stmt@@@Z
    void FailFastBusySnapshot(sqlite3*, char const *, sqlite3_stmt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogBusyOrLockedTimeoutExceeded@Logging@StateRepository@@YAJJPEAUsqlite3@@PEBDAEBU_GUID@@@Z
    long LogBusyOrLockedTimeoutExceeded(long, sqlite3*, char const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogToFile@Logging@StateRepository@@YAXW4Severity@12@HPEBD@Z
    void LogToFile(int, int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerCritical@Logging@StateRepository@@YAXHPEBD@Z
    void LoggerCritical(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerError@Logging@StateRepository@@YAXHPEBD@Z
    void LoggerError(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerInformation@Logging@StateRepository@@YAXHPEBD@Z
    void LoggerInformation(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerProfile@Logging@StateRepository@@YAXPEAXPEBDI@Z
    void LoggerProfile(void *, char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerVerbose@Logging@StateRepository@@YAXHPEBD@Z
    void LoggerVerbose(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoggerWarning@Logging@StateRepository@@YAXHPEBD@Z
    void LoggerWarning(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportDatabaseCorruption@Logging@StateRepository@@YAJJPEBDW4Partition@2@0PEAUsqlite3@@0_K3@Z
    long ReportDatabaseCorruption(long, char const *, int, char const *, sqlite3*, char const *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportDatabaseCorruption@Logging@StateRepository@@YAJJPEBDW4Partition@2@PEAUsqlite3@@0_K3@Z
    long ReportDatabaseCorruption(long, char const *, int, sqlite3*, char const *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeverityToString@Logging@StateRepository@@YAPEBDW4Severity@12@@Z
    char const * SeverityToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@Logging@StateRepository@@YAJW4InitializeFlags@12@@Z
    long Shutdown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLogToFile@Logging@StateRepository@@YAXPEBD@Z
    void WriteLogToFile(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FailFastBusySnapshot_Statement@Logging@StateRepository@@YAXPEAUsqlite3@@PEAUsqlite3_stmt@@IAEAPEBDAEAI@Z
    void _FailFastBusySnapshot_Statement(sqlite3*, sqlite3_stmt *, unsigned int, char const * &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteLogToFile@Logging@StateRepository@@YAJPEBD@Z
    long _WriteLogToFile(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?sqliteLogCallback@Logging@StateRepository@@YAXPEAXHPEBD@Z
    void sqliteLogCallback(void *, int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?sqliteProfileCallback@Logging@StateRepository@@YAXPEAXPEBD_K@Z
    void sqliteProfileCallback(void *, char const *, uint64_t);
};
} // namespace StateRepository
