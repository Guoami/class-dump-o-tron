//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRContext.h>

@class NSArray, NSString, PFTDataElement;

@interface XRContextLegacyDataElement : XRContext
{
    NSArray *_paths;
    NSString *_targetKeyPath;
    PFTDataElement *_element;
}

- (id)element;
- (void)setPaths:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)paths;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDataElement:(id)arg1 instrument:(id)arg2 parentContext:(id)arg3;

@end

