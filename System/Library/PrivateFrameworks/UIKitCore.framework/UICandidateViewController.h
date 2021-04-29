/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class UIView, NSArray, NSString;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController> {

	UIView* _candidateView;

}

@property (nonatomic,retain) UIView * candidateView;                       //@synthesize candidateView=_candidateView - In the implementation block
@property (nonatomic,readonly) NSArray * displayedCandidates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredCandidateBarHeightForTraitCollection:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(BOOL)hidesExpandableButton;
-(UIView *)candidateView;
-(NSArray *)displayedCandidates;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(void)setCandidateView:(UIView *)arg1 ;
@end

