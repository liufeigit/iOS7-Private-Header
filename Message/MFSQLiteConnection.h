/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface MFSQLiteConnection : NSObject

{

    NSString *_path;

    struct sqlite3 *_db;

    NSString *_databaseName;

    struct __CFDictionary *_statementCache;

    void *_ICUSearchContext;

    void *_CPSearchContext;

    int _transactionType;

    unsigned long long _transactionCount;

}



- (const char *)_vfsModuleName;

- (int)beginTransaction;

- (int)beginTransactionWithType:(int)arg1;

- (void)close;

- (int)commitTransaction;

@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;

- (void)dealloc;

- (void)flush;

- (id)initWithPath:(id)arg1 databaseName:(id)arg2;

- (_Bool)isOpen;

- (int)open;

- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1;

- (int)rollbackTransaction;



@end


