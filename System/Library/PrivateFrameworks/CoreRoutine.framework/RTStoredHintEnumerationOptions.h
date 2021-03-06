/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTEnumerationOptions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, NSNumber, NSDateInterval;

@interface RTStoredHintEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {

	unsigned long long _batchSize;
	BOOL _ascending;
	RTLocation* _referenceLocation;
	NSNumber* _sourceFilter;
	NSDateInterval* _dateInterval;
	unsigned long long _limit;

}

@property (nonatomic,readonly) BOOL ascending;                              //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) RTLocation * referenceLocation;              //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) NSNumber * sourceFilter;                     //@synthesize sourceFilter=_sourceFilter - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;               //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(unsigned long long)batchSize;
-(NSDateInterval *)dateInterval;
-(RTLocation *)referenceLocation;
-(unsigned long long)limit;
-(Class)enumeratedType;
-(id)initWithReferenceLocation:(id)arg1 sourceFilter:(id)arg2 ascending:(BOOL)arg3 dateInterval:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ;
-(NSNumber *)sourceFilter;
-(id)initWithReferenceLocation:(id)arg1 ascending:(BOOL)arg2 dateInterval:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
@end

