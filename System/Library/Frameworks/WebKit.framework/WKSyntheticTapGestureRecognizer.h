/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@class UIWebTouchEventsGestureRecognizer, NSNumber, UIScrollView;

@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer {

	id _gestureIdentifiedTarget;
	SEL _gestureIdentifiedAction;
	id _gestureFailedTarget;
	SEL _gestureFailedAction;
	id _resetTarget;
	SEL _resetAction;
	RetainPtr<NSNumber>* _lastActiveTouchIdentifier;
	WeakObjCPtr<UIScrollView> _lastTouchedScrollView;
	UIWebTouchEventsGestureRecognizer* _supportingWebTouchEventsGestureRecognizer;

}

@property (assign,nonatomic,__weak) UIWebTouchEventsGestureRecognizer * supportingWebTouchEventsGestureRecognizer;              //@synthesize supportingWebTouchEventsGestureRecognizer=_supportingWebTouchEventsGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSNumber * lastActiveTouchIdentifier; 
@property (nonatomic,__weak,readonly) UIScrollView * lastTouchedScrollView; 
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIScrollView *)lastTouchedScrollView;
-(void)setGestureIdentifiedTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setGestureFailedTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setResetTarget:(id)arg1 action:(SEL)arg2 ;
-(NSNumber *)lastActiveTouchIdentifier;
-(UIWebTouchEventsGestureRecognizer *)supportingWebTouchEventsGestureRecognizer;
-(void)setSupportingWebTouchEventsGestureRecognizer:(UIWebTouchEventsGestureRecognizer *)arg1 ;
@end

