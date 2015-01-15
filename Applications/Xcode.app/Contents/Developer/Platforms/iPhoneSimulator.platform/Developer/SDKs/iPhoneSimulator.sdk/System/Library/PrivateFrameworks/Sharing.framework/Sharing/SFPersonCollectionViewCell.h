//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, NSArray, NSObject<SFPersonCollectionViewCellDelegate>, NSProgress, NSString, SFAirDropNode, SFCircleProgressView, UIColor, UILabel, _SFPersonImageView;

__attribute__((visibility("hidden")))
@interface SFPersonCollectionViewCell : UICollectionViewCell
{
    struct CGRect _personViewFrame;
    _SFPersonImageView *_personImageView;
    SFCircleProgressView *_circleProgressView;
    UILabel *_nameLabel;
    struct CGRect _nameLabelOneLineFrame;
    struct CGRect _nameLabelTwoLinesFrame;
    CALayer *_nameLabelMaskLayer;
    double _nameLabelOriginY;
    UILabel *_secondaryNameLabel;
    UILabel *_waitingLabel;
    UILabel *_sendingLabel;
    UILabel *_sentLabel;
    UILabel *_declinedLabel;
    UILabel *_failedLabel;
    id _progressToken;
    NSProgress *_progress;
    NSArray *_progressKeyPaths;
    _Bool _darkStyleOnLegacyApp;
    _Bool _stateBeingRestored;
    SFAirDropNode *_person;
    long long _cellState;
    NSString *_sessionID;
    UIColor *_textColor;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<SFPersonCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool stateBeingRestored; // @synthesize stateBeingRestored=_stateBeingRestored;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) SFAirDropNode *person; // @synthesize person=_person;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
- (void).cxx_destruct;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)userDidCancel;
- (void)userDidSelect;
- (void)switchToStatusLabel:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)visibleStatusLabel;
- (void)resetNameLabel;
- (void)updateNameLabel;
- (void)resetPersonIconView;
- (void)updatePersonIconView;
- (void)didMoveToWindow;
- (void)animateCellShow:(_Bool)arg1 delay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)restoreCellStateFromFinalTransferState:(long long)arg1;
- (void)setCellState:(long long)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)createLabelWithFrame:(struct CGRect)arg1;

@end
