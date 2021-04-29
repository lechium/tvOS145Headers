/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSUUID, C2MetricOptions;

@interface C2MetricRequestOptions : NSObject {

	unsigned char __allowsExpensiveAccess;
	unsigned char __allowsPowerNapScheduling;
	NSString* __sourceApplicationBundleIdentifier;
	NSString* __sourceApplicationSecondaryIdentifier;
	NSUUID* _metricUUID;
	C2MetricOptions* _metricOptions;

}

@property (assign,nonatomic) unsigned char _allowsExpensiveAccess;                          //@synthesize _allowsExpensiveAccess=__allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) unsigned char _allowsPowerNapScheduling;                       //@synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling - In the implementation block
@property (nonatomic,retain) NSString * _sourceApplicationBundleIdentifier;                 //@synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * _sourceApplicationSecondaryIdentifier;              //@synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * metricUUID;                                           //@synthesize metricUUID=_metricUUID - In the implementation block
@property (nonatomic,retain) C2MetricOptions * metricOptions;                               //@synthesize metricOptions=_metricOptions - In the implementation block
-(id)init;
-(NSString *)_sourceApplicationBundleIdentifier;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(unsigned char)_allowsExpensiveAccess;
-(unsigned char)_allowsPowerNapScheduling;
-(void)set_allowsExpensiveAccess:(unsigned char)arg1 ;
-(void)set_allowsPowerNapScheduling:(unsigned char)arg1 ;
-(NSUUID *)metricUUID;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(C2MetricOptions *)metricOptions;
-(void)setMetricUUID:(NSUUID *)arg1 ;
-(id)initWithRequestOptions:(id)arg1 ;
-(id)metricRequestTransportOptions;
@end
