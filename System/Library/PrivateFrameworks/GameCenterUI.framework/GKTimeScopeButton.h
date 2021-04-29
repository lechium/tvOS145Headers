/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardFocusButton.h>

@interface GKTimeScopeButton : GKDashboardFocusButton {

	long long _timeScope;
	long long _leaderboardOccurrence;

}

@property (assign,nonatomic) long long timeScope;                          //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,nonatomic) long long leaderboardOccurrence;              //@synthesize leaderboardOccurrence=_leaderboardOccurrence - In the implementation block
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(long long)leaderboardOccurrence;
-(void)setLeaderboardOccurrence:(long long)arg1 ;
-(void)updateWithTitle:(id)arg1 ;
@end
