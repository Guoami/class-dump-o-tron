//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSString;

@interface SGSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    struct _opaque_pthread_mutex_t _lock;
    int _transactionDepth;
    NSString *_filename;
    _Bool _enabled;
    NSCache *_queryCache;
}

+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (void)disableDb;
- (void)enableDb;
- (id)description;
- (void)transaction:(CDUnknownBlockType)arg1;
- (_Bool)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)errorMessage:(int)arg1;
@property(readonly, nonatomic) struct sqlite3 *handle;
- (void)dealloc;
- (id)initWithFilename:(id)arg1 error:(id *)arg2;

@end
