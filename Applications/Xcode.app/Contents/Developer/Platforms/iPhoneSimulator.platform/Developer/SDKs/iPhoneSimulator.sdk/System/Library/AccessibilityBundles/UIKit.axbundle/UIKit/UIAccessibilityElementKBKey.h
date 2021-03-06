//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

@class UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement
{
    UIKBTree *_key;
    _Bool _changesOnShiftDown;
}

+ (void)_accessibilityPerformValidations:(id)arg1;
@property(nonatomic) _Bool changesOnShiftDown; // @synthesize changesOnShiftDown=_changesOnShiftDown;
@property(retain, nonatomic) UIKBTree *key; // @synthesize key=_key;
- (id)accessibilityCustomActions;
- (_Bool)_performCapsLockDoubleTap;
- (id)_accessibilitySupportGesturesAttributes;
- (_Bool)_accessibilityHasVariantKeys;
- (id)_accessibilityVariantKeys;
- (unsigned long long)accessibilityTraits;
- (_Bool)_accessibilityIsInternationalKeyboardKey;
- (_Bool)_accessibilityIsDeleteKey;
- (_Bool)isButtonType;
- (_Bool)isUnaffectedByShiftLock;
- (_Bool)_accessibilityAllowsAlternativeCharacterActivation;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)_accessibilityKeyboardSupportsGestureMode;
- (id)accessibilityLabel;
- (_Bool)_allowCachingAccessibilityLabel;
- (void)_applyCapitalLetterTransform;
- (_Bool)allowsCaseChangeOnShift;
- (id)_accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (id)_accessibilityKeyboardKeyEnteredString;
- (_Bool)_axIsDictationKey;
- (_Bool)accessibilityActivate;
- (_Bool)_accessibilityDismissAlternativeKeyPicker;
- (_Bool)_accessibilityKeyboardKeyAllowsTouchTyping;
- (_Bool)_accessibilitySupportsActivateAction;
- (id)_accessibilityLocalizedStringForKeyboardLocale:(id)arg1;
- (_Bool)_accessibilityWasForcedToUseForeignKB;
- (void)dealloc;
- (id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2;

@end

