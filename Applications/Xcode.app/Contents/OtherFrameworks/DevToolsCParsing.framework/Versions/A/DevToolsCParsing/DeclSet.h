//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCParsing/ASTNode.h>

@class BaseType, SourceLocation;

@interface DeclSet : ASTNode
{
    id *_decls;
    long long _numberOfDecls;
    long long _declArraySize;
    long long _context;
    BaseType *_baseType;
    SourceLocation *_overallLocation;
    SourceLocation *_userTypeNameLocation;
}

- (id)shortDescription;
- (void)setUserTypeNameLocation:(id)arg1;
- (id)userTypeNameLocation;
- (id)description;
- (void)printDeclarations;
- (void)removeDeclaration:(id)arg1;
- (void)addDecl:(id)arg1;
- (void)setContext:(long long)arg1;
- (id)declAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)overallLocation;
- (void)setOverallLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)location;
- (id)containingScope;
- (void)addTypedefClass;
- (void)setBaseType:(id)arg1;
- (id)baseType;
- (id)declarations;
- (unsigned long long)declarationsInDeclSet;
- (void)dealloc;
- (id)initWithOverallLocation:(id)arg1;
- (long long)context;

@end
