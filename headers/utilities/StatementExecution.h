#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TileDataRepository.dll by Windissect. 8 member(s).
namespace StateRepository {
class StatementExecution {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBind@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEAVStatement@2@@Z
    long PrepareAndBind(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndDelete@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1_J@Z
    long PrepareAndBindAndDelete(WindissectOpaque &, char const *, char const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndExists@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1_JAEA_N@Z
    long PrepareAndBindAndExists(WindissectOpaque &, char const *, char const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndExistsBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEA_N@Z
    long PrepareAndBindAndExistsBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndFindBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEAVStatement@2@@Z
    long PrepareAndBindAndFindBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndGetBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEAVStatement@2@@Z
    long PrepareAndBindAndGetBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndTryGet@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1_JAEAVStatement@2@AEA_N@Z
    long PrepareAndBindAndTryGet(WindissectOpaque &, char const *, char const *, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndTryGetBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEAVStatement@2@AEA_N@Z
    long PrepareAndBindAndTryGetBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &, bool &);
};
} // namespace StateRepository
