/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet;

@interface TVCKStoreFavoriteShowInfo : NSObject <NSSecureCoding> {

	NSDate* _autoBlueDotDate;
	NSSet* _autoBlueDotSeasons;

}

@property (nonatomic,copy) NSDate * autoBlueDotDate;                //@synthesize autoBlueDotDate=_autoBlueDotDate - In the implementation block
@property (nonatomic,copy) NSSet * autoBlueDotSeasons;              //@synthesize autoBlueDotSeasons=_autoBlueDotSeasons - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldDetermineStatusOfEpisodeWithReleaseDate:(id)arg1 inSeasonWithID:(id)arg2 ;
-(id)initWithEligibilityDate:(id)arg1 eligibleSeasonIDs:(id)arg2 ;
-(NSDate *)autoBlueDotDate;
-(NSSet *)autoBlueDotSeasons;
-(void)setAutoBlueDotDate:(NSDate *)arg1 ;
-(void)setAutoBlueDotSeasons:(NSSet *)arg1 ;
@end

