/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIInteractionEffect.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect> {

	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id progressBlock;                        //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 ;
@end

