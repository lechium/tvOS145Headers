/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITextView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, NSString;

@interface _PXUITextView : UITextView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setEditable:(BOOL)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(id)_linkTappedByGesture:(id)arg1 charIndexAtPoint:(unsigned long long*)arg2 ;
-(double)_distanceFromContentToGivenPoint:(CGPoint)arg1 charIndexAtPoint:(unsigned long long*)arg2 ;
@end

