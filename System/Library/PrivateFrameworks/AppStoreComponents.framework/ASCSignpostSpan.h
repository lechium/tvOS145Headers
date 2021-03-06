/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSDate, NSSet, NSDateInterval;

@interface ASCSignpostSpan : NSObject <NSSecureCoding> {

	unsigned long long _primaryTag;
	NSMutableSet* _mutableSupplementaryTags;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSMutableSet * mutableSupplementaryTags;              //@synthesize mutableSupplementaryTags=_mutableSupplementaryTags - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryTag;                        //@synthesize primaryTag=_primaryTag - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supplementaryTags; 
@property (nonatomic,copy,readonly) NSDateInterval * dateRange; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDateInterval *)dateRange;
-(unsigned long long)primaryTag;
-(void)addSupplementaryTag:(unsigned long long)arg1 ;
-(void)beginEmitting;
-(void)endEmitting;
-(NSSet *)supplementaryTags;
-(NSMutableSet *)mutableSupplementaryTags;
@end

