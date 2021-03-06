/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class TUISystemInputAssistantView, UIKBHandwritingCandidateView, UIKeyboardCandidatePocketShadow;

@interface UIHandwritingAssistantView : UIKBKeyView {

	TUISystemInputAssistantView* _systemInputAssistantView;
	UIKBHandwritingCandidateView* _candidateView;
	UIKeyboardCandidatePocketShadow* _rightBorder;

}

@property (nonatomic,retain) TUISystemInputAssistantView * systemInputAssistantView;              //@synthesize systemInputAssistantView=_systemInputAssistantView - In the implementation block
@property (nonatomic,retain) UIKBHandwritingCandidateView * candidateView;                        //@synthesize candidateView=_candidateView - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * rightBorder;                       //@synthesize rightBorder=_rightBorder - In the implementation block
-(id)candidateList;
-(UIKBHandwritingCandidateView *)candidateView;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(void)setCandidateView:(UIKBHandwritingCandidateView *)arg1 ;
-(CGRect)assistantFrameForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)setSystemInputAssistantView:(TUISystemInputAssistantView *)arg1 ;
-(UIKeyboardCandidatePocketShadow *)rightBorder;
-(void)setRightBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
@end

