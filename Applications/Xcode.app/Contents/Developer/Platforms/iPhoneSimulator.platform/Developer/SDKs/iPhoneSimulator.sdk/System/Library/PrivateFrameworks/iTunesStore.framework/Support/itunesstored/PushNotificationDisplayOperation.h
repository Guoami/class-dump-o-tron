//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSDictionary, SSRemoteNotification;

@interface PushNotificationDisplayOperation : ISOperation
{
    SSRemoteNotification *_notification;
}

- (_Bool)_URLHandlerExists;
- (void)_playSound;
- (void)_performNotificationAction:(_Bool)arg1;
- (void)_openNotificationURL;
- (long long)_notificationClass;
- (void)_loadNotificationDownloadManifest;
- (void)_displayBadge;
- (void)_displayAlert;
- (id)_copyAlertTitle;
- (id)_clientIdentifierForDownloadKinds:(id)arg1;
- (_Bool)_clientExistsWithIdentifier:(id)arg1;
- (void)run;
@property(readonly) _Bool requiresClientIdentifier;
@property(readonly) NSDictionary *notificationUserInfo;
- (void)dealloc;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)init;

@end
