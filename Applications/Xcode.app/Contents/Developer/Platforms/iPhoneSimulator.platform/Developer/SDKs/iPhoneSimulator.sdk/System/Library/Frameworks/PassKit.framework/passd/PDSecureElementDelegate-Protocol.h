//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDSecureElement, PKPaymentApplication;

@protocol PDSecureElementDelegate <NSObject>
- (void)secureElement:(PDSecureElement *)arg1 removingPaymentApplicationsDidFinishWithSuccess:(_Bool)arg2;
- (void)secureElement:(PDSecureElement *)arg1 removingPaymentApplicationsDidUpdateToProgress:(double)arg2;
- (void)secureElement:(PDSecureElement *)arg1 didDeauthorizeApplication:(PKPaymentApplication *)arg2;
- (void)secureElement:(PDSecureElement *)arg1 didAuthorizeApplication:(PKPaymentApplication *)arg2;
- (void)secureElement:(PDSecureElement *)arg1 didActivateApplication:(PKPaymentApplication *)arg2;
- (void)secureElementDidBecomeAvailable:(PDSecureElement *)arg1;
- (void)secureElementDidBecomeUnavailable:(PDSecureElement *)arg1;
- (void)secureElementDidLeaveRestrictedMode:(PDSecureElement *)arg1;
- (void)secureElementDidEnterRestrictedMode:(PDSecureElement *)arg1;
@end

