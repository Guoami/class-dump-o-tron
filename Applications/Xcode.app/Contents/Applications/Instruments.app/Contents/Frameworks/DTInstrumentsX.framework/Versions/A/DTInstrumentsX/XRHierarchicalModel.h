//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTInstrumentsX/XRUIModel.h>

@class NSTreeNode;

@interface XRHierarchicalModel : XRUIModel
{
    NSTreeNode *_root;
    struct __CFDictionary *_nodeByUUID;
}

- (void).cxx_destruct;
- (id)elementWithUUID:(struct __CFUUID *)arg1;
- (void)replaceElement:(id)arg1;
- (BOOL)setElement:(id)arg1 atIndexPath:(id)arg2 options:(unsigned long long)arg3;
- (BOOL)setElement:(id)arg1 atIndexPath:(id)arg2;
- (id)indexPathForImmutableElement:(id)arg1;
- (id)indexPathForUUID:(struct __CFUUID *)arg1;
- (long long)addElement:(id)arg1 underIndexPath:(id)arg2;
- (void)_addFirstElement:(id)arg1 withOtherElements:(id)arg2 toIndexPath:(id)arg3 firstElementIndex:(long long *)arg4;
- (void)empty;
- (void)pruneElementsUnderIndexPath:(id)arg1;
- (void)walk:(CDUnknownBlockType)arg1;
- (id)elementsUnderIndexPath:(id)arg1;
- (unsigned long long)numberOfElementsUnderPath:(id)arg1;
- (id)elementAtIndexPath:(id)arg1;
- (void)dealloc;

@end
