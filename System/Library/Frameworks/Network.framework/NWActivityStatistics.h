/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Network/Network-Structs.h>
@class NSUUID, NWL2Report, NWDeviceReport, PBCodable, NSString;

@interface NWActivityStatistics : NSObject {

	unsigned _awdMetricID;
	NSUUID* _externallyVisibleActivityUUID;
	NSUUID* _externallyVisibleParentUUID;
	NWL2Report* _layer2Report;
	NWDeviceReport* _deviceReport;
	PBCodable* _awdReport;
	NSUUID* _activityUUID;
	NSUUID* _parentUUID;
	nw_activity_report_s _report;

}

@property (assign,nonatomic) nw_activity_report_s report;                                //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                                      //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                       //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,retain) NSUUID * activityUUID;                                      //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSUUID * parentUUID;                                        //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) unsigned domain; 
@property (nonatomic,readonly) unsigned label; 
@property (nonatomic,readonly) BOOL retry; 
@property (nonatomic,readonly) unsigned long long investigation_identifier; 
@property (nonatomic,retain) NSUUID * externallyVisibleActivityUUID;                     //@synthesize externallyVisibleActivityUUID=_externallyVisibleActivityUUID - In the implementation block
@property (nonatomic,retain) NSUUID * externallyVisibleParentUUID;                       //@synthesize externallyVisibleParentUUID=_externallyVisibleParentUUID - In the implementation block
@property (nonatomic,retain) NWL2Report * layer2Report;                                  //@synthesize layer2Report=_layer2Report - In the implementation block
@property (nonatomic,retain) NWDeviceReport * deviceReport;                              //@synthesize deviceReport=_deviceReport - In the implementation block
@property (nonatomic,retain) NSString * bundleID; 
+(id)createActivityReport:(nw_activity_report_s)arg1 uuidString:(id)arg2 parentUUIDString:(id)arg3 ;
-(unsigned)domain;
-(PBCodable *)awdReport;
-(unsigned)awdMetricID;
-(nw_activity_report_s)report;
-(id)initWithPBCodableData:(id)arg1 ;
-(void)setActivityUUID:(NSUUID *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)investigation_identifier;
-(unsigned)label;
-(NSUUID *)activityUUID;
-(void)setDeviceReport:(NWDeviceReport *)arg1 ;
-(NWDeviceReport *)deviceReport;
-(void)setReport:(nw_activity_report_s)arg1 ;
-(NSUUID *)parentUUID;
-(BOOL)retry;
-(void)setParentUUID:(NSUUID *)arg1 ;
-(void)setExternallyVisibleActivityUUID:(NSUUID *)arg1 ;
-(NSUUID *)externallyVisibleActivityUUID;
-(void)setExternallyVisibleParentUUID:(NSUUID *)arg1 ;
-(NSUUID *)externallyVisibleParentUUID;
-(void)setLayer2Report:(NWL2Report *)arg1 ;
-(NWL2Report *)layer2Report;
-(id)initWithNWActivityReport:(nw_activity_report_s*)arg1 length:(unsigned long long)arg2 ;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
@end

