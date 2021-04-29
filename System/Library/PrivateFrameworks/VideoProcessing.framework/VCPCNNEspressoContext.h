/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCPCNNEspressoContext : NSObject {

	void* _espressoContext;

}

@property (nonatomic,readonly) void* espressoContext;              //@synthesize espressoContext=_espressoContext - In the implementation block
+(BOOL)supportGPU;
+(void*)createContextWithForceCPU:(BOOL)arg1 ;
+(void*)sharedEspressoContext:(BOOL)arg1 ;
-(id)initWithForceCPU:(BOOL)arg1 shared:(BOOL)arg2 ;
-(void*)espressoContext;
@end
