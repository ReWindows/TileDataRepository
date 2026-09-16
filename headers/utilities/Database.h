#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 26 member(s).
namespace StateRepository {
class Database {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@Database@StateRepository@@QEAAJAEAVStatement@2@@Z
    long AddToCache(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransaction@Database@StateRepository@@QEAAJAEBU_GUID@@AEAVAutoPriority@ResourcePriority@2@P6AJPEAX@Z2@Z
    long BeginTransaction(_GUID const &, WindissectOpaque &, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransaction@Database@StateRepository@@QEAAJAEBU_GUID@@P6AJPEAX@Z1@Z
    long BeginTransaction(_GUID const &, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransaction@Database@StateRepository@@QEAAJW4BeginTransactionLock@12@AEBU_GUID@@P6AJPEAX@Z2@Z
    long BeginTransaction(int, _GUID const &, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@Database@StateRepository@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@Database@StateRepository@@QEAAJXZ
    long Commit();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Database@StateRepository@@QEAA@XZ
    Database();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@Database@StateRepository@@QEAAJPEBDP6AJPEAX@Z1@Z
    long Execute(char const *, long ( *)(void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChanges@Database@StateRepository@@QEBAHXZ
    int GetChanges() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilename@Database@StateRepository@@QEBAPEBDPEBD@Z
    char const * GetFilename(char const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInsertRowID@Database@StateRepository@@QEBA_JXZ
    int64_t GetLastInsertRowID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInAutoCommitMode@Database@StateRepository@@QEAA_NXZ
    bool IsInAutoCommitMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStatistics@Database@StateRepository@@QEAAJXZ
    long LogStatistics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareFromCache@Database@StateRepository@@QEAAJPEBDAEAVStatement@2@@Z
    long PrepareFromCache(char const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Database@StateRepository@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rollback@Database@StateRepository@@QEAAJXZ
    long Rollback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkStatements@Database@StateRepository@@QEAAJP6AXAEAV12@AEAVStatement@2@PEAX@Z2@Z
    long WalkStatements(void ( *)(WindissectOpaque &, WindissectOpaque &, void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_exec@Database@StateRepository@@SAJPEAUsqlite3@@PEBDP6AHPEAXHPEAPEAD3@Z23W4Partition@2@P6AJ2@Z2@Z
    static long dal_exec(sqlite3*, char const *, int ( *)(void *, int, char * *, char * *), void *, char * *, int, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?dal_prepare_v2@Database@StateRepository@@SAJPEAUsqlite3@@PEBDHPEAPEAUsqlite3_stmt@@PEAPEBD@Z
    static long dal_prepare_v2(sqlite3*, char const *, int, sqlite3_stmt * *, char const * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Database@StateRepository@@QEAA@XZ
    ~Database();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBusyStatements@Database@StateRepository@@CAJPEAUsqlite3@@_NPEAI@Z
    static long CheckBusyStatements(sqlite3*, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBusyStatementsWalker@Database@StateRepository@@CAXAEAV12@AEAVStatement@2@PEAX@Z
    static void CheckBusyStatementsWalker(WindissectOpaque &, WindissectOpaque &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastIfNestingTransaction@Database@StateRepository@@CAXPEAUsqlite3@@@Z
    static void FailFastIfNestingTransaction(sqlite3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatSql@Database@StateRepository@@CAJPEAD_KPEBDAEBU_GUID@@@Z
    static long FormatSql(char *, uint64_t, char const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Profile@Database@StateRepository@@AEBAXPEBD_K@Z
    void Profile(char const *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyResourcePriorities@Database@StateRepository@@AEAAXAEBU_GUID@@PEBD@Z
    void VerifyResourcePriorities(_GUID const &, char const *);
};
} // namespace StateRepository
