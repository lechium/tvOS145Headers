/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>
@required
-(void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(CGPoint)arg2;
-(void)panningTransformer:(id)arg1 didPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 touchPosition:(CGPoint)arg4 velocity:(CGVector)arg5 didChangeAxis:(BOOL)arg6 axisLock:(unsigned long long)arg7;
-(void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 velocity:(CGVector)arg4;
-(void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(CGPoint)arg2;

@end

