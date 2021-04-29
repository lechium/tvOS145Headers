/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WiFiScanProvider, WiFiLocationProvider, OS_dispatch_queue;
@class NSSet, NSObject, WiFiLexicon;

@interface WiFiAvailabilityEngine : NSObject {

	double _availabilityMatchMaximumAge;
	NSSet* _providers;
	NSSet* _sources;
	NSSet* _availableNetworks;
	/*^block*/id _availabilityChangedCallback;
	id<WiFiScanProvider> _scanProvider;
	id<WiFiLocationProvider> _locationProvider;
	NSObject*<OS_dispatch_queue> _queue;
	WiFiLexicon* _wifiLexicon;

}

@property (nonatomic,copy) NSSet * providers;                                               //@synthesize providers=_providers - In the implementation block
@property (nonatomic,copy) NSSet * sources;                                                 //@synthesize sources=_sources - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiScanProvider> scanProvider;                      //@synthesize scanProvider=_scanProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiLocationProvider> locationProvider;              //@synthesize locationProvider=_locationProvider - In the implementation block
@property (nonatomic,retain) NSSet * availableNetworks;                                     //@synthesize availableNetworks=_availableNetworks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) WiFiLexicon * wifiLexicon;                                     //@synthesize wifiLexicon=_wifiLexicon - In the implementation block
@property (assign,nonatomic) double availabilityMatchMaximumAge;                            //@synthesize availabilityMatchMaximumAge=_availabilityMatchMaximumAge - In the implementation block
@property (nonatomic,copy) id availabilityChangedCallback;                                  //@synthesize availabilityChangedCallback=_availabilityChangedCallback - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)sources;
-(void)setSources:(NSSet *)arg1 ;
-(id<WiFiLocationProvider>)locationProvider;
-(void)setLocationProvider:(id<WiFiLocationProvider>)arg1 ;
-(NSSet *)providers;
-(NSSet *)availableNetworks;
-(void)setProviders:(NSSet *)arg1 ;
-(void)setAvailableNetworks:(NSSet *)arg1 ;
-(void)_setupProviderCallbacks:(id)arg1 ;
-(void)_setupSourceCallbacks:(id)arg1 ;
-(void)_handleScanResultCallback:(id)arg1 error:(id)arg2 ;
-(double)availabilityMatchMaximumAge;
-(id)availabilityChangedCallback;
-(id)_findExistingAvailabilityMatchForScannedNetwork:(id)arg1 ;
-(id)_findRelevantNetworkMatchForScannedNetwork:(id)arg1 ;
-(id)_createAvailabilityMatchForCandidate:(id)arg1 scannedNetwork:(id)arg2 ;
-(void)_findAvailabilityMatchesInSourcesForBSSIDS:(id)arg1 ;
-(void)_handleCandidateMatches:(id)arg1 ;
-(void)_removeStaleMatches;
-(WiFiLexicon *)wifiLexicon;
-(id)findRecommendationsForScannedNetwork:(id)arg1 ;
-(id)initWithProviders:(id)arg1 sources:(id)arg2 ;
-(void)setAvailabilityMatchMaximumAge:(double)arg1 ;
-(void)_handleWalletRelevancyAdded:(id)arg1 removed:(id)arg2 ;
-(void)_handle3BarsRelevancyAdded:(id)arg1 removed:(id)arg2 ;
-(id)findRecommendationForScannedNetwork:(id)arg1 ;
-(void)setAvailabilityChangedCallback:(id)arg1 ;
-(id<WiFiScanProvider>)scanProvider;
-(void)setScanProvider:(id<WiFiScanProvider>)arg1 ;
-(void)setWifiLexicon:(WiFiLexicon *)arg1 ;
@end

