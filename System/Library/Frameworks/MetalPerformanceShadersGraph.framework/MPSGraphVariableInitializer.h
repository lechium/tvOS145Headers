/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MPSGraphVariableInitializer : NSObject {

	double _constant;
	double _minimum;
	double _maximum;
	NSString* _file;
	unsigned _initializerType;

}

@property (nonatomic,readonly) unsigned initializerType;              //@synthesize initializerType=_initializerType - In the implementation block
+(id)initializerWithConstant:(double)arg1 ;
+(id)initializerWithZeros;
+(id)initializerWithOnes;
+(id)initializerWithRandomUniformWithMinimum:(double)arg1 maximum:(double)arg2 ;
+(id)initializerWithFile:(id)arg1 ;
-(id)init;
-(id)initializedDataWithNumberOfValues:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
-(unsigned)initializerType;
@end
