//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractClassProvider.h>

@class IBPlatform, NSMutableSet;

@interface IBSystemClassProvider : IBAbstractClassProvider
{
    IBPlatform *_platform;
    NSMutableSet *_partialDescriptions;
}

+ (id)systemClassProviderForPlatform:(id)arg1;
- (void).cxx_destruct;
- (id)partialClassDescriptions;
- (id)initWithPlatform:(id)arg1;

@end

