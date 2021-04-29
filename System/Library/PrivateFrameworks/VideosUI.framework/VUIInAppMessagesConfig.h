/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface VUIInAppMessagesConfig : NSObject {

	double _minimumPresentationIntervalNormal;
	double _minimumPresentationIntervalRestricted;
	double _pageEventDelay;
	NSArray* _whitelistedFields;

}

@property (assign,nonatomic) double minimumPresentationIntervalNormal;                  //@synthesize minimumPresentationIntervalNormal=_minimumPresentationIntervalNormal - In the implementation block
@property (assign,nonatomic) double minimumPresentationIntervalRestricted;              //@synthesize minimumPresentationIntervalRestricted=_minimumPresentationIntervalRestricted - In the implementation block
@property (assign,nonatomic) double pageEventDelay;                                     //@synthesize pageEventDelay=_pageEventDelay - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedFields;                               //@synthesize whitelistedFields=_whitelistedFields - In the implementation block
-(id)init;
-(void)setWhitelistedFields:(NSArray *)arg1 ;
-(NSArray *)whitelistedFields;
-(double)minimumPresentationIntervalNormal;
-(void)setMinimumPresentationIntervalNormal:(double)arg1 ;
-(double)minimumPresentationIntervalRestricted;
-(void)setMinimumPresentationIntervalRestricted:(double)arg1 ;
-(double)pageEventDelay;
-(void)setPageEventDelay:(double)arg1 ;
@end

