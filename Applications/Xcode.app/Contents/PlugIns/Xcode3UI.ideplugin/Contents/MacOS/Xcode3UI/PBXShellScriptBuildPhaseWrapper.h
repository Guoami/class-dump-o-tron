//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/PBXBuildPhaseWrapper.h>

@interface PBXShellScriptBuildPhaseWrapper : PBXBuildPhaseWrapper
{
}

- (void)removeFromOutputPathsAtIndex:(unsigned long long)arg1;
- (void)insertInOutputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromInputPathsAtIndex:(unsigned long long)arg1;
- (void)insertInInputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)outputPaths;
- (id)inputPaths;
- (void)setShowEnvironmentVariables:(BOOL)arg1;
- (BOOL)showEnvironmentVariables;
- (void)setShellScript:(id)arg1;
- (id)shellScript;
- (void)setShellPath:(id)arg1;
- (id)shellPath;

@end

