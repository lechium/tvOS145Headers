/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKZoomingGestureControlConfiguration;
@class UITapGestureRecognizer, _MKZoomingPanGestureRecognizer, NSString;

@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	BOOL _didReceive1stTap;
	BOOL _timerOn;
	UITapGestureRecognizer* _tapGestureRecognizer;
	_MKZoomingPanGestureRecognizer* _panGestureRecognizer;
	CGPoint _locationOfTapGesture;
	id<MKZoomingGestureControlConfiguration> _configuration;

}

@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                      //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) _MKZoomingPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) CGPoint locationOfTapGesture;                                       //@synthesize locationOfTapGesture=_locationOfTapGesture - In the implementation block
@property (nonatomic,copy) id<MKZoomingGestureControlConfiguration> configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) double velocity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id<MKZoomingGestureControlConfiguration>)configuration;
-(void)setConfiguration:(id<MKZoomingGestureControlConfiguration>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)scale;
-(void)reset;
-(double)velocity;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(_MKZoomingPanGestureRecognizer *)panGestureRecognizer;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)_tapGestureRecognizerStateDidChange:(id)arg1 ;
-(void)_panGestureRecognizerStateDidChange:(id)arg1 ;
-(void)_clearTapTimer;
-(void)_startTapTimer:(double)arg1 ;
-(void)_tooSlow:(id)arg1 ;
-(CGPoint)locationOfTapGesture;
@end

