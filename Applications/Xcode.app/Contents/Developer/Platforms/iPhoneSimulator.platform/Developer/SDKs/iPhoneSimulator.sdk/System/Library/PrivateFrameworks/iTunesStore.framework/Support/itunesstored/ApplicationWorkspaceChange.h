//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ApplicationWorkspaceChange : NSObject
{
    NSString *_bundleID;
    long long _changeType;
    long long _downloadID;
}

@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadID;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleID;
- (void)dealloc;

@end

