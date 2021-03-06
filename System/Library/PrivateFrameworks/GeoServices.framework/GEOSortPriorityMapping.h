/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface GEOSortPriorityMapping : NSObject {

	NSArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(long long)resultTypeForACResultType:(int)arg1 ;
+(long long)resultSubtypeForACResultSubtype:(int)arg1 ;
+(id)sortPriorityMappingFromDefaultsValue:(id)arg1 ;
-(id)init;
-(NSArray *)entries;
-(id)initWithAutocompleteResultSortPriorityMapping:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
@end

