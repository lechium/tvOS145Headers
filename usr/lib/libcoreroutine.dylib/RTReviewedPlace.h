/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface RTReviewedPlace : NSObject {

	BOOL _hasUserReviewed;
	unsigned long long _muid;
	NSDate* _lastSuggestedReviewDate;
	NSDate* _modifiedDate;

}

@property (nonatomic,readonly) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) NSDate * lastSuggestedReviewDate;              //@synthesize lastSuggestedReviewDate=_lastSuggestedReviewDate - In the implementation block
@property (nonatomic,readonly) BOOL hasUserReviewed;                          //@synthesize hasUserReviewed=_hasUserReviewed - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedDate;                         //@synthesize modifiedDate=_modifiedDate - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)muid;
-(NSDate *)modifiedDate;
-(id)initWithMuid:(unsigned long long)arg1 lastSuggestedReviewDate:(id)arg2 hasUserReviewed:(BOOL)arg3 modifiedDate:(id)arg4 ;
-(NSDate *)lastSuggestedReviewDate;
-(BOOL)hasUserReviewed;
@end

