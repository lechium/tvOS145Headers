/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol CAAnimationDelegate;
@class NSString;

@interface _UIViewWeakCAAnimationDelegate : NSObject <CAAnimationDelegate> {

	id<CAAnimationDelegate> _animationDelegate;
	SCD_Struct_UI32 _flags;

}

@property (nonatomic,__weak,readonly) id<CAAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakAnimationDelegate:(id)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id<CAAnimationDelegate>)animationDelegate;
-(id)initWithAnimationDelegate:(id)arg1 ;
@end

