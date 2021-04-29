/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface OBAnalyticsManager : NSObject {

	BOOL _shouldStashMetrics;
	NSMutableArray* _events;

}

@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
@property (assign) BOOL shouldStashMetrics;                        //@synthesize shouldStashMetrics=_shouldStashMetrics - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)commit;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)events;
-(void)addEvent:(id)arg1 ;
-(void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1 ;
-(void)logPresentationOfPrivacyUnifiedAbout;
-(void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)logTapOnPrivacyLinkWithIdentifier:(id)arg1 ;
-(BOOL)shouldStashMetrics;
-(void)addEvent:(id)arg1 withPayload:(id)arg2 ;
-(void)setShouldStashMetrics:(BOOL)arg1 ;
@end

