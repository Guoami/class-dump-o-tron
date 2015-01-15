//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKRemoteUIController.h>

@class NSArray;

@interface GKAccountRemoteUIController : GKRemoteUIController
{
    _Bool _authenticatePlayerOnCompletion;
    long long _mode;
    NSArray *_availableExternalServices;
}

+ (void)accountRemoteUIControllerForMode:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool authenticatePlayerOnCompletion; // @synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion;
@property(retain, nonatomic) NSArray *availableExternalServices; // @synthesize availableExternalServices=_availableExternalServices;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)postBodyForInitialLoad;
- (id)bagKey;
- (id)fallbackURL;
- (void)fireCompletionHandler;
- (void)fetchICloudAuthTokenWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFacebookAuthTokenWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchAvailableExternalServicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;

@end
