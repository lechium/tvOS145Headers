/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFScanManagerDelegate, OS_dispatch_queue;
@class WFClient, NSMutableSet, NSMutableArray, NSObject;

@interface WFScanManager : NSObject {

	BOOL _doUnFilteredScanning;
	BOOL _supportsHotspotHelper;
	BOOL _supportsUnfilteredScanning;
	BOOL _hotspotHelperScanning;
	BOOL _isUsingCoreWiFi;
	long long _state;
	double _scanInterval;
	unsigned long long _consecutiveZeroFilteredScanResults;
	unsigned long long _consecutiveZeroUnFilteredScanResults;
	id<WFScanManagerDelegate> _delegate;
	WFClient* _wifiClient;
	NSMutableSet* _networks;
	NSMutableArray* _scanQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _scanDispatchQueue;
	/*^block*/id _singleScanBlock;
	NSMutableSet* _hotspotPluginNetworks;
	long long _numberOfScansPerformed;

}

@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<WFScanManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double scanInterval;                                         //@synthesize scanInterval=_scanInterval - In the implementation block
@property (nonatomic,retain) WFClient * wifiClient;                                       //@synthesize wifiClient=_wifiClient - In the implementation block
@property (nonatomic,retain) NSMutableSet * networks;                                     //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) NSMutableArray * scanQueue;                                  //@synthesize scanQueue=_scanQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                  //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> scanDispatchQueue;              //@synthesize scanDispatchQueue=_scanDispatchQueue - In the implementation block
@property (nonatomic,copy) id singleScanBlock;                                            //@synthesize singleScanBlock=_singleScanBlock - In the implementation block
@property (nonatomic,retain) NSMutableSet * hotspotPluginNetworks;                        //@synthesize hotspotPluginNetworks=_hotspotPluginNetworks - In the implementation block
@property (assign,nonatomic) BOOL supportsHotspotHelper;                                  //@synthesize supportsHotspotHelper=_supportsHotspotHelper - In the implementation block
@property (assign,nonatomic) BOOL supportsUnfilteredScanning;                             //@synthesize supportsUnfilteredScanning=_supportsUnfilteredScanning - In the implementation block
@property (assign,nonatomic) BOOL hotspotHelperScanning;                                  //@synthesize hotspotHelperScanning=_hotspotHelperScanning - In the implementation block
@property (assign,nonatomic) BOOL isUsingCoreWiFi;                                        //@synthesize isUsingCoreWiFi=_isUsingCoreWiFi - In the implementation block
@property (assign) long long numberOfScansPerformed;                                      //@synthesize numberOfScansPerformed=_numberOfScansPerformed - In the implementation block
@property (assign) unsigned long long consecutiveZeroFilteredScanResults;                 //@synthesize consecutiveZeroFilteredScanResults=_consecutiveZeroFilteredScanResults - In the implementation block
@property (assign) unsigned long long consecutiveZeroUnFilteredScanResults;               //@synthesize consecutiveZeroUnFilteredScanResults=_consecutiveZeroUnFilteredScanResults - In the implementation block
@property (assign) BOOL doUnFilteredScanning;                                             //@synthesize doUnFilteredScanning=_doUnFilteredScanning - In the implementation block
-(id)init;
-(id<WFScanManagerDelegate>)delegate;
-(void)setDelegate:(id<WFScanManagerDelegate>)arg1 ;
-(long long)state;
-(void)resume;
-(void)setState:(long long)arg1 ;
-(void)start;
-(void)stop;
-(void)pause;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)networks;
-(void)setNetworks:(NSMutableSet *)arg1 ;
-(BOOL)_isScanning;
-(id)_knownNetworks;
-(double)scanInterval;
-(void)setScanInterval:(double)arg1 ;
-(void)_scan;
-(WFClient *)wifiClient;
-(void)setWifiClient:(WFClient *)arg1 ;
-(id)initWithClient:(id)arg1 scanInterval:(double)arg2 delegate:(id)arg3 ;
-(id)hotspotHelperForScanRecord:(id)arg1 ;
-(NSMutableArray *)scanQueue;
-(void)setScanQueue:(NSMutableArray *)arg1 ;
-(void)_startHotspotPluginScan;
-(void)_cancelQueuedScan;
-(void)_stopNetworkPluginScan;
-(void)_queueScan;
-(void)setSingleScanBlock:(id)arg1 ;
-(double)setTwentyPercentSkew:(double)arg1 ;
-(id)singleScanBlock;
-(void)_scanningWillStart;
-(void)_scanningDidFinishWithError:(id)arg1 ;
-(void)_processNextScan;
-(BOOL)supportsUnfilteredScanning;
-(NSObject*<OS_dispatch_queue>)scanDispatchQueue;
-(void)_updatePartialScanResults:(id)arg1 ;
-(id)_scanRecordsFromScanResults:(id)arg1 ;
-(void)_resetNoNetworksFoundCounters;
-(void)_checkForNoNetworksFound;
-(NSMutableSet *)hotspotPluginNetworks;
-(BOOL)supportsHotspotHelper;
-(BOOL)hotspotHelperScanning;
-(void)setHotspotPluginNetworks:(NSMutableSet *)arg1 ;
-(void)setHotspotHelperScanning:(BOOL)arg1 ;
-(unsigned long long)consecutiveZeroFilteredScanResults;
-(void)setConsecutiveZeroFilteredScanResults:(unsigned long long)arg1 ;
-(unsigned long long)consecutiveZeroUnFilteredScanResults;
-(void)setConsecutiveZeroUnFilteredScanResults:(unsigned long long)arg1 ;
-(BOOL)doUnFilteredScanning;
-(void)setDoUnFilteredScanning:(BOOL)arg1 ;
-(void)setScanDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSupportsHotspotHelper:(BOOL)arg1 ;
-(void)setSupportsUnfilteredScanning:(BOOL)arg1 ;
-(BOOL)isUsingCoreWiFi;
-(void)setIsUsingCoreWiFi:(BOOL)arg1 ;
-(long long)numberOfScansPerformed;
-(void)setNumberOfScansPerformed:(long long)arg1 ;
@end

