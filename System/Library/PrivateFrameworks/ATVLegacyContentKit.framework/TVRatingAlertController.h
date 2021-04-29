/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/_TVRatingViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _TVRatingViewController, UIColor, NSString;

@interface TVRatingAlertController : UIAlertController <_TVRatingViewControllerDelegate, UIGestureRecognizerDelegate> {

	_TVRatingViewController* _ratingViewController;
	/*^block*/id _ratingSelectionHandler;

}

@property (nonatomic,copy) id ratingSelectionHandler;                        //@synthesize ratingSelectionHandler=_ratingSelectionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long initialRating; 
@property (assign,nonatomic) BOOL initialRatingIsSuggestion; 
@property (nonatomic,retain) UIColor * starSuggestionFillColor; 
@property (nonatomic,retain) UIColor * starFillColor; 
@property (nonatomic,retain) UIColor * starOutlineColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ratingAlertControllerWithTitle:(id)arg1 initialRating:(unsigned long long)arg2 initialRatingIsSuggestion:(BOOL)arg3 ;
-(id)init;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)setRatingSelectionHandler:(id)arg1 ;
-(void)setStarFillColor:(UIColor *)arg1 ;
-(void)setStarSuggestionFillColor:(UIColor *)arg1 ;
-(void)setStarOutlineColor:(UIColor *)arg1 ;
-(UIColor *)starFillColor;
-(UIColor *)starOutlineColor;
-(void)setInitialRating:(unsigned long long)arg1 ;
-(unsigned long long)initialRating;
-(void)_ratingViewController:(id)arg1 didSelectRating:(unsigned long long)arg2 ;
-(UIColor *)starSuggestionFillColor;
-(BOOL)initialRatingIsSuggestion;
-(void)setInitialRatingIsSuggestion:(BOOL)arg1 ;
-(id)ratingSelectionHandler;
@end

