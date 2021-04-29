/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCLossDescriptor : NSObject <NSCopying> {

	int _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	unsigned long long _classCount;

}

@property (nonatomic,readonly) int lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                          //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) float weight;                               //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                       //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) unsigned long long classCount;              //@synthesize classCount=_classCount - In the implementation block
@property (nonatomic,readonly) float epsilon;                              //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                //@synthesize delta=_delta - In the implementation block
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 ;
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 ;
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 ;
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)weight;
-(float)epsilon;
-(float)delta;
-(int)lossType;
-(int)reductionType;
-(float)labelSmoothing;
-(unsigned long long)classCount;
-(id)initWithLossDescriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 ;
-(id)initWithLossDescriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7 ;
@end
