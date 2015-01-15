//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsSupport/PBXTSTask.h>

@class NSArray, NSString;

@interface PBXTSShellTask : PBXTSTask
{
    NSString *_shellPath;
    NSArray *_shellArgsArray;
    NSString *_scriptName;
    NSString *_scriptPath;
    NSString *_argsString;
    NSArray *_searchPaths;
}

+ (id)defaultShellScriptPath;
+ (id)defaultShellScriptName;
+ (id)defaultShellArguments;
+ (id)defaultShellPath;
- (void)startTask;
- (void)setAdditionalSearchPaths:(id)arg1;
- (void)setArgumentsString:(id)arg1;
- (void)setShellScriptPath:(id)arg1;
- (void)setShellScriptName:(id)arg1;
- (void)setShellArguments:(id)arg1;
- (void)setShellPath:(id)arg1;
- (id)additionalSearchPaths;
- (id)argumentsString;
- (id)shellScriptPath;
- (id)shellScriptName;
- (id)shellArguments;
- (id)shellPath;

@end
