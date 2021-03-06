/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCounterSampleBuffer.h>

@class MTLCounterSampleBufferDescriptor;

@interface MTLDebugCounterSampleBuffer : MTLToolsCounterSampleBuffer {

	MTLCounterSampleBufferDescriptor* _descriptor;
	unsigned long long _storageMode;

}

@property (nonatomic,readonly) MTLCounterSampleBufferDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long storageMode;                             //@synthesize storageMode=_storageMode - In the implementation block
-(id)description;
-(void)dealloc;
-(MTLCounterSampleBufferDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(id)resolveCounterRange:(NSRange)arg1 ;
-(id)initWithCounterSampleBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

