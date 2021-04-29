/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPMediaPlaybackItemMetadata, NSString;

@interface MPStreamingDownloadSessionRequest : NSObject {

	BOOL _prefersHLS;
	BOOL _shouldStartLeaseSession;
	BOOL _shouldUseAccountLessStreaming;
	BOOL _shouldUseStreamingRedownload;
	BOOL _streamingRental;
	MPMediaPlaybackItemMetadata* _playbackItemMetadata;
	unsigned long long _preferredAssetQuality;
	NSString* _assetSourceStoreFrontID;
	long long _equivalencySourceAdamID;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	NSString* _buyParameters;
	long long _endpointType;
	long long _storeAdamID;
	/*^block*/id _downloadSessionAlternativeConfigurationOptionsBlock;

}

@property (nonatomic,retain) MPMediaPlaybackItemMetadata * playbackItemMetadata;                //@synthesize playbackItemMetadata=_playbackItemMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long preferredAssetQuality;                          //@synthesize preferredAssetQuality=_preferredAssetQuality - In the implementation block
@property (assign,nonatomic) BOOL prefersHLS;                                                   //@synthesize prefersHLS=_prefersHLS - In the implementation block
@property (assign,nonatomic) BOOL shouldStartLeaseSession;                                      //@synthesize shouldStartLeaseSession=_shouldStartLeaseSession - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAccountLessStreaming;                                //@synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming - In the implementation block
@property (assign,nonatomic) BOOL shouldUseStreamingRedownload;                                 //@synthesize shouldUseStreamingRedownload=_shouldUseStreamingRedownload - In the implementation block
@property (assign,getter=isStreamingRental,nonatomic) BOOL streamingRental;                     //@synthesize streamingRental=_streamingRental - In the implementation block
@property (nonatomic,copy) NSString * assetSourceStoreFrontID;                                  //@synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID - In the implementation block
@property (assign,nonatomic) long long equivalencySourceAdamID;                                 //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleIdentifier;                               //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleVersion;                                  //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters;                                   //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) long long endpointType;                                          //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                                           //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) BOOL usesSubscriptionLease; 
@property (nonatomic,copy) id downloadSessionAlternativeConfigurationOptionsBlock;              //@synthesize downloadSessionAlternativeConfigurationOptionsBlock=_downloadSessionAlternativeConfigurationOptionsBlock - In the implementation block
-(long long)storeAdamID;
-(NSString *)buyParameters;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(long long)equivalencySourceAdamID;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(long long)endpointType;
-(BOOL)isStreamingRental;
-(void)setStreamingRental:(BOOL)arg1 ;
-(BOOL)usesSubscriptionLease;
-(void)setPlaybackItemMetadata:(MPMediaPlaybackItemMetadata *)arg1 ;
-(MPMediaPlaybackItemMetadata *)playbackItemMetadata;
-(unsigned long long)preferredAssetQuality;
-(void)setPreferredAssetQuality:(unsigned long long)arg1 ;
-(BOOL)prefersHLS;
-(void)setPrefersHLS:(BOOL)arg1 ;
-(BOOL)shouldStartLeaseSession;
-(void)setShouldStartLeaseSession:(BOOL)arg1 ;
-(BOOL)shouldUseAccountLessStreaming;
-(void)setShouldUseAccountLessStreaming:(BOOL)arg1 ;
-(BOOL)shouldUseStreamingRedownload;
-(void)setShouldUseStreamingRedownload:(BOOL)arg1 ;
-(NSString *)assetSourceStoreFrontID;
-(void)setAssetSourceStoreFrontID:(NSString *)arg1 ;
-(id)downloadSessionAlternativeConfigurationOptionsBlock;
-(void)setDownloadSessionAlternativeConfigurationOptionsBlock:(id)arg1 ;
@end

