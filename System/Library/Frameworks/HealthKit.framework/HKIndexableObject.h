/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKIndexableObject : NSObject {

	id _object;
	unsigned long long _compoundIndex;

}

@property (nonatomic,copy,readonly) id object;                                //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundIndex;              //@synthesize compoundIndex=_compoundIndex - In the implementation block
@property (nonatomic,readonly) unsigned char outermostIndex; 
+(id)indexableObjectWithObject:(id)arg1 ;
+(id)indexableObjectWithObject:(id)arg1 index:(unsigned char)arg2 error:(id*)arg3 ;
+(id)indexableObjectsByApplyingOutermostIndex:(id)arg1 expectedCount:(long long)arg2 error:(id*)arg3 ;
+(id)indexableObjectWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2 ;
-(unsigned char)outermostIndex;
-(id)indexableObjectPoppingIndexWithError:(id*)arg1 ;
-(id)indexableObjectCollectingPushingIndex:(unsigned char)arg1 error:(id*)arg2 ;
-(unsigned long long)compoundIndex;
@end

