/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;
@class GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject {

	id<GKChallengeEventHandlerDelegate> _delegate;
	id<GKChallengeEventHandlerUIDelegate> _uiDelegate;
	GKChallengeInternal* _pendingReceivedChallenge;
	GKChallengeInternal* _pendingCompletedChallenge;

}

@property (nonatomic,retain) GKChallengeInternal * pendingReceivedChallenge;                   //@synthesize pendingReceivedChallenge=_pendingReceivedChallenge - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * pendingCompletedChallenge;                  //@synthesize pendingCompletedChallenge=_pendingCompletedChallenge - In the implementation block
@property (nonatomic,retain) id<GKChallengeEventHandlerUIDelegate> uiDelegate;                 //@synthesize uiDelegate=_uiDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GKChallengeEventHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)challengeEventHandler;
-(id<GKChallengeEventHandlerDelegate>)delegate;
-(void)setDelegate:(id<GKChallengeEventHandlerDelegate>)arg1 ;
-(id<GKChallengeEventHandlerUIDelegate>)uiDelegate;
-(void)setUiDelegate:(id<GKChallengeEventHandlerUIDelegate>)arg1 ;
-(void)receivedChallengeSelected:(id)arg1 ;
-(void)completedChallengeSelected:(id)arg1 ;
-(void)challengeReceived:(id)arg1 ;
-(void)challengeCompleted:(id)arg1 ;
-(void)setPendingReceivedChallenge:(GKChallengeInternal *)arg1 ;
-(void)setPendingCompletedChallenge:(GKChallengeInternal *)arg1 ;
-(void)showBannerForChallenge:(id)arg1 complete:(/*^block*/id)arg2 ;
-(GKChallengeInternal *)pendingReceivedChallenge;
-(GKChallengeInternal *)pendingCompletedChallenge;
@end

