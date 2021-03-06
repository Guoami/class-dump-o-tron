//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZAbstractToolExecutor.h"

@class NSString;

@interface MachDwarfdumpExecutor : MZAbstractToolExecutor
{
    NSString *_executablePath;
}

+ (id)executablePathFromAppWrapperPath:(id)arg1;
+ (void)initialize;
+ (id)dwarfdumpExecutablePath;
- (id)executeWithError:(id *)arg1;
- (void)processExitCode:(id)arg1;
- (id)taskWithError:(id *)arg1;
- (void)setPath:(id)arg1;
- (void)setExecutablePath:(id)arg1;
- (id)path;
- (id)executablePath;
- (void)dealloc;
- (id)initWithExecutablePath:(id)arg1;
- (id)initWithAppWrapperPath:(id)arg1;

@end

