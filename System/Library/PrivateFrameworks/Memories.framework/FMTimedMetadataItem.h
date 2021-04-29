/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FMTimedMetadataItem : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _values;
	SCD_Struct_VE9 _timeRange;

}

@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) SCD_Struct_VE9 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) NSDictionary * values;                 //@synthesize values=_values - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDictionary *)values;
-(NSString *)identifier;
-(SCD_Struct_VE9)timeRange;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 timeRange:(SCD_Struct_VE9)arg3 values:(id)arg4 ;
-(void)adjustDurationTo:(SCD_Struct_TV3)arg1 ;
@end

