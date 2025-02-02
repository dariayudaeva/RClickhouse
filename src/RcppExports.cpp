// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RClickhouse.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// fetch
DataFrame fetch(XPtr<Result> res, ssize_t n);
static SEXP _RClickhouse_fetch_try(SEXP resSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    Rcpp::traits::input_parameter< ssize_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fetch(res, n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_fetch(SEXP resSEXP, SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_fetch_try(resSEXP, nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// clearResult
void clearResult(XPtr<Result> res);
static SEXP _RClickhouse_clearResult_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    clearResult(res);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_clearResult(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_clearResult_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// hasCompleted
bool hasCompleted(XPtr<Result> res);
static SEXP _RClickhouse_hasCompleted_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(hasCompleted(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_hasCompleted(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_hasCompleted_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// getRowCount
size_t getRowCount(XPtr<Result> res);
static SEXP _RClickhouse_getRowCount_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(getRowCount(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_getRowCount(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_getRowCount_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// getRowsAffected
size_t getRowsAffected(XPtr<Result> res);
static SEXP _RClickhouse_getRowsAffected_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(getRowsAffected(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_getRowsAffected(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_getRowsAffected_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// getStatement
std::string getStatement(XPtr<Result> res);
static SEXP _RClickhouse_getStatement_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(getStatement(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_getStatement(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_getStatement_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// resultTypes
std::vector<std::string> resultTypes(XPtr<Result> res);
static SEXP _RClickhouse_resultTypes_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(resultTypes(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_resultTypes(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_resultTypes_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// connect
XPtr<Client> connect(String host, int port, String db, String user, String password, String compression);
static SEXP _RClickhouse_connect_try(SEXP hostSEXP, SEXP portSEXP, SEXP dbSEXP, SEXP userSEXP, SEXP passwordSEXP, SEXP compressionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< String >::type host(hostSEXP);
    Rcpp::traits::input_parameter< int >::type port(portSEXP);
    Rcpp::traits::input_parameter< String >::type db(dbSEXP);
    Rcpp::traits::input_parameter< String >::type user(userSEXP);
    Rcpp::traits::input_parameter< String >::type password(passwordSEXP);
    Rcpp::traits::input_parameter< String >::type compression(compressionSEXP);
    rcpp_result_gen = Rcpp::wrap(connect(host, port, db, user, password, compression));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_connect(SEXP hostSEXP, SEXP portSEXP, SEXP dbSEXP, SEXP userSEXP, SEXP passwordSEXP, SEXP compressionSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_connect_try(hostSEXP, portSEXP, dbSEXP, userSEXP, passwordSEXP, compressionSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// disconnect
void disconnect(XPtr<Client> conn);
static SEXP _RClickhouse_disconnect_try(SEXP connSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< XPtr<Client> >::type conn(connSEXP);
    disconnect(conn);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_disconnect(SEXP connSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_disconnect_try(connSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// select
XPtr<Result> select(XPtr<Client> conn, String query);
static SEXP _RClickhouse_select_try(SEXP connSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Client> >::type conn(connSEXP);
    Rcpp::traits::input_parameter< String >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(select(conn, query));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_select(SEXP connSEXP, SEXP querySEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_select_try(connSEXP, querySEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// insert
void insert(XPtr<Client> conn, String tableName, DataFrame df);
static SEXP _RClickhouse_insert_try(SEXP connSEXP, SEXP tableNameSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< XPtr<Client> >::type conn(connSEXP);
    Rcpp::traits::input_parameter< String >::type tableName(tableNameSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    insert(conn, tableName, df);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_insert(SEXP connSEXP, SEXP tableNameSEXP, SEXP dfSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_insert_try(connSEXP, tableNameSEXP, dfSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// validPtr
bool validPtr(SEXP ptr);
static SEXP _RClickhouse_validPtr_try(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(validPtr(ptr));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RClickhouse_validPtr(SEXP ptrSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RClickhouse_validPtr_try(ptrSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _RClickhouse_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("DataFrame(*fetch)(XPtr<Result>,ssize_t)");
        signatures.insert("void(*clearResult)(XPtr<Result>)");
        signatures.insert("bool(*hasCompleted)(XPtr<Result>)");
        signatures.insert("size_t(*getRowCount)(XPtr<Result>)");
        signatures.insert("size_t(*getRowsAffected)(XPtr<Result>)");
        signatures.insert("std::string(*getStatement)(XPtr<Result>)");
        signatures.insert("std::vector<std::string>(*resultTypes)(XPtr<Result>)");
        signatures.insert("XPtr<Client>(*connect)(String,int,String,String,String,String)");
        signatures.insert("void(*disconnect)(XPtr<Client>)");
        signatures.insert("XPtr<Result>(*select)(XPtr<Client>,String)");
        signatures.insert("void(*insert)(XPtr<Client>,String,DataFrame)");
        signatures.insert("bool(*validPtr)(SEXP)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _RClickhouse_RcppExport_registerCCallable() { 
    R_RegisterCCallable("RClickhouse", "_RClickhouse_fetch", (DL_FUNC)_RClickhouse_fetch_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_clearResult", (DL_FUNC)_RClickhouse_clearResult_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_hasCompleted", (DL_FUNC)_RClickhouse_hasCompleted_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_getRowCount", (DL_FUNC)_RClickhouse_getRowCount_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_getRowsAffected", (DL_FUNC)_RClickhouse_getRowsAffected_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_getStatement", (DL_FUNC)_RClickhouse_getStatement_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_resultTypes", (DL_FUNC)_RClickhouse_resultTypes_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_connect", (DL_FUNC)_RClickhouse_connect_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_disconnect", (DL_FUNC)_RClickhouse_disconnect_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_select", (DL_FUNC)_RClickhouse_select_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_insert", (DL_FUNC)_RClickhouse_insert_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_validPtr", (DL_FUNC)_RClickhouse_validPtr_try);
    R_RegisterCCallable("RClickhouse", "_RClickhouse_RcppExport_validate", (DL_FUNC)_RClickhouse_RcppExport_validate);
    return R_NilValue;
}
