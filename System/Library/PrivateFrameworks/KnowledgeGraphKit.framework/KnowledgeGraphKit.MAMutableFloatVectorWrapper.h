/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit.MAFloatVectorWrapper.h>

@interface KnowledgeGraphKit.MAMutableFloatVectorWrapper : KnowledgeGraphKit.MAFloatVectorWrapper
-(id)copyWithZone:(void*)arg1 ;
-(void)appendFloat:(float)arg1 ;
-(void)appendArray:(id)arg1 ;
-(void)addVector:(id)arg1 ;
-(void)appendVector:(id)arg1 ;
-(void)appendFloats:(const float*)arg1 count:(long long)arg2 ;
-(void)appendDoubles:(const double*)arg1 count:(long long)arg2 ;
-(void)setFloat:(float)arg1 atIndex:(long long)arg2 ;
-(void)subtractVector:(id)arg1 ;
-(void)subtractScalar:(float)arg1 ;
-(void)addScalar:(float)arg1 ;
-(void)multiplyByScalar:(float)arg1 ;
-(void)divideByScalar:(float)arg1 ;
-(void)elementwiseMultiplyByWrapper:(id)arg1 ;
-(void)elementwiseRaiseToExponent:(float)arg1 ;
-(id)init;
-(id)initWithArray:(id)arg1 ;
@end

