/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ARUIRingUniformsCacheKey : NSObject {

	unsigned long long _hashValue;

}

@property (nonatomic,readonly) unsigned long long hashValue;              //@synthesize hashValue=_hashValue - In the implementation block
+(id)keyForRing:(id)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)hashValue;
-(id)initWithRing:(id)arg1 context:(id)arg2 ;
@end

