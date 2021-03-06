//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionViewController.h"

@class GKGame, GKPlayer;

@interface GKFriendPlaySuggestionViewController : GKCollectionViewController
{
    GKPlayer *_friend;
    GKGame *_game;
}

+ (void)presentSuggestionFlowForFriend:(id)arg1 withGame:(id)arg2 fromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)playSuggestionViewControllerForFriend:(id)arg1 withGame:(id)arg2;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayer *friend; // @synthesize friend=_friend;
- (void)showProfileInViewController:(id)arg1;
- (void)playGame;
- (void)selectChallengesInViewController:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handleActionForPlayType:(unsigned long long)arg1 inViewController:(id)arg2;
- (id)explanatoryText;
- (void)configureHeaderView:(id)arg1;
- (void)configureViewFactories;
- (void)didEnterNoContentState;
- (void)configureDataSource;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFriend:(id)arg1 game:(id)arg2;

@end

