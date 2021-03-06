/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {

	NSMutableArray* _destinations;

}

@property (nonatomic,readonly) NSMutableArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(id)init;
-(void)addDestination:(id)arg1 ;
-(NSMutableArray *)destinations;
-(void)removeDestination:(id)arg1 ;
-(void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)updateWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)sendToAllDestinations:(id)arg1 ;
-(void)removePhotoLibraryFromDestinations;
-(id)_readConfiguration:(id)arg1 ;
-(void)_parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
@end

