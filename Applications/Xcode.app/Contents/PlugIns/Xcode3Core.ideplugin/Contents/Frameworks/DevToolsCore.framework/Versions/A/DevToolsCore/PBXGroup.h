//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXReference.h>

#import "XCCompatibilityChecking.h"

@class NSMutableArray;

@interface PBXGroup : PBXReference <XCCompatibilityChecking>
{
    NSMutableArray *_children;
    BOOL _didScmStatus;
    BOOL _blockChildItemKVONotifications;
}

+ (id)archivableRelationships;
+ (id)groupWithName:(id)arg1;
+ (id)groupWithName:(id)arg1 path:(id)arg2;
- (void).cxx_destruct;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (id)buildConfigurationList;
- (id)cachedPropertyInfoContextForConfigurationNamed:(id)arg1;
- (void)pruneReferencesBySendingBooleanSelector:(SEL)arg1 toObject:(id)arg2 withContext:(void *)arg3;
- (unsigned long long)assignFileEncoding:(unsigned long long)arg1 onlyIfUnspecified:(BOOL)arg2;
- (BOOL)hasUnspecifiedFileEncodings;
- (void)setDidScmStatus:(BOOL)arg1;
- (BOOL)didScmStatus;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_setChildren:(id)arg1;
- (id)_items;
- (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)innerDescription;
- (BOOL)enumerateDescendantReferencesUsingBlock:(CDUnknownBlockType)arg1;
- (id)groupEnumerator;
- (void)invalidateAbsolutePathCache;
- (unsigned long long)itemCount;
- (id)itemNamed:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (BOOL)deleteFromProject;
- (id)addItems:(id)arg1 copy:(BOOL)arg2 createGroupsRecursively:(BOOL)arg3;
- (id)addItems:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)insertItems:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)addFiles:(id)arg1 copy:(BOOL)arg2 createGroupsRecursively:(BOOL)arg3;
- (id)addFiles:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)insertFiles:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (void)_addChildrenOfFolder:(id)arg1 toList:(id)arg2;
- (id)_insertRefOfClass:(Class)arg1 withName:(id)arg2 forFile:(id)arg3 ofFileType:(id)arg4 withFileProperties:(id)arg5 atIndex:(long long)arg6;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_removeItemFromChildrenOnly:(id)arg1;
- (void)didMoveItem:(id)arg1 toGroup:(id)arg2;
- (void)willMoveItem:(id)arg1 toGroup:(id)arg2;
- (void)didRemoveItem:(id)arg1;
- (void)willRemoveItem:(id)arg1;
- (void)didAddItem:(id)arg1;
- (void)willAddItem:(id)arg1;
- (BOOL)acceptsItem:(id)arg1;
- (id)destinationGroupForInsertion;
- (BOOL)isAncestorOfItem:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (int)changeMask;
- (id)createNewGroupAtIndex:(unsigned long long)arg1;
- (id)_availableNameBasedOn:(id)arg1;
- (id)children;
- (void)setContainer:(id)arg1;
- (BOOL)allowsSubgroups;
- (BOOL)isGroup;
- (BOOL)isLeaf;
- (BOOL)allowsEditingOfChildren;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 path:(id)arg2 sourceTree:(id)arg3;
- (void)flattenItemsIntoArray:(id)arg1;
- (void)flattenItemsIntoHeaderFileEnumeratorArray:(id)arg1;
- (void)flattenItemsIntoRezSearchPathFileEnumeratorArray:(id)arg1;

@end

