//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardInput.h"
#import "UITextInputPrivate.h"

@class NSDictionary, NSString, UIColor, UIImage, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate>
{
    UITextInputTraits *m_traits;
}

- (id)selectionRectsForRange:(id)arg1;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (_Bool)hasText;
- (struct CGRect)visibleBounds;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;
- (_Bool)becomesEditableWithGestures;
- (void)updateSelection;
- (_Bool)isEditing;
- (_Bool)isEditable;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)selectionView;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool acceptsEmoji; // @dynamic acceptsEmoji;
- (void)setSecure:(_Bool)arg1;
- (_Bool)isSecure;
- (void)setupPlaceholderTextIfNeeded;
- (_Bool)isShowingPlaceholder;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (struct CGRect)caretRect;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)selectAll;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (struct _NSRange)selectionRange;
- (_Bool)selectionAtWordStart;
- (_Bool)selectionAtDocumentStart;
- (int)selectionState;
- (_Bool)hasSelection;
- (_Bool)hasContent;
- (int)wordOffsetInRange:(id)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)delegate;
- (void)takeTraitsFrom:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)textInputTraits;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue; // @dynamic contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth; // @dynamic insertionPointWidth;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) long long selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;

@end

