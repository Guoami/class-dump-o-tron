//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface MZStringSearcher : NSObject
{
    NSDictionary *_roles;
    NSArray *_prefixes;
    NSArray *_suffixes;
    NSArray *_words;
    NSArray *_substrings;
}

- (BOOL)matches:(id)arg1;
- (BOOL)matches:(id)arg1 matchingSubstring:(id *)arg2;
- (BOOL)tokenMatches:(id)arg1 matchingSubstring:(id *)arg2;
- (BOOL)tokenMatchesSubstrings:(id)arg1 matchingSubstring:(id *)arg2;
- (BOOL)tokenMatchesWords:(id)arg1 matchingSubstring:(id *)arg2;
- (BOOL)tokenMatchesSuffixes:(id)arg1 matchingSubstring:(id *)arg2;
- (BOOL)tokenMatchesPrefixes:(id)arg1 matchingSubstring:(id *)arg2;
- (void)dealloc;
- (id)initWithRoles:(id)arg1;

@end
