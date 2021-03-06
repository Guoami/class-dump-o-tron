//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface XRStrategyInfo : NSObject <NSCopying>
{
    struct NSString *_identifier;
    NSString *_displayName;
    NSString *_uiControllerClassName;
    NSString *_uiListViewClassName;
    NSString *_uiTrackViewClassName;
}

@property(readonly) NSString *uiTrackViewClassName; // @synthesize uiTrackViewClassName=_uiTrackViewClassName;
@property(readonly) NSString *uiListViewClassName; // @synthesize uiListViewClassName=_uiListViewClassName;
@property(readonly) NSString *uiControllerClassName; // @synthesize uiControllerClassName=_uiControllerClassName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (long long)compareStrategyName:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(struct NSString *)arg1 andDisplayName:(id)arg2 andUIControllerClassName:(id)arg3;
- (id)initWithIdentifier:(struct NSString *)arg1 andDisplayName:(id)arg2 andUIControllerClassName:(id)arg3 andListViewClassName:(id)arg4 andTrackViewClassName:(id)arg5;

@end

