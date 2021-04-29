/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject {

	NSString* _ratingName;
	NSString* _ratingDescription;

}

@property (nonatomic,retain) NSString * ratingName;                       //@synthesize ratingName=_ratingName - In the implementation block
@property (nonatomic,readonly) NSString * ratingDescription;              //@synthesize ratingDescription=_ratingDescription - In the implementation block
-(id)description;
-(NSString *)ratingDescription;
-(NSString *)ratingName;
-(id)initWithRatingDescription:(id)arg1 ;
-(void)setRatingName:(NSString *)arg1 ;
@end
