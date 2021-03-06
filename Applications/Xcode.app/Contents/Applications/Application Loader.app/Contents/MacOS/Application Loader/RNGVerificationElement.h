//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface RNGVerificationElement : NSObject
{
    NSString *_xpath;
    NSString *_element;
    NSString *_define;
    NSString *_identifier;
    NSString *_fieldName;
    BOOL _required;
    id _defineElement;
    NSDictionary *_alteration;
    RNGVerificationElement *_child;
    NSString *_customErrorMesage;
}

@property(retain, nonatomic) NSString *customErrorMesage; // @synthesize customErrorMesage=_customErrorMesage;
- (id)description;
- (void)setChildDict:(id)arg1;
- (id)childDict;
- (void)setChild:(id)arg1;
- (id)child;
- (void)setAlteration:(id)arg1;
- (id)alteration;
- (void)setDefineElement:(id)arg1;
- (id)defineElement;
- (void)setRequired:(BOOL)arg1;
- (BOOL)isRequired;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setFieldName:(id)arg1;
- (id)fieldName;
- (void)setElement:(id)arg1;
- (id)element;
- (void)setDefine:(id)arg1;
- (id)define;
- (void)setXpath:(id)arg1;
- (id)xpath;
- (void)dealloc;
- (id)initWithXpath:(id)arg1 define:(id)arg2;
- (id)init;

@end

