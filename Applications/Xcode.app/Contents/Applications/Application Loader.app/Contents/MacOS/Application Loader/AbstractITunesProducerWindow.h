//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImageView, NSTextField;

@interface AbstractITunesProducerWindow : NSObject
{
    NSImageView *appImage;
    NSImageView *appNameImage;
    NSTextField *appVersion;
}

+ (void)initialize;
- (void)display;
- (void)dealloc;
- (id)applicationName;

@end

