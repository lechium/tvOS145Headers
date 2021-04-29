/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface MLCEmbeddingDescriptor : NSObject <NSCopying> {

	BOOL _scalesGradientByFrequency;
	NSNumber* _embeddingCount;
	NSNumber* _embeddingDimension;
	NSNumber* _paddingIndex;
	NSNumber* _maximumNorm;
	NSNumber* _pNorm;

}

@property (nonatomic,readonly) NSNumber * embeddingCount;                   //@synthesize embeddingCount=_embeddingCount - In the implementation block
@property (nonatomic,readonly) NSNumber * embeddingDimension;               //@synthesize embeddingDimension=_embeddingDimension - In the implementation block
@property (nonatomic,readonly) NSNumber * paddingIndex;                     //@synthesize paddingIndex=_paddingIndex - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumNorm;                      //@synthesize maximumNorm=_maximumNorm - In the implementation block
@property (nonatomic,readonly) NSNumber * pNorm;                            //@synthesize pNorm=_pNorm - In the implementation block
@property (nonatomic,readonly) BOOL scalesGradientByFrequency;              //@synthesize scalesGradientByFrequency=_scalesGradientByFrequency - In the implementation block
+(id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(BOOL)arg6 ;
+(id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSNumber *)paddingIndex;
-(NSNumber *)maximumNorm;
-(NSNumber *)pNorm;
-(BOOL)scalesGradientByFrequency;
-(NSNumber *)embeddingCount;
-(NSNumber *)embeddingDimension;
-(id)initWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(BOOL)arg6 ;
@end

