//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface _MarcoLogCompressor : NSObject
{
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;
- (void)compressDirectory:(id)arg1 intoArchive:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

