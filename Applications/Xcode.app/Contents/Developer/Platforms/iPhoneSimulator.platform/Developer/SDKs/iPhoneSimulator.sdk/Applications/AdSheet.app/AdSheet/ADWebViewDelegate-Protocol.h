//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebViewDelegate.h"

@class ADWebView, NSDictionary, NSString, NSURL;

@protocol ADWebViewDelegate <UIWebViewDelegate>
- (void)adWebView:(ADWebView *)arg1 failedToLoadAssetAtURL:(NSURL *)arg2 details:(NSString *)arg3;

@optional
- (void)adWebView:(ADWebView *)arg1 hadScriptErrorWithInfo:(NSDictionary *)arg2;
@end

