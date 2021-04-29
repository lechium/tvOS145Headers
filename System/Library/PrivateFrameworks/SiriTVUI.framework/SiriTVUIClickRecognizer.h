/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol SiriTVUIClickRecognizerDelegate;
@interface SiriTVUIClickRecognizer : UITapGestureRecognizer {

	id<SiriTVUIClickRecognizerDelegate> _clickDelegate;

}

@property (assign,nonatomic,__weak) id<SiriTVUIClickRecognizerDelegate> clickDelegate;              //@synthesize clickDelegate=_clickDelegate - In the implementation block
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 clickDelegate:(id)arg3 ;
-(id<SiriTVUIClickRecognizerDelegate>)clickDelegate;
-(void)setClickDelegate:(id<SiriTVUIClickRecognizerDelegate>)arg1 ;
@end

