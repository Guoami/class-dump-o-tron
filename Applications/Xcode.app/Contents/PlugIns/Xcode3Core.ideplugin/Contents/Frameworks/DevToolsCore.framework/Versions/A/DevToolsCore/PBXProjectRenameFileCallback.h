//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PBXFileReference;

@interface PBXProjectRenameFileCallback : NSObject
{
    PBXFileReference *_fileReference;
    NSString *_newName;
    NSString *_callbackTarget;
    SEL _callbackSelector;
}

+ (void)beginRenameForFileReference:(id)arg1 newName:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4;
- (void).cxx_destruct;
- (void)_unlockProjectFiles;
- (void)_renameFile;
- (void)_invokeCallbackWithError:(id)arg1;
- (id)_initWithFileReference:(id)arg1 newName:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4;

@end
