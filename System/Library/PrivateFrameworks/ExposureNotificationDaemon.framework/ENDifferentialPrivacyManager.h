/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface ENDifferentialPrivacyManager : NSObject {

	NSDictionary* _metadata;

}

@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(unsigned short)userRiskScoreForExposureDetectionSummary:(id)arg1 ;
+(id)hashForServerExposureConfiguration:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)initWithServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2 ;
-(void)updatedServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2 ;
-(void)reportUserRiskScoreWithSummary:(id)arg1 ;
-(void)reportUserRiskParameters:(id)arg1 ;
-(void)reportUserBeaconCount:(id)arg1 ;
-(void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)arg1 ;
-(void)reportUserExposureNotificationTapped:(BOOL)arg1 classificationIndex:(unsigned char)arg2 ;
-(void)reportUserCodeVerified:(id)arg1 ;
-(void)reportUserKeysUploaded:(id)arg1 ;
@end

