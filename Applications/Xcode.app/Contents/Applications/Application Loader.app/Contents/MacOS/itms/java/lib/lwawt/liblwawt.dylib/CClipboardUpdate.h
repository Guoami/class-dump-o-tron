//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CClipboardUpdate : NSObject
{
    NSData *fData;
    NSString *fFormat;
}

- (id)initWithData:(id)arg1 withFormat:(id)arg2;
- (void)dealloc;
- (id)data;
- (id)format;

@end

