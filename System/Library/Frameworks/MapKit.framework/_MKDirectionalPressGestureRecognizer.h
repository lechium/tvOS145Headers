/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet;

@interface _MKDirectionalPressGestureRecognizer : UIGestureRecognizer {

	long long _horizontalDirection;
	double _horizontalForce;
	long long _verticalDirection;
	double _verticalForce;
	NSMutableSet* _activePresses;
	BOOL _forVariableForcePresses;

}

@property (nonatomic,readonly) long long horizontalDirection;                                              //@synthesize horizontalDirection=_horizontalDirection - In the implementation block
@property (nonatomic,readonly) double horizontalForce;                                                     //@synthesize horizontalForce=_horizontalForce - In the implementation block
@property (nonatomic,readonly) long long verticalDirection;                                                //@synthesize verticalDirection=_verticalDirection - In the implementation block
@property (nonatomic,readonly) double verticalForce;                                                       //@synthesize verticalForce=_verticalForce - In the implementation block
@property (getter=isForVariableForcePresses,nonatomic,readonly) BOOL forVariableForcePresses;              //@synthesize forVariableForcePresses=_forVariableForcePresses - In the implementation block
-(void)reset;
-(long long)horizontalDirection;
-(long long)verticalDirection;
-(BOOL)isForVariableForcePresses;
-(double)horizontalForce;
-(double)verticalForce;
-(long long)_horizontalDirectionForPresses:(id)arg1 force:(double*)arg2 ;
-(long long)_verticalDirectionForPresses:(id)arg1 force:(double*)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

