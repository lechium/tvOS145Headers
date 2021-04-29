/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDScorecardLayout, NSString, NSArray;

@interface GEOPlaceQuestionnaire : NSObject {

	GEOPDScorecardLayout* _scorecardLayout;
	BOOL _alwaysPositionInitialRatingCtaTowardsTop;
	NSString* _version;
	NSArray* _ratingCategories;

}

@property (nonatomic,copy,readonly) NSString * version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * ratingCategories;                                 //@synthesize ratingCategories=_ratingCategories - In the implementation block
@property (nonatomic,readonly) BOOL alwaysPositionInitialRatingCtaTowardsTop;              //@synthesize alwaysPositionInitialRatingCtaTowardsTop=_alwaysPositionInitialRatingCtaTowardsTop - In the implementation block
-(NSString *)version;
-(id)initWithGEOPDPlaceQuestionnaire:(id)arg1 ;
-(BOOL)alwaysPositionInitialRatingCtaTowardsTop;
-(NSArray *)ratingCategories;
@end

