/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NUIContainerViewDelegate <NSObject>
@optional
-(CGSize*)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3;
-(CGRect*)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3;
-(BOOL)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1;

@end

