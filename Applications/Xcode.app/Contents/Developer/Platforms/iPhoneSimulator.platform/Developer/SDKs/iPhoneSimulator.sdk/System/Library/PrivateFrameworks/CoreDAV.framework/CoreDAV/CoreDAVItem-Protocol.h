//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreDAVItem, CoreDAVXMLData, NSCache, NSData, NSDictionary, NSSet, NSURL;

@protocol CoreDAVItem <NSObject>
+ (NSCache *)parseRuleCache;
+ (NSDictionary *)copyParseRules;
- (void)parserSuggestsBaseURL:(NSURL *)arg1;
- (_Bool)validate;
- (void)write:(CoreDAVXMLData *)arg1;
- (NSDictionary *)copyParseRules;
- (void)parserFoundUnrecognizedElement:(CoreDAVItem *)arg1;
- (void)parserFoundPayload:(NSData *)arg1;
- (void)parserFoundAttributes:(NSSet *)arg1;
@end

