/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@protocol _MKMotionEffectDelegate;
@interface _MKMotionEffect : UIMotionEffect {

	UIOffset _offset;
	BOOL _enabled;
	id<_MKMotionEffectDelegate> _delegate;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<_MKMotionEffectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_MKMotionEffectDelegate>)delegate;
-(void)setDelegate:(id<_MKMotionEffectDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CATransform3D)transformWithTranslationScale:(UIOffset)arg1 rotationScale:(UIOffset)arg2 ;
-(UIOffset)offsetWithScale:(UIOffset)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(UIOffset)rawOffset;
@end

