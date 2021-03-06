/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, _UIVectorTextLayout, NSString;

@interface _UIVectorLabelLayer : CALayer <CALayerDelegate, CAAnimationDelegate> {

	NSArray* _currentLayers;
	_UIVectorTextLayout* _currentTextLayout;
	unsigned long long _maxRenderedMoveDistance;

}

@property (nonatomic,copy) _UIVectorTextLayout * textLayout; 
@property (assign,nonatomic) unsigned long long maxRenderedMoveDistance;              //@synthesize maxRenderedMoveDistance=_maxRenderedMoveDistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setMaxRenderedMoveDistance:(unsigned long long)arg1 ;
-(void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_cleanupUnusedLayers;
-(id)_layersForTextLayout:(id)arg1 ;
-(BOOL)_isPathCompatible:(CGPathRef)arg1 with:(CGPathRef)arg2 ;
-(void)_transitionWithSetup:(/*^block*/id)arg1 target:(/*^block*/id)arg2 ;
-(id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2 ;
-(unsigned long long)maxRenderedMoveDistance;
@end

