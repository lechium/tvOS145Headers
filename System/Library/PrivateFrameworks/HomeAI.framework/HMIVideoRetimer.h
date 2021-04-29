/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoRetimerDelegate;
@class NSString;

@interface HMIVideoRetimer : HMIVideoProcessingNode <HMFLogging> {

	opaqueCMSampleBufferRef _lastSample;
	id<HMIVideoRetimerDelegate> _delegate;

}

@property (__weak) id<HMIVideoRetimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(id<HMIVideoRetimerDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoRetimerDelegate>)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)flushWithNextSamplePTS:(SCD_Struct_HM3)arg1 ;
@end

