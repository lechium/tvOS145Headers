/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SACallTreeNode : NSObject {

	unsigned long long _sampleCount;
	unsigned long long _startSampleIndex;

}

@property (assign) unsigned long long sampleCount;                   //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign) unsigned long long startSampleIndex;              //@synthesize startSampleIndex=_startSampleIndex - In the implementation block
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)startSampleIndex;
-(id)initWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2 ;
-(void)setStartSampleIndex:(unsigned long long)arg1 ;
@end

