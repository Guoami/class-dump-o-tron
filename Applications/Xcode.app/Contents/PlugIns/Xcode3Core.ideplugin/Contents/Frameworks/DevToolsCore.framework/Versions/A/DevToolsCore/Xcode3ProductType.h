//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProductType.h"

#import "IDEProductTypeProvider.h"

@class DVTPlatform, NSString, XCProductTypeSpecification;

@interface Xcode3ProductType : IDEProductType <IDEProductTypeProvider>
{
    DVTPlatform *_platform;
    XCProductTypeSpecification *_backingSpecification;
}

+ (id)productTypeForIdentifier:(id)arg1 platform:(id)arg2;
@property(readonly) XCProductTypeSpecification *backingSpecification; // @synthesize backingSpecification=_backingSpecification;
- (id)platform;
- (void).cxx_destruct;
- (BOOL)isAppExtension;
- (BOOL)isApplication;
- (id)superType;
- (id)localizedDescription;
- (id)name;
- (id)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

