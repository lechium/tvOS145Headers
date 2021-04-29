/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKPuckAnnotationView.h>
#import <libobjc.A.dylib/_MKBalloonCalloutViewConfiguring.h>
#import <libobjc.A.dylib/_MKKVOProxyDelegate.h>

@class UIColor, UIImage, UIView, _MKKVOProxy, NSString;

@interface _MKUserLocationView : _MKPuckAnnotationView <_MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate> {

	double _externalMaxAccuracyRadius;
	BOOL _radiusBasedAccuracyOpacity;
	BOOL _hasExplicitCalloutStyle;
	BOOL _showingPreciseAuthorizedLocation;
	UIImage* _balloonImage;
	UIColor* _balloonImageTintColor;
	_MKKVOProxy* _kvoProxy;

}

@property (assign,setter=_setShowingPreciseAuthorizedLocation:,getter=_showingPreciseAuthorizedLocation,nonatomic) BOOL showingPreciseAuthorizedLocation;              //@synthesize showingPreciseAuthorizedLocation=_showingPreciseAuthorizedLocation - In the implementation block
@property (getter=_balloonCalloutStyle,nonatomic,readonly) long long balloonCalloutStyle; 
@property (getter=_balloonTintColor,nonatomic,readonly) UIColor * balloonTintColor; 
@property (getter=_balloonStrokeColor,nonatomic,readonly) UIColor * balloonStrokeColor; 
@property (getter=_balloonImage,nonatomic,readonly) UIImage * balloonImage; 
@property (getter=_balloonContentView,nonatomic,readonly) UIView * balloonContentView; 
@property (getter=_balloonInnerStrokeColor,nonatomic,readonly) UIColor * balloonInnerStrokeColor; 
@property (getter=_balloonImageTintColor,nonatomic,readonly) UIColor * balloonImageTintColor; 
@property (getter=_balloonCalloutShouldShowArrow,nonatomic,readonly) BOOL balloonCalloutShouldShowArrow; 
@property (getter=_balloonCalloutShouldCenterWhenOffscreen,nonatomic,readonly) BOOL balloonCalloutShouldCenterWhenOffscreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setShowingPreciseAuthorizedLocation:(BOOL)arg1 ;
-(long long)_balloonCalloutStyle;
-(id)_balloonTintColor;
-(id)_balloonStrokeColor;
-(id)_balloonImage;
-(id)_balloonInnerStrokeColor;
-(id)_balloonImageTintColor;
-(BOOL)_balloonCalloutShouldCenterWhenOffscreen;
-(BOOL)_allowedToShowCallout;
-(BOOL)shouldShowCallout;
-(void)_showCallout:(BOOL)arg1 ;
-(void)_dismissCallout:(BOOL)arg1 ;
-(void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDetailCalloutAccessoryView:(id)arg1 ;
-(void)setLeftCalloutAccessoryView:(id)arg1 ;
-(void)setRightCalloutAccessoryView:(id)arg1 ;
-(void)_setCalloutStyle:(long long)arg1 ;
-(void)_updateLegacyConfiguration;
-(unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1 ;
-(void)setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(void)_updateCalloutOffset;
-(void)_stopObservingAnnotation;
-(void)_startObservingAnnotation;
-(void)_updateMaxRadiusToShowAccuracyRing;
-(void)_updateCalloutStyle;
-(void)_setBalloonImage:(id)arg1 ;
-(void)_setBalloonImageTintColor:(id)arg1 ;
-(BOOL)_showingPreciseAuthorizedLocation;
@end
