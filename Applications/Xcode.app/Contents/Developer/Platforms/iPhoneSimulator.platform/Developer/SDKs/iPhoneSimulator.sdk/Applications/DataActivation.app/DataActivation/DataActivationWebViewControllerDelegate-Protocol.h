//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DataActivationWebViewController, NSDictionary, NSError, NSString, NSURLRequest;

@protocol DataActivationWebViewControllerDelegate <NSObject>
- (void)dataActivationWebViewController:(DataActivationWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (NSDictionary *)dataActivationWebViewController:(DataActivationWebViewController *)arg1 connectionPropertiesForRequest:(NSURLRequest *)arg2;
- (NSDictionary *)dataActivationWebViewController:(DataActivationWebViewController *)arg1 proxySettingsForRequest:(NSURLRequest *)arg2;
- (void)dataActivationWebViewControllerDidFinish:(DataActivationWebViewController *)arg1;
- (void)dataActivationWebViewController:(DataActivationWebViewController *)arg1 didPurchasePlanSuccessfullyWithIccid:(NSString *)arg2;
- (_Bool)dataActivationWebViewControllerShouldAllowPlanPurchaseWithIccid:(DataActivationWebViewController *)arg1;
- (void)dataActivationWebViewControllerAccoutDidUpdateSuccessfully:(DataActivationWebViewController *)arg1;
@end

