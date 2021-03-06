//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ITunesIconAnalyzerResult : NSObject
{
    NSString *_path;
    NSString *_type;
    NSArray *_sizes;
}

+ (id)resultWithDictionary:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)describeAsPlist;
- (void)setPath:(id)arg1;
- (id)path;
- (id)type;
- (id)sizes;
- (void)dealloc;
- (id)initWithType:(id)arg1 sizes:(id)arg2;

@end

