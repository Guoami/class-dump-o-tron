//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XRImmutableElement : NSObject
{
    struct __CFUUID *_uuid;
}

- (id)stringFromUUID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) struct __CFUUID *uuid;
- (void)dealloc;
- (id)init;
- (id)initWithUUID:(struct __CFUUID *)arg1;
- (BOOL)isNilElement;

@end

