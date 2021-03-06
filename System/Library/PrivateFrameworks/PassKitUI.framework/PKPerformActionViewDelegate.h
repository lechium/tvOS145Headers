/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPerformActionViewDelegate <NSObject>
@optional
-(void)performActionView:(id)arg1 requestsPresentViewController:(id)arg2;
-(void)performActionViewRequestsPerformNextStepForAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performActionViewDidPerformAction:(id)arg1;

@required
-(void)shakeCard;
-(void)setRightBarButtonEnabled:(BOOL)arg1;

@end

