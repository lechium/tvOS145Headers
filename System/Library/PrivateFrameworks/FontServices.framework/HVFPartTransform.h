/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@interface HVFPartTransform : NSObject {

	HVF_PartTransform* partTransform;

}

@property (assign,nonatomic) CGVector translation; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) HVFAxisValues* axisValues; 
@property (assign,nonatomic) HVFSubpartTransforms* subpartTransforms; 
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(CGVector)translation;
-(void)setTranslation:(CGVector)arg1 ;
-(id)initForPartAtIndex:(unsigned long long)arg1 withLoader:(/*^block*/id)arg2 ;
-(HVFAxisValues*)axisValues;
-(HVFSubpartTransforms*)subpartTransforms;
-(BOOL)renderToContext:(/*^block*/id)arg1 ;
@end

