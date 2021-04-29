/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLComputePipelineState, MTLFunction;
@interface SCNMTLComputePipeline : NSObject {

	id<MTLComputePipelineState> _state;
	id<MTLFunction> _computeFunction;

}

@property (nonatomic,retain) id<MTLComputePipelineState> state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id<MTLFunction> computeFunction;                //@synthesize computeFunction=_computeFunction - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(id<MTLComputePipelineState>)state;
-(void)setState:(id<MTLComputePipelineState>)arg1 ;
-(void)setComputeFunction:(id<MTLFunction>)arg1 ;
-(id<MTLFunction>)computeFunction;
@end

