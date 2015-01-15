//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCSpecification.h>

@class NSDictionary, NSString, PBXLexicalRules;

@interface PBXLanguageSpecification : XCSpecification
{
    NSDictionary *_syntaxColoringRules;
    NSDictionary *_indentationRules;
    NSString *_scannerClassName;
    Class _scannerClass;
    NSString *_lexerClassName;
    Class _lexerClass;
    PBXLexicalRules *_lexRules;
    BOOL _supportsSyntaxAwareIndenting;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (id)lexicalRules;
- (id)loadBaseLexicalRules;
- (id)sourceLexer;
- (id)sourceScanner;
- (BOOL)supportsSyntaxAwareIndenting;
- (id)indentationRules;
- (id)syntaxColoringRules;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end
