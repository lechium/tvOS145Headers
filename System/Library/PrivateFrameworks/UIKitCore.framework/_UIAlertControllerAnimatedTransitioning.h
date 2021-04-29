/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIAlertController, UIInteractionProgress, NSString;

@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presentation;
	UIAlertController* _alertController;
	UIInteractionProgress* _interactionProgress;

}

@property (getter=isPresentation) BOOL presentation;                                   //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                      //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)setPresentation:(BOOL)arg1 ;
-(BOOL)isPresentation;
-(void)_animateTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setInteractionProgress:(UIInteractionProgress *)arg1 ;
-(id)_alertControllerForContext:(id)arg1 ;
-(UIInteractionProgress *)interactionProgress;
-(id)initWithInteractionProgress:(id)arg1 ;
@end

