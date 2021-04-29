/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMapTable;

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject {

	SCD_Struct_PX37 _delegateRespondsTo;
	BOOL _allowSwipeUp;
	BOOL _allowSwipeDown;
	id<PXVerticalSwipeGestureRecognizerHelperDelegate> _delegate;
	NSMapTable* _dependentScrollViews;

}

@property (nonatomic,readonly) NSMapTable * dependentScrollViews;                                             //@synthesize dependentScrollViews=_dependentScrollViews - In the implementation block
@property (assign,nonatomic,__weak) id<PXVerticalSwipeGestureRecognizerHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowSwipeUp;                                                               //@synthesize allowSwipeUp=_allowSwipeUp - In the implementation block
@property (assign,nonatomic) BOOL allowSwipeDown;                                                             //@synthesize allowSwipeDown=_allowSwipeDown - In the implementation block
-(id)init;
-(id<PXVerticalSwipeGestureRecognizerHelperDelegate>)delegate;
-(void)setDelegate:(id<PXVerticalSwipeGestureRecognizerHelperDelegate>)arg1 ;
-(BOOL)verticalSwipeGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)verticalSwipeGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg1 ;
-(BOOL)allowSwipeUp;
-(void)setAllowSwipeUp:(BOOL)arg1 ;
-(BOOL)allowSwipeDown;
-(void)setAllowSwipeDown:(BOOL)arg1 ;
-(NSMapTable *)dependentScrollViews;
@end

