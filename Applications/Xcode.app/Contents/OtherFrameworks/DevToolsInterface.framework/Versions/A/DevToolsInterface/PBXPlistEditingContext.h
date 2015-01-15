//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray, NSString, NSUndoManager, PBXPlistStructureDefinition;

@interface PBXPlistEditingContext : NSObject
{
    id _plist;
    NSString *_plistType;
    NSMapTable *_parentMap;
    NSMapTable *_keyMap;
    PBXPlistStructureDefinition *_structureDefinition;
    id _lastEditedPlist;
    BOOL _containsXMLOnlyClasses;
    NSUndoManager *_undoManager;
    NSMutableArray *_plistEditorModules;
}

+ (Class)plistEditingContextModelClassForPlistClass:(Class)arg1;
+ (void)initialize;
- (id)lastEditedPlist;
- (id)replacePlist:(id)arg1 withPlist:(id)arg2;
- (id)setClass:(Class)arg1 forPlist:(id)arg2;
- (void)setKey:(id)arg1 forPlist:(id)arg2;
- (void)deletePlist:(id)arg1;
- (id)addChild:(id)arg1 toPlist:(id)arg2 withKey:(id)arg3;
- (id)setPlist:(id)arg1;
- (id)createNewChildForPlist:(id)arg1 withKey:(id)arg2;
- (id)keyForNewChildOfDictionary:(id)arg1;
- (id)keyByUniquingKey:(id)arg1 inDictionary:(id)arg2;
- (BOOL)canDeletePlist:(id)arg1;
- (BOOL)canAddChildToPlist:(id)arg1 withKey:(id)arg2;
- (BOOL)canEditValueForPlist:(id)arg1;
- (BOOL)canEditClassForPlist:(id)arg1;
- (BOOL)canEditKeyForPlist:(id)arg1;
- (id)keyPathForPlist:(id)arg1;
- (id)plistForKeyPath:(id)arg1;
- (id)outlineKeyForPlist:(id)arg1;
- (id)parentForPlist:(id)arg1;
- (void)setPlistType:(id)arg1;
- (id)plistType;
- (id)plist;
- (id)_setPlist:(id)arg1 forKeyPath:(id)arg2 doReplace:(BOOL)arg3 doNotify:(BOOL)arg4;
- (void)_setPlistNoCopy:(id)arg1 forKeyPath:(id)arg2 doReplace:(BOOL)arg3 doNotify:(BOOL)arg4;
- (id)_deepCopyPlist:(id)arg1;
- (void)_createMaps;
- (void)setPlistStructureDefinition:(id)arg1;
- (id)plistStructureDefinition;
- (BOOL)_plistContainsXMLOnlyClasses:(id)arg1;
- (void)removePlistEditorModule:(id)arg1;
- (void)addPlistEditorModule:(id)arg1;
- (id)plistEditorModules;
- (id)undoManager;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
