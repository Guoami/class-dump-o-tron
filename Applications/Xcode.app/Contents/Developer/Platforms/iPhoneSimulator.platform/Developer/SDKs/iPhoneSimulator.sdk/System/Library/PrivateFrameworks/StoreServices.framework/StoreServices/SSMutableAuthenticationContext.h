//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSAuthenticationContext.h>

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSXPCCoding.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying>
{
}

- (void)setValuesWithAccount:(id)arg1;
@property(nonatomic) long long tokenType; // @dynamic tokenType;
@property(copy, nonatomic) NSString *reasonDescription; // @dynamic reasonDescription;
@property(nonatomic) _Bool persistsAcrossDeviceLock; // @dynamic persistsAcrossDeviceLock;
@property(copy, nonatomic) NSDictionary *HTTPHeaders; // @dynamic HTTPHeaders;
@property(nonatomic, getter=isDemoAccount) _Bool demoAccount; // @dynamic demoAccount;
@property(nonatomic) _Bool displaysOnLockScreen; // @dynamic displaysOnLockScreen;
@property(copy, nonatomic) NSString *clientIdentifierHeader; // @dynamic clientIdentifierHeader;
@property(nonatomic) _Bool allowsBootstrapCellularData; // @dynamic allowsBootstrapCellularData;
@property(nonatomic) _Bool allowsBioAuthentication; // @dynamic allowsBioAuthentication;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(copy, nonatomic) NSArray *userAgentComponents; // @dynamic userAgentComponents;
@property(copy, nonatomic) NSDictionary *signupRequestParameters; // @dynamic signupRequestParameters;
@property(nonatomic) _Bool shouldSuppressDialogs; // @dynamic shouldSuppressDialogs;
@property(nonatomic) _Bool shouldIgnoreProtocol; // @dynamic shouldIgnoreProtocol;
@property(nonatomic) _Bool shouldFollowAccountButtons; // @dynamic shouldFollowAccountButtons;
@property(nonatomic) _Bool shouldCreateNewSession; // @dynamic shouldCreateNewSession;
@property(retain, nonatomic) NSNumber *requiredUniqueIdentifier; // @dynamic requiredUniqueIdentifier;
@property(copy, nonatomic) NSDictionary *requestParameters; // @dynamic requestParameters;
@property(nonatomic) _Bool persistsPasswordFallback; // @dynamic persistsPasswordFallback;
@property(nonatomic) long long promptStyle; // @dynamic promptStyle;
@property(copy, nonatomic) NSString *preferredITunesStoreClient; // @dynamic preferredITunesStoreClient;
@property(copy, nonatomic) NSString *initialPassword; // @dynamic initialPassword;
@property(nonatomic) _Bool canSetActiveAccount; // @dynamic canSetActiveAccount;
@property(nonatomic) _Bool canCreateNewAccount; // @dynamic canCreateNewAccount;
@property(nonatomic) _Bool allowsRetry; // @dynamic allowsRetry;
@property long long accountScope; // @dynamic accountScope;
@property(nonatomic, getter=isAccountNameEditable) _Bool accountNameEditable; // @dynamic accountNameEditable;
@property(copy, nonatomic) NSString *accountName; // @dynamic accountName;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

