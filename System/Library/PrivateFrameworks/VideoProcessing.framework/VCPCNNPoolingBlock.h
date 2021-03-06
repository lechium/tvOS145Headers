/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNPoolingBlock : VCPCNNBlock {

	int _px;
	int _py;
	int _chunk;

}
+(id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
-(BOOL)useGPU;
-(BOOL)supportGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)forward;
-(id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
@end

