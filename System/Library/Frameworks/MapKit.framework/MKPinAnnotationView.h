/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@protocol _MKPinAnnotationViewDelegate;
@class UIImageView, UIColor;

@interface MKPinAnnotationView : MKAnnotationView {

	UIImageView* _shadowView;
	UIColor* _pinTintColor;
	id<_MKPinAnnotationViewDelegate> _delegate;
	int _state;
	BOOL _animatesDrop;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<_MKPinAnnotationViewDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * pinTintColor; 
@property (assign,nonatomic) BOOL animatesDrop; 
@property (assign,nonatomic) unsigned long long pinColor; 
+(id)_imageCache;
+(Class)layerClass;
+(Class)_mapkitLeafClass;
+(id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 traits:(id)arg4 ;
+(id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 pinColor:(id)arg3 traits:(id)arg4 ;
+(id)redPinColor;
+(id)_shadowImage;
+(CGPoint)_calloutOffset;
+(CGPoint)_leftCalloutOffset;
+(CGPoint)_rightCalloutOffset;
+(id)greenPinColor;
+(id)purplePinColor;
+(id)_pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3 ;
+(id)_bounceAnimation;
+(id)_dropBounceAnimation;
+(CGSize)_perceivedSize;
+(CGRect)_pinFrameForPosition:(CGPoint)arg1 ;
+(id)_reuseIdentifier;
+(CGPoint)_perceivedAnchorPoint;
+(CGPoint)_shadowAnchorPoint;
-(id)description;
-(int)_state;
-(id<_MKPinAnnotationViewDelegate>)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(id)_image;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(unsigned long long)pinColor;
-(void)setPinColor:(unsigned long long)arg1 ;
-(id)_pins;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(BOOL)arg2 ;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(void)setPinTintColor:(UIColor *)arg1 ;
-(UIColor *)pinTintColor;
-(void)_removeAllAnimations;
-(void)_invalidateImage;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)_updateShadowLayer;
-(void)_didUpdatePosition;
-(id)_pinBounceImages;
-(id)_pinJumpImages;
-(id)_floatingImage;
-(id)_bounceAnimation:(BOOL)arg1 withDelay:(double)arg2 addToLayer:(BOOL)arg3 ;
-(void)_liftForDraggingAnimated:(BOOL)arg1 ;
-(void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_liftForDraggingAfterBounceAnimated:(BOOL)arg1 ;
-(void)_liftDidEnd:(id)arg1 ;
-(void)_cleanupAfterPinDropAnimation;
-(id)_highlightedImage;
-(CGPoint)_draggingDropOffset;
-(void)setAnimatesDrop:(BOOL)arg1 ;
-(BOOL)animatesDrop;
-(CGRect)_significantBounds;
-(void)_stopDrop;
-(void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3 ;
@end

