/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/_TVMLBrowserViewController.h>
#import <libobjc.A.dylib/TVBrowserViewControllerPrivateDelegate.h>

@class NSString;

@interface VUIProductBrowserViewController : _TVMLBrowserViewController <TVBrowserViewControllerPrivateDelegate> {

	BOOL _transitionAnimationEnabled;

}

@property (assign,getter=isTransitionAnimationEnabled,nonatomic) BOOL transitionAnimationEnabled;              //@synthesize transitionAnimationEnabled=_transitionAnimationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)browserCellClass;
-(id)initPrivate;
-(id)documentControllerForElement:(id)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(BOOL)browserViewController:(id)arg1 shouldShowElement:(id)arg2 ;
-(id)mediaInfoForElement:(id)arg1 ;
-(void)setTransitionAnimationEnabled:(BOOL)arg1 ;
-(BOOL)isTransitionAnimationEnabled;
@end

