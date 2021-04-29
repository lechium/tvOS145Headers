/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject {

	NSDictionary* _bagRadioDictionary;

}

@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) long long getTracksDPInfoKBSyncCount; 
@property (nonatomic,readonly) long long maxSupportedProtocolVersion; 
@property (getter=isContinueListeningAvailable,nonatomic,readonly) BOOL continueListeningAvailable; 
@property (nonatomic,readonly) long long continueListeningMaxQueueSizeInRequest; 
@property (nonatomic,readonly) long long continueListeningMaxUpcomingTracksSizeToMaintain; 
@property (nonatomic,readonly) long long continueListeningLoadStationThreshold; 
-(NSURL *)baseURL;
-(id)initWithBagRadioDictionary:(id)arg1 ;
-(long long)getTracksDPInfoKBSyncCount;
-(long long)maxSupportedProtocolVersion;
-(BOOL)isContinueListeningAvailable;
-(long long)continueListeningMaxQueueSizeInRequest;
-(long long)continueListeningMaxUpcomingTracksSizeToMaintain;
-(long long)continueListeningLoadStationThreshold;
-(BOOL)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2 ;
-(id)urlForBagRadioKey:(id)arg1 ;
@end
