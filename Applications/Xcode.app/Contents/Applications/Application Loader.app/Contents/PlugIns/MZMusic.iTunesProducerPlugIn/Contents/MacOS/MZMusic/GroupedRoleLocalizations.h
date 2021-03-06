//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RoleLocalizationsProtocol.h"

@class NSMutableArray;

@interface GroupedRoleLocalizations : NSObject <RoleLocalizationsProtocol>
{
    NSMutableArray *roleLocalizations;
}

- (id)allTranslationsString;
- (id)description;
- (void)roleTranslationChanged:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)removeLocalizationForLanguage:(id)arg1;
- (void)addLocalizationForLanguage:(id)arg1;
- (id)localeCodes;
- (id)uiLocaleNames;
- (id)role;
- (void)addRole:(id)arg1;
- (void)dealloc;
- (id)initWithRoleLocalizations:(id)arg1;

@end

