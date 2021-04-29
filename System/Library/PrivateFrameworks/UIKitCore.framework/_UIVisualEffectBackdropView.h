/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectSubview.h>

@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;

}

@property (assign,nonatomic) long long renderMode; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * captureGroup; 
@property (nonatomic,readonly) CABackdropLayer * backdropLayer; 
+(Class)layerClass;
-(long long)renderMode;
-(void)setRenderMode:(long long)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)setCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)removeFromCurrentCaptureGroup;
-(void)applyRequestedFilterEffects;
-(void)applyIdentityFilterEffects;
-(_UIVisualEffectViewBackdropCaptureGroup *)captureGroup;
-(BOOL)_isTransparentFocusItem;
-(void)_applyScaleHintAsRequested:(BOOL)arg1 ;
@end

