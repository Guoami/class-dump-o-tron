//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTNibView.h"

@class NSTextField;

@interface XRTextEntryPanel : PFTNibView
{
    NSTextField *_titleField;
    NSTextField *_entryField;
}

- (void)keyDown:(id)arg1;
- (void)setTextValue:(id)arg1;
- (id)textValue;
- (void)cancel:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)okAction:(id)arg1;
- (void)_endWithCode:(int)arg1;

@end
