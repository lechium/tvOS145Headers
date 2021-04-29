/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface PPLabelStrengthSets : NSObject {

	NSSet* _weak;
	NSSet* _strong;

}

@property (nonatomic,readonly) NSSet * weak;                //@synthesize weak=_weak - In the implementation block
@property (nonatomic,readonly) NSSet * strong;              //@synthesize strong=_strong - In the implementation block
+(id)labelStrengthSetsWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
-(NSSet *)weak;
-(NSSet *)strong;
-(id)initWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
@end

