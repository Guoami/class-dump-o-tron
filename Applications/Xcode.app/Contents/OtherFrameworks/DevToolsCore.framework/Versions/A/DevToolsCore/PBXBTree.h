//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableData, NSRecursiveLock;

@interface PBXBTree : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableData *_store;
    NSRecursiveLock *_mutex;
    CDUnknownFunctionPointerType _compare;
    CDUnknownFunctionPointerType _printValue;
    const void *_context;
    _pbxbtreeheader_5892dcee *_header;
    _pbxbtreecursor_4f04ce2b _cursor;
}

+ (void)initialize;
- (const void *)valueForKey:(const void *)arg1;
- (BOOL)containsValue:(const void *)arg1 forKey:(const void *)arg2;
- (void)_deleteCurrentValue;
- (void)_deleteValueAtCursor:(_pbxbtreecursor_805e2d1e)arg1;
- (void)_deleteEntryAtCursor:(_pbxbtreecursor_805e2d1e)arg1;
- (BOOL)deleteValue:(const void *)arg1 forKey:(const void *)arg2;
- (BOOL)deleteValueForKey:(const void *)arg1;
- (void)insertValue:(const void *)arg1 forKey:(const void *)arg2;
- (id)enumerator;
- (void)_unlock:(_pbxbtreecursor_805e2d1e *)arg1;
- (void)_unlock;
- (void)_lock:(_pbxbtreecursor_805e2d1e *)arg1;
- (void)_lock;
- (void)_insertValue:(const void *)arg1 atCursor:(_pbxbtreecursor_805e2d1e)arg2;
- (void)_insertEntry:(struct _pbxbtreeentry)arg1 atCursor:(_pbxbtreecursor_805e2d1e)arg2;
- (unsigned long long)_newLeaf;
- (unsigned long long)_newNode;
- (void)_checkFreeList:(BOOL)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setPrintValueFunction:(CDUnknownFunctionPointerType)arg1;
- (CDUnknownFunctionPointerType)printValueFunction;
- (BOOL)writeDataToFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1 comparisonFunction:(CDUnknownFunctionPointerType)arg2 comparisonContext:(const void *)arg3;
- (id)initMaxWidth:(unsigned long long)arg1 lookupFailedValue:(const void *)arg2 keepUnique:(BOOL)arg3 comparisonFunction:(CDUnknownFunctionPointerType)arg4 comparisonContext:(const void *)arg5;
- (const void *)nextValueForKey:(const void *)arg1 at:(_pbxbtreecursor_805e2d1e *)arg2;
- (const void *)_nextValueForKey:(const void *)arg1;
- (const void *)lastValue:(_pbxbtreecursor_805e2d1e *)arg1;
- (const void *)_lastValue;
- (const void *)previousValue:(_pbxbtreecursor_805e2d1e *)arg1;
- (const void *)nextValue:(_pbxbtreecursor_805e2d1e *)arg1;
- (const void *)firstValue:(_pbxbtreecursor_805e2d1e *)arg1;
- (const void *)_firstValue;
- (const void *)valueForKey:(const void *)arg1 at:(_pbxbtreecursor_805e2d1e *)arg2;
- (id)deepDescription;
- (id)deepDescriptionOfNode:(unsigned long long)arg1 atDepth:(unsigned long long)arg2;
- (id)shortDescriptionOfNode:(unsigned long long)arg1;
- (id)shortDescriptionOfLeaf:(unsigned long long)arg1;
- (unsigned long long)maxDepth;
- (unsigned long long)nodeCount;
- (unsigned long long)count;
- (_pbxbtreeheader_5892dcee *)header;

@end

